#include <iostream>
#include <cstdio>
 #include <vector>
#define MAX 1000000
using namespace std;

const int N=100005; 
const int INF=0x3f3f3f3f;
vector< vector<int> > arcs;//�ڽӾ���
vector< vector<int> >p;//·��
int D[100001];//�������·������
int final[100001];//��final[i] = 1��˵�� ����vi���ڼ���S��
int n = 0;//�������
int v0 = 0;//Դ��
int v,w;
void init(int n){
	p.resize(n);
//	arcs=new int*[n+1];
//	p=new int*[n+1];
//	for(int i=0;i<n;++i){
//	//	arcs[i]=new int[n];
//		p[i]=new int[n];
//	}
//	for(int i=0;i<n;++i){
//		for(int j=0;j<n;++j){
////			arcs[i][j]=INF;
//			p[i][j]=0;
//		}
//	}
}
void ShortestPath_DIJ()
{
     for (v = 0; v < n; v++) //ѭ�� ��ʼ��
     {
          final[v] = 0; D[v] = arcs[v0][v];
          for (w = 0; w < n; w++) p[v][w] = 0;//���·��
          if (D[v] < MAX) {p[v][v0] = 1; p[v][v] = 1;}
     }
     D[v0] = 0; final[v0]=1; //��ʼ�� v0�������ڼ���S
     //��ʼ��ѭ�� ÿ�����v0��ĳ������v�����·�� ����v������S��
     for (int i = 1; i < n; i++)
     {
          int min = MAX;
          for (w = 0; w < n; w++)
          {
               //����Ϊ�ĺ��Ĺ���--ѡ��
               if (!final[w]) //���w������V-S��
               {
                    //�����������ѡ���ĵ� Ӧ����ѡ����ǰV-S����S�й�����
                    //��Ȩֵ��С�Ķ��� ��������Ϊ ��ǰ��V0����ĵ�
                    if (D[w] < min) {v = w; min = D[w];}
               }
          }
          final[v] = 1; //ѡ���õ����뵽�ϼ�S��
          for (w = 0; w < n; w++)//���µ�ǰ���·���;���
          {
               /*�ڴ�ѭ���� vΪ��ǰ��ѡ�뼯��S�еĵ�
               ���Ե�VΪ�м�� ���� d0v+dvw �Ƿ�С�� D[w] ���С�� �����
               ����ӽ��� 3 ����Ҫ���� D[5] �Ƿ�Ҫ���� �� �ж� d(v0-v3) + d(v3-v5) �ĺ��Ƿ�С��D[5]
               */
               if (!final[w] && (min+arcs[v][w]<D[w]))
               {
                    D[w] = min + arcs[v][w];
                   // p[w] = p[v];
                    p[w][w] = 1; //p[w] = p[v] +��[w]
               }
          }
     }
}
 
 
int main()
{
	int m,x,y;
    cin >>n>>m;
    init(n); 
	arcs.resize(n);
//    for(int i=0;i<n;++i){
//    	for(int j=0;j<n;++j){
//    		arcs[i][j]=INF;
//		}
//	}
//    for(int i=0;i<n;++i){
//    	for(int j=0;j<n;++j){
//    		cout<<arcs[i][j]<<" ";
//		}
//		cout<<endl;
//	}
    for (int i = 0; i < m; i++)
    {
    	cin>>x>>y;
    	
    	--x;
		--y;
    	 arcs[x].push_back(y);
//         for (int j = 0; j < n; j++)
//         {
//              cin >> arcs[i][j];
//         }
    }
//    for(int i=0;i<n;++i){
//    	for(int j=0;j<n;++j){
//    		cout<<arcs[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	
    ShortestPath_DIJ();
    cout<<D[n-1]-1<<endl;
    //for (int i = 0; i < n; i++) printf("D[%d] = %d\n",i,D[i]);
    return 0;
}
