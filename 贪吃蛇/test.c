#define  _CRT_SECURE_NO_WARNINGS

#include"snack.h"


void test()
{
	char ch;
	do {
		Snack snack = { 0 };
		GameStart(&snack);//开始游戏
		GameRun(&snack);//游戏运行
		GameEnd(&snack);//游戏结束
		SetPos(20, 15);
		printf("再来一局吗?(Y/N):");//提示是否重新开始
		ch = getchar();
		while (getchar() != '\n');
	} while (ch == 'Y' || ch == 'y');//如果是，就重新开始。
	SetPos(0, 28);

}
int main()
{
	srand((unsigned int)time(NULL));
	setlocale(LC_ALL, "");

	test();
	return 0;
}