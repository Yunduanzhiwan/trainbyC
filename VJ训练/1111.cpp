#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

  sieve(n);

    return 0;
}

/* ����������д�� */
#include <vector>
#include<string.h>
bool a[10000002];
void sieve(int n); //��������,��n���ڵ�����
void sieve(int n) {
	vector<int> temp;
    int cont = 0;
    memset(a, true, sizeof(a));
    for (int i = 2; i <= n; ++i) {
        if (a[i]) {
            temp.push_back(i);//��������
        }
        cont = temp.size();//������õ��������Ԫ�ظ��������Ա���forѭ���ڷ������ú�������ʡʱ��
        for (int j = 0; j < cont&&temp[j]*i<=n; ++j) {
            a[temp[j] * i] = false;
            if (i % temp[j] == 0) {//�����ظ����//��ǰ��i �ǵ�ǰ�����ı������������������Ե�ǰ���϶��ǵ�ǰ���ı�����������ظ���ǣ�������������Ҫ������ǰѭ���ı�ǣ�������һ��
                break;
            }
        }
    }
    //cout<<temp.size()<<endl;
}

