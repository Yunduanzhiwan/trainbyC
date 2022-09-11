////#include<iostream>
////#include<cstdio>
////#include<cstring>
////#include<string.h>
////#include<algorithm>
////#include<vector>
////using namespace std;
//// 
////const int N = 1005;
////int n, m, flag, top, sum, du[N], ans[5005], map[N][N];
//// 
////void dfs(int x)
////{
////    ans[++top] = x;
////    for(int i = 1; i <= n; i++)
////    {
////        if(map[x][i] >= 1)
////        {
////            map[x][i]--;
////            map[i][x]--;
////            dfs(i);
////            break;
////        }
////    }
////}
//// 
////void fleury(int x)
////{
////    top = 1;
////    ans[top] = x;
////    while(top > 0)
////    {
////        int k = 0;
////        for(int i = 1; i <= n; i++)//�ж��Ƿ����չ
////        {
////            if(map[ans[top]][i] >= 1)//������һ����ans[top]�����ı�  ��ô���ǿ���չ
////            {k = 1; break;}
////        }
////        if(k == 0)//�õ�xû�������ı߿��������ˣ���������չ���� ��ô�������
////        {
////            printf("%d ", ans[top]);
////            top--;
////        }
////        else if(k == 1)//�����չ�� ��dfs����չ������·��
////        {
////            top--;//����Ҫע��
////            dfs(ans[top+1]);
////        }
////    }
////}
////int main()
////{
////    if(scanf("%d%d", &n, &m) != EOF)
////    {
////        memset(du, 0, sizeof(du));
////        memset(map, 0, sizeof(map));
//// 
////        for(int i = 1; i <= m; i++)
////        {
////            int x, y;
////            scanf("%d%d", &x, &y);
////            map[x][y]++; //��¼�ߣ� ��Ϊ������ͼ���Լ������ߣ� ������֮������ж�����
////            map[y][x]++;
////            du[x]++;
////            du[y]++;
////        }
////        flag = 1; // flag��ǿ�ʼ�㡣 ������е����ȫΪż���Ǿʹ�1��ʼ��
////        sum = 0;
////        for(int i = 1; i <= n; i++)
////        {
////            if(du[i] % 2 == 1)
////            {
////                sum++;
////                flag = i;// ���������ߣ� �������߿�ʼ��
////            }
////        }
////        if(sum == 0 || sum == 2)
////            fleury(flag);
////    }
////    return 0;
////}
//
//
//
//#include<iostream>
//#include <stack> 
//
//using namespace std;
//stack<int> v;
//stack<int> s;
//int N=100;
//int map[N][N];//���� 
//int ans[N];//����
//int n,m;//n�����㣬m���� 
//void dfs(int x,int isyou=0){//Ĭ������ͼ//isyou=1Ϊ����ͼ 
//	for(int i=1;i<=n;++i){
//		if(map[x][i]>=1){//�б�
//			 map[x][i]--;
//			 if(isyou==0){//����ͼ�Գ� 
//			 	map[i][x]--;
//			 }
//			 dfs(i,isyou);
//			 break;//һ�� 
//		}
//	}
//}
//void fleury(int x){
//	s.push(x);
//	int t=x;
//	while(!v.empty()){
//		for(int i=1;i<=n;++i){
//			if(map[x][i]>=1){//�б�
//				t=s.top();
//				s.pop();
//				break;
//			}
//		}		
//	}
//}
//
///*
//6 7
//0
//1 2
//1 6
//1 5
//5 6
//2 3
//2 4
//3 4
//
//
//
//*/
// 




#include<iostream>
#include <stack> 
#include<queue>
using namespace std;
stack<int> s;
stack<int> q;
const int N = 100;
int map[N][N];//���� 
int ans[N];//����
int n, m;//n�����㣬m���� 
void dfs(int x, int isyou = 0){//Ĭ������ͼ//isyou=1Ϊ����ͼ 
	s.push(x);
	for (int i = 1; i <= n; ++i){
		if (map[x][i] >= 1){//�б�
			map[x][i]--;
			if (isyou == 0){//����ͼ�Գ� 
				map[i][x]--;
			}
			dfs(i, isyou);
			break;//һ�� 
		}
	}
}
void fleury(int x,int isyou){
//	cout << "ttt" << endl;
	s.push(x);
	int t = x;
	while (!s.empty()){
	//	cout << "xx ";
		int k = 0;
		t = s.top();
		s.pop();
		for (int i = 1; i <= n; ++i){
			if (map[t][i] >= 1){//�б�
				k = 1;
				break;
			}
		}

		if (k == 0){
			//cout << t<< " ";
			q.push(t);
			
		}
		else{
			//cout << "start dfs()" << endl;
			
			dfs(t,isyou);
			
		}

	}

	while (!q.empty()){
		cout<< q.top() << " ";
		q.pop();
	}
}
int main(){
	cin >> n >> m;
	int x, y;
	int du[N];
	int sum = 0;
	int isyou;
	cout << "�Ƿ�Ϊ����ͼ  1.�ǣ�0,����\n";
	cin >> isyou;
	memset(du, 0, sizeof(du));
       memset(map, 0, sizeof(map));
	for (int i = 1; i <= m; ++i){
		cin >> x >> y;
		map[x][y]++;
		if (isyou == 0){
			map[y][x]++;
		}
		du[x]++;
		du[y]++;
	}
	int flag = 1;
	for (int i = 1; i <= n; ++i){
		if (du[i] % 2 == 1){
			sum++;
			flag = i;
		}
	}

	cout << "sum " << sum << endl;
	if (sum == 0 || sum == 2){
	//	cout << "��ʼ" << endl;
		fleury(flag,isyou);
	}
	return 0;
}

/*

4 4
0
1 2
2 3
3 4
4 1




*/
