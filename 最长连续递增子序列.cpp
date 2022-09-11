/*
���ӣ�https://pintia.cn/problem-sets/434/problems/5860 
ϰ��3.4 ��������������� (20 ��)
����һ��˳��洢�����Ա������һ���㷨���Ҹ����Ա�������������������С�
���磬(1,9,2,5,7,3,4,6,8,0)����ĵ���������Ϊ(3,4,6,8)��

�����ʽ:
�����1�и���������n����10
?5
?? ������2�и���n������������Կո�ָ���

�����ʽ:
��һ���������һ�γ��ֵ���������������У�����֮���ÿո�ָ������н�β�����ж���ո�

����������
15
1 9 2 5 7 3 4 6 8 0 11 15 17 17 10
���������
3 4 6 8

*/ 

#include<iostream>
using namespace std;
#define Max 100000
int nums[Max+2];
int main() {
	int n, maxi, maxsize, ind, indsize;
	cin >> n;
	cin >> nums[0];
	maxi = maxsize = ind = indsize = 0;
	for (int i = 1; i < n; ++i) {
		cin >> nums[i];
		if (nums[i] > nums[i - 1]) {
			indsize++;
			if (indsize > maxsize) {
				maxsize = indsize;
				maxi = ind;
			}
		}
		else {
			ind = i;
			indsize = 0;
		}
	}
    cout<< nums[maxi];
	for (int i = maxi+1; i <= (maxi + maxsize); ++i) cout<< " " << nums[i] ;
	return 0;
}
