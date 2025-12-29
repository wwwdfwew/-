#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#include<stdlib.h>
#include <locale.h>
#include<time.h>
#include<errno.h>
#include<assert.h>

#define Wall L'□'//设置墙的形状
#define Body L'●'//设置蛇身体的形状
#define Food L'★'//设置食物的形状

//定义蛇的初始位置
#define POS_X 24
#define POS_Y 5

//检测我们的按键是否按下
#define KEY_PRESS(VK) ( (GetAsyncKeyState(VK) & 0x1) ? 1 : 0 )


//定义上下左右方向键
enum DIRECTION
{
	UP = 1,//上
	DOWN,//下
	LEFT,//左
	RIGHT,//右
};


enum GAME_STATUS
{
	OK,//// 游戏正常进行
	KILL_BY_WALL,// 撞墙死亡
	KILL_BY_SELF,// 撞到自己死亡
	END_OK,// 正常退出
};

typedef struct SnackNode
{
	int x;
	int y;
	
	struct SnackNode* next;
}SnackNode, * pSnackNode;

typedef struct Snack
{
	
	pSnackNode _psnack;
	pSnackNode _pfood;
	enum DIRECTION _dir;
	enum GAME_STATUS _status;
	int _food_weight;
	int _sum_score;
	int _sleep_time;
}Snack,*pSnack;


void SetPos(int x, int y);

void GameStart(pSnack ps);


void Welcome_game();


void CreatMap();


void PrintHelpInfo();


void CreateSnack(pSnack ps);


void CreateFood(pSnack ps);


void Pause();


void GameRun(pSnack ps);


void SnackMove(pSnack ps);


bool Next_Is_Food(pSnackNode pn,pSnack ps);


void Eat_Food(pSnackNode pn, pSnack ps);


void No_Food(pSnackNode pn, pSnack ps);

void Kill_By_Wall(pSnack ps);


void GameEnd(pSnack ps);