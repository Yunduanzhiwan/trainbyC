#include<iostream>
#include<string.h>
#include<vector>
#define MAX 10000+5
using namespace std;
vector<int> map[MAX];
int du[MAX] = { 0 };
int du2[MAX] = { 0 };
int main() {
	int n, m;
	cin >> n >> m;
	int a, b;
	while (m--) {
		cin >> a >> b;
		du[a]++;
		du[b]++;
		map[a].push_back(b);
		map[b].push_back(a);
	}
	int nn;
	cin >> nn;
	int t;
	while (nn--) {
		memcpy(du2, du, sizeof(du));
		cin >> m;
		while (m--) {
			cin >> t;
			du2[t] = 0;
			int sizemap = map[t].size();
			for (int i = 0; i < sizemap; ++i)
				du2[map[t][i]]--;
		}
		int falg = 1;
		for (int i = 1; i <= n; ++i) {
			if (du2[i] > 0)
				falg = 0;
		}
		if (falg)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
