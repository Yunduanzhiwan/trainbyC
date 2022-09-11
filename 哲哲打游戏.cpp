#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, m, k;
	cin >> n >> m;
	vector<int> v[n + 2];
	int t;

	int dang[n + 2];

	for (int i = 1; i <= n; ++i) {
		cin >> k;
		for (int j = 0; j < k; ++j) {
			cin >> t;
			v[i].push_back(t);
		}
	}
	int a, b;
	int ind = 1;
	for (int i = 1; i <= m; ++i) {
		cin >> a >> b;
		if (a == 0) {
// 			cout << ind << endl;
			ind = v[ind][b-1];

		}
		else if (a == 1) {
            cout << ind << endl;
			dang[b] = ind;
		}
		else if (a == 2) {
			ind = dang[b];
		}
	}
	cout << ind << endl;

	return 0;
}
