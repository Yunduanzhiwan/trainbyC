#include<iostream>
#include<stdlib.h>
#include<string>
#include<string.h>
using namespace std;
string ss[1003];
bool vis[1003];//以访问节点
int map[1003][1003];
int res1[1003];//进行计算
int res2[1003];
int findrows(string s, string* res) {
	for (int i = 0; i < 50; ++i) {
		if (s == res[i]) {
			return i;
		}
	}
	return -1;
}
int main(){
	int n, m;
	cin >> n >> m;//n个节点   m条边
	for (int i = 1; i <= n; ++i){
		cin >> ss[i];
	}
	memset(map, 0, sizeof(map));
	memset(vis, false, sizeof(vis));
	for (int i = 0; i <= m; ++i){
		vis[i] = false;
	}
	for (int i = 0; i < 1003; ++i){
		res2[i] = -1;
	}
	string s, e;
	int a, b, lu;
	for (int j = 1; j <= m; ++j){
		cin >> s >> e >> lu;
		a = findrows(s, ss);
		b = findrows(e, ss);
		map[a][b] = lu;
		map[b][a] = lu;
	}
	cin >> s >> e;
	int t = findrows(s, ss);
	int ee = findrows(e, ss);
	res1[t] = 0;
	vis[t] = true;
	int mins = -1;
	int xxx = 1;
	int mis;
	while (t!=ee)
	{
		mins = -1;
		for (int y = 1; y <= n; ++y){
			if (vis[y]==0 && map[t][y] > 0){
				if (res2[y] == -1 || (res1[t] + map[t][y] )<res2[y]){
					res2[y] = res1[t] + map[t][y];
				}
				if (mins == -1||res2[y] < mins){
					mins = res2[y];
					mis=y;
				}				
			}
		}
		t=mis;
		res1[t]=res2[t];
		vis[t] = true;
	}
	cout << "最短路径为: " << res1[t] << endl;
	return 0;
}
