#include "stdio.h"   
#include"stdlib.h"   
#define MAX 30000

int Arraya[100][100];       
char Map[50]={};
int RouterNum;
void PrintNetwork()    /* ���������ʽ��ӡ�������и��ڵ�����ӹ�ϵ */
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
//			printf("�ҵ���i=%d\n",i);
			return i;
		}
	}
	return -1;
}
void initMap(){
	for(int i=0;i<50;++i)Map[i]='a'+i;
}
int BeginningPath()//˵����ʼ����·��������Ϣ
{          



	int E;//�ߵ����� 
	printf( "������·�ɵ���Ŀ�ͱߵ���Ŀ:" );
	scanf( "%d %d", &RouterNum,&E );
	getchar();
	char cha,chb;
	printf("�������нڵ�(·��)�ı�Ż���Ϣ���һ���ΪA��1:\n");
	    for(int i=0;i<RouterNum;i++){
        for(int j=i+1;j<RouterNum;j++) {
            Arraya[j][i]=MAX;
            Arraya[i][j]=MAX;
        } 
        Arraya[i][i]=0;
    }
//    PrintNetwork();
	for(int i=0;i<RouterNum;++i){
		printf("��%d��Ϊ��",i+1);
		scanf("%c",&cha);
		getchar();
//		printf("your char is=%c\n",cha);
		Map[i]=cha;
	}
	printf("��ϵӳ��Ϊ:\n"); 
	printfMap();
	printf( "������·�ɵ��������\n" );
	int a,b;
	int exp;
	for(int i=0;i<E;++i){
		printf( "��%d���ߵ�����Ϊ����ʽ:a,b,exp��:",i);
		scanf("%c %c %d",&cha,&chb,&exp);
		getchar();
		a=getIndexByChar(cha);
		b=getIndexByChar(chb);
		if(a!=-1&&b!=-1){
//			printf("a=%d,b=%d\n",a,b);
			Arraya[a][b]=Arraya[b][a]=exp;
		}else{
			printf("������Ľڵ���Ϣӳ�䲻��,����������ýڵ�\n");
			printfMap();
			--i;
		}
	}




    int i,j,t;
//    printf("������ڵ�ĸ�����");
//    scanf("%d",&n);//һ����n���ڵ�
//    





    printf("\n\n�ڽ���·��֮ǰ : \n");
	PrintNetwork();
//    for(i=0;i<n;i++)//��ʾ��ʼ��������
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

int Dijkstra(int s,int dst)    //����sΪԴ�㵽�������С·�������� 
{
	int resNext=-1;
    int flag[100],d[100]={0},next[100]={0}; //��֪�ڵ㼯�ϣ�����ʸ������һ�� 
    int i,j;
    for(i=0;i<RouterNum;i++)//��ʼ��
    {
        d[i]=Arraya[s][i];
        flag[i]=0;
        next[i]=i;
    }
    flag[s]=1;  //��Դ�ڵ������֪���·������ڵ�ļ��� 
    int k=s,min;
    for(i=0;i<RouterNum;i++)
    {
        min=MAX;
        for(j=0;j<RouterNum;j++)//�ҳ���Сֵd[k]
            if(d[j]<min&&flag[j]==0)
            {
                min=d[j];   //Ѱ�ҽڵ�i���ھ�������Ľڵ㣬��¼��Сֵ���ڵ���� 
                k=j;
            }
        if(k==s){
        	    return -1;    //kֵû�иı�˵��û���ھ� 
		}
        flag[k]=1;//��־�Ƿ���뼯��
        for(j=0;j<=RouterNum;j++)//�ɳ��ڱߣ����µ���֪���Ϲ����µ���δ֪���Ͻڵ�ľ��룩 
            if(d[j]>Arraya[k][j]+d[k]&&flag[j]==0)
            {
                d[j]=Arraya[k][j]+d[k];
                next[j]=next[k];    //��j�ڵ��·����һ��Ϊ�м��k������k��·������һ�� 
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
	printf( "Դ�ڵ㣺" );
	
	scanf( "%c", &ch );
	getchar();
	int src=getIndexByChar(ch);

	printf( "Ŀ�Ľڵ㣺" );
	scanf( "%c", &ch );
	getchar();
	int dst=getIndexByChar(ch);
	
	int sum=0;
//    for(int i=0;i<RouterNum;i++){
//    	printf("i=%d %c \n",i,Map[i]);
//        Dijkstra(i);
//	}
	printf("\n���Ϊ��");
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
//	printf("\n�ܹ�����Ϊ%d\n",sum);
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

