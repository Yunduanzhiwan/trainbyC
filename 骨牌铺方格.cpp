//#include<iostream>
//using namespace std;
//int res(int n){
//	if(n==1||n==2){
//		return n;
//	}else{
//		return res(n-1)+res(n-2);
//	}
//}
//int main()
//{
//	int num;
//	while(scanf("%d",&num)!=EOF)
//	{
//		printf("%d\n",res(num));
//	}
//	return 0;
//}

#include<iostream>
using namespace std;
int main()
{
	long long arr[51];
	int num;
	arr[1]=1;arr[2]=2;
	for(int i=3;i<51;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	while(scanf("%d",&num)!=EOF)
	{
		printf("%lld\n",arr[num]);
	}
	return 0;
}
