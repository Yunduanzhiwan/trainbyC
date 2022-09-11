
#include <cstdio>  
#include <cstring>  
#include <cmath>  
#include <iostream>  
#include <queue>
#include <set>
#include <string>
#include <stack>
#include <algorithm>
#include <map>
#include <bitset>
using namespace std;  
typedef long long ll;
const int N = 60;
const int M = 1000009;
const int INF = 0x3fffffff;
const int mod = 1e9+7;
const double Pi = acos(-1.0);
const double sm = 1e-9;
typedef pair<int,int>PA;
 
char data[N][N];
int vis[N][N],tot,r0,c0;
int x[] = { -1 , 0 , 1 , 0 };
int y[] = { 0 , -1 , 0 , 1 };
char re[] = {'l','u','r','d'};
vector<PA>st;
 
bool comp(const PA&a ,const PA&b ){
	if(a.first==b.first) return a.second<b.second;
	else return a.first<b.first;
}
 
void dfs( int r , int c ) 
{
	++tot;
	vis[r][c] = 1;
	st.push_back(PA(r-r0,c-c0));
	for( int i = 0 ; i < 4 ; ++i ){
		int nr = r+x[i];
		int nc = c+y[i];
		if( data[nr][nc] != '#'||vis[nr][nc] != 0 ) continue;
		dfs( nr , nc );
	}
}
 
int main()
{
	int n,m;
//	while( cin >> n >> m ){
		cin>>n>>m; 
		memset( vis , 0 , sizeof(vis) );
		memset( data , 0 , sizeof(data) );
		for( int i = 1 ; i <= n ; ++i ){
			cin >> data[i]+1;
		}
		map<vector<PA>,int>mp1;
		map<int,int>mp2;
		int cnt1=0;
		for( int i = 1 ; i <= n ; ++i ){
			for( int j = 1 ; j <= m ; ++j ){
				if( data[i][j] == '#'&& !vis[i][j] ){
					tot = 0; st.clear();
					r0 = i,c0 = j;
					dfs(i,j);
					sort(st.begin(),st.end(),comp);
					++cnt1;
					++mp2[tot];
					++mp1[st];
				}
			}
		}
		cout << cnt1 << " " << mp2.size() << " " << mp1.size() << endl;
//	}
	return 0;
}
