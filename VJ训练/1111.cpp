#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

  sieve(n);

    return 0;
}

/* 请在这里填写答案 */
#include <vector>
#include<string.h>
bool a[10000002];
void sieve(int n); //函数声明,求n以内的质数
void sieve(int n) {
	vector<int> temp;
    int cont = 0;
    memset(a, true, sizeof(a));
    for (int i = 2; i <= n; ++i) {
        if (a[i]) {
            temp.push_back(i);//加入数组
        }
        cont = temp.size();//在这里得到，数组的元素个数，可以避免for循环内反复调用函数，节省时间
        for (int j = 0; j < cont&&temp[j]*i<=n; ++j) {
            a[temp[j] * i] = false;
            if (i % temp[j] == 0) {//避免重复标记//当前数i 是当前素数的倍数，则后面的素数乘以当前数肯定是当前数的倍数，会造成重复标记，所以遇到整除要结束当前循环的标记，进入下一轮
                break;
            }
        }
    }
    //cout<<temp.size()<<endl;
}

