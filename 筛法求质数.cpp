#include <iostream>
#include <vector>
using namespace std;

vector<int> sieve(int n); //��������,��n���ڵ�����

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    vector<int> ans = sieve(n);

    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i];
        if (i < ans.size() - 1)cout << " ";
    }
    cout << endl;

    return 0;
}

/* ����������д�� */


#include<string.h>
bool a[10000002];
//int  b[10000002] = { 0 };
vector<int> sieve(int n) {
	vector<int> temp;
    int cont = 0;
    memset(a, true, sizeof(a));
    for (int i = 2; i <= n; ++i) {
        if (a[i]) {
            temp.push_back(i);
          
        }
        cont = temp.size();
        for (int j = 0; j < cont&&temp[j]*i<=n; ++j) {
            a[temp[j] * i] = false;
            if (i % temp[j] == 0) {//�����ظ����
                break;
            }
        }
    }
	return temp;
}
