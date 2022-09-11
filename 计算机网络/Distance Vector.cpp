#include <stdio.h>
#define ROUTER_OF_NUMBER	100                     /* ������·�ɵ������Ŀ */
#define MaxExp			10000                   /* ����Ϊ��·�ɷ���Ϊ����� */

int RouterNum;                                          /* ������·�ɵĸ��� */

/* ����һ��·�ɵ���Ϣ */
struct Router
{
	int	exp;                                    /* ÿ����·�ķ��� */
	int	neighbor;                               /* ���ڽڵ����Ϣ,�����ڵ���������Ϊ1������Ϊ0 */
	int	nexthop;                                /* ���սڵ����һ���ĵ�ַ */
//	int num=0; 
};


Router routertable[ROUTER_OF_NUMBER][ROUTER_OF_NUMBER]; /* ·�ɱ���Ϣ */

void InitialNodeState();                                /* ��ʼ���ڵ�ֲ������ */


void PrintNetwork();                                    /* ��������ͼ */


void ExchangeInformation();                             /* ���ڽڵ�佻����·��Ϣ */


void DV( int send, int recv );                          /* DV�㷨 */


void DisplayRouter( int src, int dst );                 /* ��ʾԴ�ڵ㵽Ŀ�Ľڵ�·�� */

char Map[50]={};
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
int main()
{
	int src, dst;
	InitialNodeState();

	printf( "����ķ������\n" );
	PrintNetwork();

/* ��Ϊ������᲻ͣ�ĸ����������Ϣ�����������ѭ���������Ը�����������˶�����һ�����м����ڵ��ѭ�����ٴ� */
	for ( int i = 0; i < RouterNum; i++ )
	{
		ExchangeInformation();
	}

	printf( "��������Ϣ��������·�ɷ������\n" );
	PrintNetwork();     /* ��ʾѰ�������·�ɵ�����ͼ */


	char ch;
	printf( "Դ�ڵ㣺" );
	
	scanf( "%c", &ch );
	getchar();
	src=getIndexByChar(ch);

	printf( "Ŀ�Ľڵ㣺" );
	scanf( "%c", &ch );
	getchar();
	dst=getIndexByChar(ch);
	printf( "\n" );
	printf( "Դ�ڵ㵽Ŀ�Ľڵ���ܷ��ã�%d\n", routertable[src][dst].exp );
	printf( "\n" );
	DisplayRouter( src, dst );
}


void InitialNodeState()
{
	int E;//�ߵ����� 
	printf( "������·�ɵ���Ŀ�ͱߵ���Ŀ:" );
	scanf( "%d %d", &RouterNum,&E );
	getchar();
	char cha,chb;
	printf("�������нڵ�(·��)�ı�Ż���Ϣ���һ���ΪA��1:\n");
	
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
			routertable[a][b].exp=routertable[b][a].exp=exp;
		}else{
			printf("������Ľڵ���Ϣӳ�䲻��,����������ýڵ�\n");
			printfMap();
			--i;
		}
	}



