#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[11];
    for (int i = 0; i < n; i++)arr[i] =i+1;
    do {
        for (int i = 0; i < n; i++)cout << arr[i];
        cout << endl;
    } while (next_permutation(arr, arr + n));/// next_permutation ���ݵ�ǰ����õ���һ��ȫ���е����� 

}


