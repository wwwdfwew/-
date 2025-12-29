#define  _CRT_SECURE_NO_WARNINGS

#include"snack.h"
void color(int c)
{
	//这是用来设置控制台的文本颜色，像开始界面的贪吃蛇小游戏文本就是由这个来控制颜色的
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c); 
	
}
void cursor_hide()
{
	HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;//CONSOLE_CURSOR_INFO是一个结构体，包含屏幕光标信息，CONSOLE_CURSOR_INFO CursorInfo创建一个光标信息变量
	GetConsoleCursorInfo(hOutput, &CursorInfo);//将我们这个控制台的屏幕光标信息给CursorInfo这个变量。
	CursorInfo.bVisible = false; //光标的可见度设置为无。
	SetConsoleCursorInfo(hOutput, &CursorInfo);//将刚刚设置的光标信息设置到控制台上。
}

//SetPos这个函数就是来设置我们的屏幕光标位置
void SetPos(int x,int y)
{
	//想要在控制台中绘制贪吃蛇，需要获得对控制台的控制，GetStdHandle是一个函数，他获取这个标准输出设备的一个值，将它赋给hOutput可以操控控制台
		//通过获得的hOutput值，我们控制这个控制台，来绘制贪吃蛇的地图
	HANDLE hOutput = NULL;
	hOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	//绘制屏幕光标的位置。
	COORD pos = { x,y };//COORD是一个结构特，它可以设置光标位置，COORD pos定义一个结构体变量pos用来设置光标位置，x,y.

	//SetConsoleCursorPosition将控制台光标位置改为我们设置好的光标位置pos
	SetConsoleCursorPosition(hOutput, pos);
}

void Welcome_game()
{
	color(10);//设置文本颜色
	SetPos(37, 12);//上面我们设置了一个可以设置光标位置的函数，这里其实就是设置光标的位置，使我们后面写的文字在这个光标位置处开始打印到屏幕上
	wprintf(L"贪吃蛇小游戏\n");//在屏幕上打印文本
	SetPos(35, 18);
	system("pause");//system是一个可以使用系统命令的函数，pause是暂停，在每次设置完文本后使用这个，就可以避免我们的程序在打印完文本后直接就结束了。
	system("cls");
	SetPos(25, 8);
	wprintf(L"用 ↑.↓.←.→ 来控制蛇的移动");
	SetPos(25, 10);
	wprintf(L" ");
	SetPos(25, 12);
	wprintf(L"按F3加速，F4减速");
	SetPos(25, 14);
	wprintf(L" ");
	SetPos(25, 16);
	wprintf(L"按ESC正常退出游戏，按空格暂停游戏");
	SetPos(25, 18);
	wprintf(L" ");
	SetPos(25, 20);
	wprintf(L"加速可以获得更多的分数");
	SetPos(25, 22);
	wprintf(L" ");
	SetPos(25, 24);
	system("pause");//system函数可以使用系统的命令，pause是让程序暂停的意思。
	system("cls");
	color(10);
}


//绘制我们贪吃蛇的墙
void CreatMap()
{
	color(12);
	
	// 绘制上边界（第0行）
	for (int i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'□');//// 打印方块字符作为边界
	}
	
	// 绘制下边界（第26行）
	SetPos(0, 26);
	for (int i = 0; i < 29; i++)
	{
		wprintf(L"%lc", L'□');
	} 
	
	// 绘制左边界
	for (int i = 1; i <= 25; i++)
	{
		SetPos(0, i);
		wprintf(L"%lc", L'□');
	}
	// 绘制右边界
	for (int i = 1; i <= 25; i++)
	{
		SetPos(56, i);// 56是因为每个方块占2个字符宽度（28×2）
		wprintf(L"%lc", L'□');
	}
	color(7);// 恢复默认颜色
}


//设置贪吃蛇的初始长度
void CreateSnack(pSnack ps)
{
	color(10);
	
	pSnackNode cur = NULL;//这里可以认为cur是需要我们创建的贪吃蛇的长度，但是现在为null，就是还没有。
//这里进行五次循环，初始化贪吃蛇的长度为5，每进行一次循环，就会创建一个贪吃蛇的身子，也就是程序运行之后的贪吃蛇圆球。
	for (int i = 0; i < 5; i++)
	{
		cur =(pSnackNode)malloc(sizeof(SnackNode));
		cur->next = NULL;
		cur->x = POS_X + i * 2;
		cur->y = POS_Y;
		if (ps->_psnack == NULL)
		{
			ps->_psnack = cur;
		}
		else
		{
			cur->next = ps->_psnack;
			ps->_psnack = cur;
		}

	}

	//这个while循环是将每个我们创建的贪吃蛇的身子连接起来成为一个长度为5的贪吃蛇
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", Body);
		cur = cur->next;
	}
	cur= ps->_psnack;

	// 初始化蛇的其他属性
	ps->_dir = RIGHT;// 初始方向向右
	ps->_food_weight = 10;// 食物基础分数
	ps->_sleep_time = 200;// 初始移动速度（毫秒）
	ps->_status = OK;// 游戏状态为正常
	color(7);
}

