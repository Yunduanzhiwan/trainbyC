#include<iostream>
using namespace std;
int chess[4][4];//白色為一 
int num=33;
void creat(){
	char c;
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
			cin>>c;
			if(c=='b') chess[i][j]=0;
			else if(c=='w') chess[i][j]=1;
		//	else chess[i][j]=-1;
		}
	}
}
/*
反转方块 
*/
void FanZhuan(int x,int y){
	//在4*4内則反轉
	if(x>=0&&x<4&&y>=0&&y<4){
		chess[x][y]=!chess[x][y];//非 0 变 1   1变0 
	} 
}
void change(int s){//方块序列号，1-16
		int x=s/4; //14  3 2 
		int y=s%4;
		FanZhuan(x,y);
		FanZhuan(x-1,y);
		FanZhuan(x+1,y);
		FanZhuan(x,y+1);
		FanZhuan(x,y-1);
}


/*
检查是否颜色统一 
*/ 
int chex(){
	int sum=0;
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
			sum+=chess[i][j];
		}
	}
	if(sum%16)//0 或者16 为真 
		return 0;
	else 
		return 1;
}
void dfs(int s,int b){
	if(chex()){
		if(num>b){//最少 
			num=b;
		}
		return; 
	}
	if(s>=16){
		return;
	}
	dfs(s+1,b);
	change(s);
	dfs(s+1,b+1);
	change(s);
}


int main(void){
	creat();
	dfs(0,0);
	if(num==33){
		cout<<"Impossible"<<endl;
	}	
	else{
		cout<<num<<endl;
	}
	
	return 0;
} 


//#include<stdio.h>//1753棋盘翻转
//#include<iostream>
//using namespace std;
//int chess[4][4];
//int c=33;
//void build()//将棋盘的颜色以标记化
//{
//    char c;
//    int i,j;
//    for(i=0;i<4;i++)
//    for(j=0;j<4;j++)
//    {
//        cin>>c;//此处采用c++的输入，之前用C语言一直出错，原因在于C语言的输入中会把换行也当成是一个字符
//        if(c=='w')
//        chess[i][j]=0;
//        else
//        chess[i][j]=1;
//    }
//}
//void turn(int x,int y)//翻转
//{
//     if(x>=0&&x<=3&&y>=0&&y<=3)//如果是在棋盘的四周，那么翻转的时候不一定上下左右都存在
//     chess[x][y]=!chess[x][y];
//}
//void flip(int s)//一个棋子变化，周围四个都要变化
//{
//    int i=s/4;//行
//    int j=s%4;//列
//    turn(i,j);
//    turn(i+1,j);
//    turn(i,j+1);
//    turn(i-1,j);
//    turn(i,j-1);
//}
//int complete()//判断棋盘是否变成同一的颜色
//{
//    int i,j,s1=0;
//    for(i=0;i<4;i++)
//       for(j=0;j<4;j++)
//          s1+=chess[i][j];
//    if(s1%16)
//      return 0;
//    else
//      return 1;
//}
//void dfs(int s,int b)//进行深搜.s代表当前的方格，b代表翻转的方格数
//{
//     if(complete())//如果是同一颜色，找到最终状态
//     {
//        if(c>b)
//           c=b;
//        return;
//     }
//     if(s>=16)//如果遍历完
//        return;
//    dfs(s+1,b);//不翻转，一直往下进行搜索
//    flip(s);//回溯到上一层，翻转此棋子
//    dfs(s+1,b+1);//再进行往下搜索的过程
//    flip(s);//回到上一层，把棋子的状态恢复
//}
//int main()
//{
//    build();//将棋盘的颜色以标记化
//    dfs(0,0);
//    if(c==33)//由于翻转次数最多为4*4*2=32次
//      printf("Impossible\n");
//    else
//      printf("%d\n",c);
//     return 0;
//}