//	for ( int i = 0; i < RouterNum - 1; i++ )
//	{
//		for ( int j = i + 1; j < RouterNum; j++ )
//		{
//			printf( "�ӵ�%d���ڵ㵽��%d���ڵ�ķ���:", i, j );
//			scanf( "%d", &routertable[i][j].exp );
//			routertable[j][i].exp = routertable[i][j].exp;
//			/* �������ص�·�ɵķ�����ͬ */
//		}
//	}

	/* ͨ��·�ɵķ�����ȷ������֮������ڹ�ϵ */

	for ( int m = 0; m < RouterNum; m++ )
	{
		for ( int n = 0; n < RouterNum; n++ )
		{
			if ( m == n )
			{
				routertable[m][n].exp		= -1;
				routertable[m][n].neighbor	= 0;
				routertable[m][n].nexthop	= -1;
			}else  {
				if ( routertable[m][n].exp != -1 )              /* ������Ϊ-1˵�����ڵ������ӣ���Ϊ���ڵĽڵ� */
				{
					routertable[m][n].neighbor	= 1;    /* ˵�������ڵ������ڵ� */
					routertable[m][n].nexthop	= -1;
//					routertable[m][n].num	= 1;

					/* ��ʼ��ʱ������һ���ڵ� */
				}else  {
					routertable[m][n].neighbor	= 0;
					routertable[m][n].nexthop	= -1;
				}
			}
		}
	}
}


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
					if ( routertable[i - 1][j - 1].exp != -1 ){
						printf( "  %3d  ", routertable[i - 1][j - 1].exp );
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


void ExchangeInformation()
{
	for ( int m = 0; m < RouterNum; m++ )
	{
		for ( int n = 0; n < RouterNum; n++ )
		{
			if ( routertable[m][n].neighbor == 1 )  /* ���ڽڵ�֮�佻����·��Ϣ */
			{
				DV( m, n );                     /* ͨ�����ڽڵ����Ϣ���·��ͽڵ�ľ������� */
			}
		}
	}
}


void DV( int send, int recv )                                   /* ���սڵ�ͨ�����յ�����Ϣ�������Լ��ľ������� */
{
	for ( int i = 0; i < RouterNum; i++ )
	{
		if ( routertable[send][i].exp > 0 )             /* ���ͽڵ㵽��i�ڵ����·�� */
		{
			if ( routertable[recv][i].exp > 0 )     /* ���յĽڵ㵽��i�ڵ����·�� */
			{
/* ���¼���������� */
				if ( routertable[recv][i].exp > routertable[recv][send].exp + routertable[send][i].exp )
				{
/* ������սڵ㵽�����ڵ��������������Ϣ�б��ѵ�i�ڵ�����·������һ������Ϊ���ͽڵ� */
					routertable[recv][i].exp	= routertable[recv][send].exp + routertable[send][i].exp;
					routertable[recv][i].nexthop	= send;
//					routertable[recv][i].num	=routertable[recv][send].num + routertable[send][i].num;
				}
//				else if(routertable[recv][i].exp == (routertable[recv][send].exp + routertable[send][i].exp)){//������ȣ�ѡ�񾭹��Ľڵ����ٵ�
//					
//					 if(routertable[recv][i].num<(routertable[recv][send].num + routertable[send][i].num)){
//					 	routertable[recv][i].exp	= routertable[recv][send].exp + routertable[send][i].exp;
//						routertable[recv][i].nexthop	= send;
//					 }
//					
//				}
/* �������κεĸĶ� */
			}
			else {
				if ( recv != i ) /* ��ͬ�ڵ㲻���κδ��� */
				{
/* ���յĽڵ㵽��i�ڵ��·�������ڣ��ѽ��սڵ㵽i·����ӵ����սڵ㵽i�ڵ����·�� */
					routertable[recv][i].exp	= routertable[recv][send].exp + routertable[send][i].exp;
					routertable[recv][i].nexthop	= send;
				}
			}
		}
/* �����ͽڵ㵽��i�ڵ�·�������ڣ��Բ����κεĸĶ� */
	}
}


void DisplayRouter( int src, int dst )
{
	if ( src < 0 || src >= RouterNum || dst < 0 || dst >= RouterNum )
	{
		printf( "������û����Ҫ�ҵ�·��\n" );
	}

	int count_router[ROUTER_OF_NUMBER];     /* ����·��ͳ���� */
	count_router[0] = src;
	int flag = count_router[0];             /* ѭ�����Ʊ�־ */


	printf( "Դ�ڵ㵽Ŀ�Ľڵ���������·��:" );
//	printf( "%d->", count_router[0] );
	printf( "%c->", Map[count_router[0]] );
	int k = 1;
	while ( flag != -1 )
	{
		count_router[k] = routertable[src][dst].nexthop;
		flag		= count_router[k];
		src		= flag;
		if ( flag != -1 )
		{
//			printf( "%d->", count_router[k] );
			printf( "%c->", Map[count_router[k]] );
		}
		k++;
	}

	printf( "%c\n", Map[dst] );
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

