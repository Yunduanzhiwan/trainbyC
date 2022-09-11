#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<math.h>
#include<time.h>
#include <conio.h>


#define WIDTH 60
#define HIGH 20

int score = 0;
//ƫ����
int dx = 0;
int dy = 0;

int lx = 0;
int ly = 0;
struct Body
{
	//������
	int x;
    //������
	int y;

};

struct Snake
{
	int size;
	struct Body body[WIDTH * HIGH];
}snake;

//food[0] Ϊx���� food[1]Ϊy����
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
	//ȥ�����
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

	
	printf("�ܹ��÷�:%d\n",score);
	if (score <= 50) {
		printf("\t\t\t�����������ˣ��ݰ�\n");
	}
	getchar();
	return 0;
}

/*
 ��ʼ��ʳ��
*/
void InitFood()
{
	
	food[0] = rand() % WIDTH;
	food[1] = rand() % HIGH;
}

/*

��ʼ����
*/
void InitSnake()
{
	//��ʼ������
	snake.size = 2;
	snake.body[0].x = WIDTH/2;
	snake.body[0].y =  HIGH/2;
	snake.body[1].x = WIDTH/2 - 1;
	snake.body[1].y = HIGH/2;
}

/*
  ��ʾ��Ϸҳ��
*/
void ShowUI()
{
	COORD coord;

	//����ĩβ�ո�
	coord.X = lx;
	coord.Y = ly;
	//��λ������λ��
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	putchar(' ');
	//��ʾ�ߵ�λ��
	for (int i = 0; i < snake.size;i++) {
	
		MySetCursor(snake.body[i].x, snake.body[i].y);
		if (i == 0) {
			putchar('@');
			
		}
		else {
			putchar('*');
		}
	}
	//��ʾʳ���λ��
	
	MySetCursor(food[0], food[1]);
	putchar('#');
}

/*
 ��Ϸ��ʼ
*/
void PlayGame()
{
	char key = 'D';
	while (snake.body[0].x >= 0 && snake.body[0].x < WIDTH  && snake.body[0].y >=0 && snake.body[0].y < HIGH) {

		ShowUI();
		//�������
		while (_kbhit()) {//������������룬�ͽ��գ�û�оͲ�����
			key = _getch();//����һ���������룬���ǲ�����
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

		//�Ƿ��������ײ
		for (int i = 1; i < snake.size;i++) {
			if (snake.body[0].x == snake.body[i].x && snake.body[0].y == snake.body[i].y) {
				return;
			}
		}

	   //��ʳ�����ײ
		if (snake.body[0].x == food[0] && snake.body[0].y == food[1]) {
			//�����ʳ��
			InitFood();
			//��������
			snake.size++;
			score+=10;

		}
		//���ƶ�


		//��¼�ߵ����һ�������λ��,�ƶ���ʱ�����
		lx = snake.body[snake.size - 1].x;
		ly = snake.body[snake.size - 1].y;

		//���ߵ�ǰ��������λ�ø���������ߵ������λ��
		for (int i = snake.size - 1; i > 0;i--) {
			snake.body[i].x = snake.body[i - 1].x;
			snake.body[i].y = snake.body[i - 1].y;
		}

		snake.body[0].x += dx;
		snake.body[0].y += dy;

		Sleep(200);
		//system("cls");//����

	}

}

/*
��ʼ��ǽ
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
  ���ù���λ��
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

	printf("\t��Ϸ˵��\n");
	printf("W��S��A��D ������������\n");
	printf("@������ͷ,*��������,#����ʳ��,=����Χǽ\n");
	printf("���»س�����ʼ...");
	getchar();
	system("cls");
}