//生成食物
void CreateFood(pSnack ps)
{
	//x,y为食物的坐标
	int x = 0;
	int y = 0;
  again:
	//do while 循环是先执行x = rand() % 53 + 2;y = rand() % 24 + 1这两个语句，再对while里面的条件进行判断。
	do{
		x = rand() % 53 + 2;//rand()函数是随机生成函数，rand() % 53 +2就能随机生成2-53之间的x坐标
		y = rand() % 24 + 1;//同理
	} while (x%2!=0);

	// 检查食物位置是否与蛇身重叠
	pSnackNode cur = ps->_psnack;
	while (cur)
	{
		if (cur->x == x && cur->y == y)//这个if是判断是否重叠了
		{
			goto again;//如果重叠了，就执行上面从again位置开始的语句，也就是重新随机生成食物的坐标
		}
		cur = cur->next;
	}

	//// 创建食物节点
	pSnackNode SnackFood = (pSnackNode)malloc(sizeof(SnackNode));//创建一个食物
	if (SnackFood == NULL)
	{
		perror("CreateFood malloc fail");
		return;
	}

	//下面就是对食物的属性的设置
	color(13);// 设置颜色为亮紫色
	SnackFood->x = x;
	SnackFood->y = y;
	SnackFood->next = NULL;
	SetPos(x, y);//设置食物的坐标位置，因为上面设置的坐标是随机的，这里设置的也是随机的。
	wprintf(L"%lc", Food);// 打印食物字符
	ps->_pfood = SnackFood;
	color(7);
}


//暂停游戏函数
void Pause()
{
	while (1)
	{
		Sleep(200);  // 每次循环等待200毫秒
		if (KEY_PRESS(VK_SPACE))  // 检查空格键是否被按下
		{
			break;  // 如果按下空格，退出循环
		}
	}
}



//打印帮助信息函数
void PrintHelpInfo()
{
	color(10);  // 设置颜色为亮绿色
	SetPos(64, 10);
	wprintf(L"不能穿墙，不能咬到自己");
	SetPos(64, 12);
	wprintf(L"用 ↑.↓.←.→ 来控制蛇的移动");
	SetPos(64, 14);
	wprintf(L"按F3加速，F4减速");
	SetPos(64, 16);
	wprintf(L"按ESC正常退出游戏，按空格暂停游戏");
	SetPos(64, 18);

	color(7);  // 恢复默认颜色
}


//判断下一个位置是否是食物
bool Next_Is_Food(pSnackNode pn, pSnack ps)
{
	return (ps->_pfood->x == pn->x && ps->_pfood->y == pn->y);
}

//吃食物函数
void Eat_Food(pSnackNode pn, pSnack ps)
{
	// 将食物节点添加到蛇头
	ps->_pfood->next = ps->_psnack;
	ps->_psnack = ps->_pfood;

	free(pn);  // 释放预分配的下一个位置节点
	pn = NULL;

	// 重新绘制蛇
	pSnackNode cur = ps->_psnack;
	color(10);
	while (cur)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", Body);
		cur = cur->next;
	}
	color(7);

	ps->_sum_score += ps->_food_weight;  // 增加分数

	CreateFood(ps);  // 创建新食物
}



//没有吃到食物时的移动
void No_Food(pSnackNode pn, pSnack ps)
{
	// 将新节点添加到蛇头
	pn->next = ps->_psnack;
	ps->_psnack = pn;

	// 绘制蛇身（除尾部）
	pSnackNode cur = ps->_psnack;
	color(10);
	while (cur->next->next != NULL)
	{
		SetPos(cur->x, cur->y);
		wprintf(L"%lc", Body);
		cur = cur->next;
	}
	color(7);

	// 清除蛇尾
	SetPos(cur->next->x, cur->next->y);
	printf("  ");  // 用两个空格覆盖原来的蛇尾

	free(cur->next);  // 释放蛇尾节点
	cur->next = NULL;  // 设置新的蛇尾
}



///判断是否撞墙
void Kill_By_Wall(pSnack ps)
{
	if (ps->_psnack->x == 0 || ps->_psnack->x == 56 ||
		ps->_psnack->y == 0 || ps->_psnack->y == 26)
	{
		ps->_status = KILL_BY_WALL;  // 设置状态为撞墙死亡
	}
}

