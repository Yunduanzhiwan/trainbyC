#include<iostream>
using namespace std;
int chess[4][4];//��ɫ��һ 
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
��ת���� 
*/
void FanZhuan(int x,int y){
	//��4*4�ڄt���D
	if(x>=0&&x<4&&y>=0&&y<4){
		chess[x][y]=!chess[x][y];//�� 0 �� 1   1��0 
	} 
}
void change(int s){//�������кţ�1-16
		int x=s/4; //14  3 2 
		int y=s%4;
		FanZhuan(x,y);
		FanZhuan(x-1,y);
		FanZhuan(x+1,y);
		FanZhuan(x,y+1);
		FanZhuan(x,y-1);
}


/*
����Ƿ���ɫͳһ 
*/ 
int chex(){
	int sum=0;
	for(int i=0;i<4;++i){
		for(int j=0;j<4;++j){
			sum+=chess[i][j];
		}
	}
	if(sum%16)//0 ����16 Ϊ�� 
		return 0;
	else 
		return 1;
}
void dfs(int s,int b){
	if(chex()){
		if(num>b){//���� 
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


//#include<stdio.h>//1753���̷�ת
//#include<iostream>
//using namespace std;
//int chess[4][4];
//int c=33;
//void build()//�����̵���ɫ�Ա�ǻ�
//{
//    char c;
//    int i,j;
//    for(i=0;i<4;i++)
//    for(j=0;j<4;j++)
//    {
//        cin>>c;//�˴�����c++�����룬֮ǰ��C����һֱ����ԭ������C���Ե������л�ѻ���Ҳ������һ���ַ�
//        if(c=='w')
//        chess[i][j]=0;
//        else
//        chess[i][j]=1;
//    }
//}
//void turn(int x,int y)//��ת
//{
//     if(x>=0&&x<=3&&y>=0&&y<=3)//����������̵����ܣ���ô��ת��ʱ��һ���������Ҷ�����
//     chess[x][y]=!chess[x][y];
//}
//void flip(int s)//һ�����ӱ仯����Χ�ĸ���Ҫ�仯
//{
//    int i=s/4;//��
//    int j=s%4;//��
//    turn(i,j);
//    turn(i+1,j);
//    turn(i,j+1);
//    turn(i-1,j);
//    turn(i,j-1);
//}
//int complete()//�ж������Ƿ���ͬһ����ɫ
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
//void dfs(int s,int b)//��������.s����ǰ�ķ���b����ת�ķ�����
//{
//     if(complete())//�����ͬһ��ɫ���ҵ�����״̬
//     {
//        if(c>b)
//           c=b;
//        return;
//     }
//     if(s>=16)//���������
//        return;
//    dfs(s+1,b);//����ת��һֱ���½�������
//    flip(s);//���ݵ���һ�㣬��ת������
//    dfs(s+1,b+1);//�ٽ������������Ĺ���
//    flip(s);//�ص���һ�㣬�����ӵ�״̬�ָ�
//}
//int main()
//{
//    build();//�����̵���ɫ�Ա�ǻ�
//    dfs(0,0);
//    if(c==33)//���ڷ�ת�������Ϊ4*4*2=32��
//      printf("Impossible\n");
//    else
//      printf("%d\n",c);
//     return 0;
//}
