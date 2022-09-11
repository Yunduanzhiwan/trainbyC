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
////        for(int i = 1; i <= n; i++)//判断是否可扩展
////        {
////            if(map[ans[top]][i] >= 1)//若存在一条从ans[top]出发的边  那么就是可扩展
////            {k = 1; break;}
////        }
////        if(k == 0)//该点x没有其他的边可以先走了（即不可扩展）， 那么就输出它
////        {
////            printf("%d ", ans[top]);
////            top--;
////        }
////        else if(k == 1)//如可扩展， 则dfs可扩展的哪条路线
////        {
////            top--;//这需要注意
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
////            map[x][y]++; //记录边， 因为是无向图所以加两条边， 两个点之间可能有多条边
////            map[y][x]++;
////            du[x]++;
////            du[y]++;
////        }
////        flag = 1; // flag标记开始点。 如果所有点度数全为偶数那就从1开始搜
////        sum = 0;
////        for(int i = 1; i <= n; i++)
////        {
////            if(du[i] % 2 == 1)
////            {
////                sum++;
////                flag = i;// 若有奇数边， 从奇数边开始搜
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
//int map[N][N];//矩阵 
//int ans[N];//顶点
//int n,m;//n个顶点，m条边 
//void dfs(int x,int isyou=0){//默认无向图//isyou=1为有向图 
//	for(int i=1;i<=n;++i){
//		if(map[x][i]>=1){//有边
//			 map[x][i]--;
//			 if(isyou==0){//无向图对称 
//			 	map[i][x]--;
//			 }
//			 dfs(i,isyou);
//			 break;//一次 
//		}
//	}
//}
//void fleury(int x){
//	s.push(x);
//	int t=x;
//	while(!v.empty()){
//		for(int i=1;i<=n;++i){
//			if(map[x][i]>=1){//有边
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
int map[N][N];//矩阵 
int ans[N];//顶点
int n, m;//n个顶点，m条边 
void dfs(int x, int isyou = 0){//默认无向图//isyou=1为有向图 
	s.push(x);
	for (int i = 1; i <= n; ++i){
		if (map[x][i] >= 1){//有边
			map[x][i]--;
			if (isyou == 0){//无向图对称 
				map[i][x]--;
			}
			dfs(i, isyou);
			break;//一次 
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
			if (map[t][i] >= 1){//有边
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
	cout << "是否为有向图  1.是，0,不是\n";
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
	//	cout << "开始" << endl;
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