//判断是否撞到自己
void Kill_By_Self(pSnack ps)
{
	pSnackNode cur = ps->_psnack->next;  // 从蛇头后面开始检查
	while (cur)
	{
		if (cur->x == ps->_psnack->x && cur->y == ps->_psnack->y)
		{
			ps->_status = KILL_BY_SELF;  // 设置状态为撞到自己死亡
			break;
		}
		cur = cur->next;
	}
}

//蛇的移动函数（核心逻辑）
void SnackMove(pSnack ps)
{
	// 创建下一个位置节点
	pSnackNode pNextNode = (pSnackNode)malloc(sizeof(SnackNode));
	if (pNextNode == NULL)
	{
		perror("SnackMove::malloc fail");
		return;
	}

	// 根据当前方向计算下一个位置
	switch (ps->_dir)
	{
	case UP:
		pNextNode->x = ps->_psnack->x;
		pNextNode->y = ps->_psnack->y - 1;
		break;
	case DOWN:
		pNextNode->x = ps->_psnack->x;
		pNextNode->y = ps->_psnack->y + 1;
		break;
	case LEFT:
		pNextNode->x = ps->_psnack->x - 2;  // 减2因为每个节点占2字符宽
		pNextNode->y = ps->_psnack->y;
		break;
	case RIGHT:
		pNextNode->x = ps->_psnack->x + 2;  // 加2因为每个节点占2字符宽
		pNextNode->y = ps->_psnack->y;
		break;
	}

	// 判断是否吃到食物
	if (Next_Is_Food(pNextNode, ps))
	{
		Eat_Food(pNextNode, ps);  // 吃食物
	}
	else
	{
		No_Food(pNextNode, ps);  // 正常移动
	}

	// 检查死亡条件
	Kill_By_Wall(ps);   // 检查是否撞墙
	Kill_By_Self(ps);   // 检查是否撞到自己
}






//游戏开始函数
void GameStart(pSnack ps)
{
	system("mode con cols=100 lines=30");  // 设置控制台窗口大小
	system("title 贪吃蛇");  // 设置窗口标题

	cursor_hide();      // 隐藏光标
	Welcome_game();     // 显示欢迎界面
	CreatMap();         // 绘制地图

	CreateSnack(ps);    // 创建蛇
	CreateFood(ps);     // 创建食物
}



//游戏运行主循环
void GameRun(pSnack ps)
{
	PrintHelpInfo();  // 显示帮助信息

	do {
		// 显示分数信息
		SetPos(64, 6);
		wprintf(L"当前的总分数为：");
		printf("%d ", ps->_sum_score);
		SetPos(64, 8);
		wprintf(L"当前单个食物分数为：");
		printf("%d ", ps->_food_weight);

		// 处理键盘输入
		if (KEY_PRESS(VK_UP) && ps->_dir != DOWN)
		{
			ps->_dir = UP;  // 上方向键
		}
		else if (KEY_PRESS(VK_DOWN) && ps->_dir != UP)
		{
			ps->_dir = DOWN;  // 下方向键
		}
		else if (KEY_PRESS(VK_LEFT) && ps->_dir != RIGHT)
		{
			ps->_dir = LEFT;  // 左方向键
		}
		else if (KEY_PRESS(VK_RIGHT) && ps->_dir != LEFT)
		{
			ps->_dir = RIGHT;  // 右方向键
		}
		else if (KEY_PRESS(VK_SPACE))
		{
			Pause();  // 空格键暂停
		}
		else if (KEY_PRESS(VK_ESCAPE))
		{
			ps->_status = END_OK;  // ESC键正常退出
		}
		else if (KEY_PRESS(VK_F3))
		{
			// F3加速：减少延迟，增加食物分数
			if (ps->_sleep_time > 80)
			{
				ps->_sleep_time -= 30;
				ps->_food_weight += 2;
			}
		}
		else if (KEY_PRESS(VK_F4))
		{
			// F4减速：增加延迟，减少食物分数
			if (ps->_food_weight > 2)
			{
				ps->_sleep_time += 30;
				ps->_food_weight -= 2;
			}
		}

		// 移动蛇
		SnackMove(ps);
		Sleep(ps->_sleep_time);  // 控制游戏速度
	} while (ps->_status == OK);  // 游戏状态正常时继续循环
}



//游戏结束函数
void GameEnd(pSnack ps)
{
	SetPos(24, 12);
	// 根据游戏结束原因显示不同信息
	switch (ps->_status)
	{
	case END_OK:
		wprintf(L"您主动结束游戏\n");
		break;
	case KILL_BY_WALL:
		wprintf(L"您撞到墙上，游戏结束\n");
		break;
	case KILL_BY_SELF:
		wprintf(L"您撞到了自己，游戏结束\n");
		break;
	}

	// 释放蛇身所有节点内存
	pSnackNode cur = ps->_psnack;
	while (cur)
	{
		pSnackNode del = cur;
		cur = cur->next;
		free(del);
	}
}