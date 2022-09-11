#include "stdio.h"   
#include"stdlib.h"   
#define MAX 30000

int Arraya[100][100];       
char Map[50]={};
int RouterNum;
void PrintNetwork()    /* 用网格的形式打印出网络中各节点的连接关系 */
{
	printf( "\n" );
	printf( "\n" );

	for ( int i = 0; i <= RouterNum; i++ )
	{
		for ( int j = 0; j <= RouterNum; j++ )
		{
			if ( i == 0 )
			{
				if ( j == 0 ){
					printf( "       " );
				}else  {
//					printf( "  %d  ", j - 1 );
					printf( "  %3c  ", Map[j-1] );
				}
			}
			else  {
				if ( j == 0 ){
//					printf( "  %d  ", i - 1 );
					printf( "  %3c  ", Map[i-1] );
				}
				else  {
					if ( Arraya[i - 1][j - 1] != MAX ){
						printf( "  %3d  ", Arraya[i - 1][j - 1] );
					}
					else  {
						printf( "  %3c  ",'*');
					}
				}
			}
		}
		printf( "\n" );
		printf( "\n" );
	}
}
void printfMap(){
	for(int i=0;i<RouterNum;++i){
			printf(" %d->%c\n",i,Map[i]);
	}
}
int getIndexByChar(char ch){
//	printf("ch=%c\n",ch);
	for(int i=0;i<RouterNum;++i){
		if(Map[i]==ch){
//			printf("找到了i=%d\n",i);
			return i;
		}
	}
	return -1;
}
void initMap(){
	for(int i=0;i<50;++i)Map[i]='a'+i;
}
int BeginningPath()//说明初始化的路由连接信息
{          



	int E;//边的数量 
	printf( "网络中路由的数目和边的数目:" );
	scanf( "%d %d", &RouterNum,&E );
	getchar();
	char cha,chb;
	printf("输入所有节点(路由)的编号或信息如第一天边为A或1:\n");
	    for(int i=0;i<RouterNum;i++){
        for(int j=i+1;j<RouterNum;j++) {
            Arraya[j][i]=MAX;
            Arraya[i][j]=MAX;
        } 
        Arraya[i][i]=0;
    }
//    PrintNetwork();
	for(int i=0;i<RouterNum;++i){
		printf("第%d个为：",i+1);
		scanf("%c",&cha);
		getchar();
//		printf("your char is=%c\n",cha);
		Map[i]=cha;
	}
	printf("关系映射为:\n"); 
	printfMap();
	printf( "网络中路由的连接情况\n" );
	int a,b;
	int exp;
	for(int i=0;i<E;++i){
		printf( "第%d条边的数据为（格式:a,b,exp）:",i);
		scanf("%c %c %d",&cha,&chb,&exp);
		getchar();
		a=getIndexByChar(cha);
		b=getIndexByChar(chb);
		if(a!=-1&&b!=-1){
//			printf("a=%d,b=%d\n",a,b);
			Arraya[a][b]=Arraya[b][a]=exp;
		}else{
			printf("你输入的节点信息映射不对,请重新输入该节点\n");
			printfMap();
			--i;
		}
	}




    int i,j,t;
//    printf("请输入节点的个数：");
//    scanf("%d",&n);//一共有n个节点
//    





    printf("\n\n在交换路由之前 : \n");
	PrintNetwork();
//    for(i=0;i<n;i++)//显示初始化的数据
//    {         
//            printf("\t");
//            for(j=0;j<n;j++)
//            {
//                if(Arraya[i][j]==-1)
//                    printf("* ");
//                else    
//                    printf("%d  ",Arraya[i][j]);
//            }
//            printf("\n");
//    }
//    return 0;


}

int Dijkstra(int s,int dst)    //求以s为源点到各点的最小路径及花费 
{
	int resNext=-1;
    int flag[100],d[100]={0},next[100]={0}; //已知节点集合，距离矢量，下一跳 
    int i,j;
    for(i=0;i<RouterNum;i++)//初始化
    {
        d[i]=Arraya[s][i];
        flag[i]=0;
        next[i]=i;
    }
    flag[s]=1;  //把源节点加入已知最短路径距离节点的集合 
    int k=s,min;
    for(i=0;i<RouterNum;i++)
    {
        min=MAX;
        for(j=0;j<RouterNum;j++)//找出最小值d[k]
            if(d[j]<min&&flag[j]==0)
            {
                min=d[j];   //寻找节点i的邻居中最近的节点，记录最小值及节点序号 
                k=j;
            }
        if(k==s){
        	    return -1;    //k值没有改变说明没有邻居 
		}
        flag[k]=1;//标志是否放入集合
        for(j=0;j<=RouterNum;j++)//松弛邻边（以新的已知集合构造新的与未知集合节点的距离） 
            if(d[j]>Arraya[k][j]+d[k]&&flag[j]==0)
            {
                d[j]=Arraya[k][j]+d[k];
                next[j]=next[k];    //到j节点的路径下一跳为中间点k，即到k的路径的下一跳 
            }
    }
//    printf("r%d  next  cost\n",s);
    
    for(i=0;i<RouterNum;i++)
    {
        if(i==s)
            continue;
        if(i==dst)
			{
				resNext=next[i];
			
			}
			
//        printf("%c : %c  %d\n",Map[i],Map[next[i]],d[i]);
    }

    return resNext;
}

int main()
{
    int i;
    BeginningPath();
    
    
    
    char ch;
	printf( "源节点：" );
	
	scanf( "%c", &ch );
	getchar();
	int src=getIndexByChar(ch);

	printf( "目的节点：" );
	scanf( "%c", &ch );
	getchar();
	int dst=getIndexByChar(ch);
	
	int sum=0;
//    for(int i=0;i<RouterNum;i++){
//    	printf("i=%d %c \n",i,Map[i]);
//        Dijkstra(i);
//	}
	printf("\n结果为：");
	int next;
	int t;
	for(int i=src;i!=dst;){
//		printf("i=%d\n",i);
		next=Dijkstra(i,dst);
		
		t=next;
		
		printf("%c ->  ",Map[i]);
		i=t;
//		sum+=*(next+1);
	}
	printf("%c\n",Map[dst]);
//	printf("\n总共花费为%d\n",sum);
    return 0;
}

/*
5 6
a b c d e
a b 2
a e 2
b e 6
b c 8
c d 3
d e 6

5 6
a b c d e
a b 6
a e 1
b e 8
e d 2
d c 2
c b 1
*/

