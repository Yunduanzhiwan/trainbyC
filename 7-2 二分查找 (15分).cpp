#include <iostream>
using namespace std;

int num[1000005];//����һЩ������ʹ�ö�̬����vector�ȣ���ֹ�δ���Խ��

int binarySearch(int begin,int end,int target) {
	while(begin<end) {
		int mid = (begin + end) / 2;
		if(num[mid]==target)
			return mid;
		else if(num[mid]<target)
			begin = mid + 1;
		else
			end = mid - 1;
	}
	return end;
}

int main() {
	int a,b;
	int x;
	scanf("%d %d",&a,&b);
	for(int i = 0; i<a; i++)
		scanf("%d",&num[i]);
	for(int i = 0; i<b; i++) {
		scanf("%d",&x);
		if(i>0)
			printf(" ");
		printf("%d",binarySearch(0,a-1,x));
	}
	return 0;
}

