#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>
#include<time.h>
#include <conio.h>


#define WIDTH 60
#define HIGH 20

int score = 0;
//偏移量
int dx = 0;
int dy = 0;

int lx = 0;
int ly = 0;
struct Body
{
	//横坐标
	int x;
    //纵坐标
	int y;

};

struct Snake
{
	int size;
	struct Body body[WIDTH * HIGH];
}snake;

//food[0] 为x坐标 food[1]为y坐标
int food[2] = { 0 };

void InitFood();

void InitSnake();

void ShowUI();

void PlayGame();

void InitWall();

void MySetCursor(int x,int y);

void Instruction();

int main() {
	Instruction();
	srand((size_t)time(NULL));
	//去掉光标
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = sizeof(cci);
	cci.bVisible = 0;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE),&cci);


	InitWall();

	InitSnake();
	InitFood();
	//ShowUI();
	PlayGame();

	system("cls");

	MySetCursor(WIDTH / 2 - 5, HIGH / 2);

	
	printf("总共得分:%d\n",score);
	if (score <= 50) {
		printf("\t\t\t蠢货，别玩了，拜拜\n");
	}
	getchar();
	return 0;
}

/*
 初始化食物
*/
void InitFood()
{
	
	food[0] = rand() % WIDTH;
	food[1] = rand() % HIGH;
}

/*

初始化蛇
*/
void InitSnake()
{
	//初始化长度
	snake.size = 2;
	snake.body[0].x = WIDTH/2;
	snake.body[0].y =  HIGH/2;
	snake.body[1].x = WIDTH/2 - 1;
	snake.body[1].y = HIGH/2;
}

/*
  显示游戏页面
*/
void ShowUI()
{
	COORD coord;

	//更新末尾空格
	coord.X = lx;
	coord.Y = ly;
	//定位到光标的位置
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
	//显示蛇的位置
	for (int i = 0; i < snake.size;i++) {
	
		MySetCursor(snake.body[i].x, snake.body[i].y);
		if (i == 0) {
			putchar('@');
			
		}
		else {
			putchar('*');
		}
	}
	//显示食物的位置
	
	MySetCursor(food[0], food[1]);
	putchar('#');
}

/*
 游戏开始
*/
void PlayGame()
{
	char key = 'D';
	while (snake.body[0].x >= 0 && snake.body[0].x < WIDTH  && snake.body[0].y >=0 && snake.body[0].y < HIGH) {

		ShowUI();
		//方向控制
		while (_kbhit()) {//如果键盘有输入，就接收，没有就不接收
			key = _getch();//接收一个键盘输入，但是不回显
		}
		
		switch (key)
		{
		case 'D':case 'd':
			if (dx == -1) break;
			dx = 1; dy = 0; break;
		case 'A':case 'a':
			if (dx == 1) break;
			dx = -1; dy = 0; break;
		case 'W':case 'w':
			if (dy == 1) break;
			dx = 0; dy = -1; break;
		case 'S':case 's':
			if (dy == -1) break;
			dx = 0; dy = 1; break;
		}

		//是否和自身碰撞
		for (int i = 1; i < snake.size;i++) {
			if (snake.body[0].x == snake.body[i].x && snake.body[0].y == snake.body[i].y) {
				return;
			}
		}

	   //和食物的碰撞
		if (snake.body[0].x == food[0] && snake.body[0].y == food[1]) {
			//随机新食物
			InitFood();
			//身体增长
			snake.size++;
			score+=10;

		}
		//蛇移动


		//记录蛇的最后一个身体的位置,移动的时候清空
		lx = snake.body[snake.size - 1].x;
		ly = snake.body[snake.size - 1].y;

		//把蛇的前面的身体的位置赋给后面的蛇的身体的位置
		for (int i = snake.size - 1; i > 0;i--) {
			snake.body[i].x = snake.body[i - 1].x;
			snake.body[i].y = snake.body[i - 1].y;
		}

		snake.body[0].x += dx;
		snake.body[0].y += dy;

		Sleep(200);
		//system("cls");//清屏

	}

}

/*
初始化墙
*/
void InitWall()
{
	for (int i = 0; i <= HIGH;i++) {
		for (int j = 0; j <= WIDTH;j++) {
			if (i == HIGH) {
				putchar('=');
			}
			else if (j == WIDTH) {
				putchar('=');
			}
			else {
				putchar(' ');
			}
		}
		putchar('\n');
	}
}

/*
  设置光标的位置
*/
void MySetCursor(int x, int y)
{

	COORD coord;

	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void Instruction()
{

	printf("\t游戏说明\n");
	printf("W、S、A、D 控制上下左右\n");
	printf("@代表蛇头,*代表蛇身,#代表食物,=代表围墙\n");
	printf("按下回车键开始...");
	getchar();
	system("cls");
}

