/*
纪念品分组

题目分析

给出n个数,让他们两两组合，且组合值不得超过最大值

思路：最小和最大的组合，能则一组，不能则，最大的一组，最小的继续和第二大的组，以此类图

得出做少多少组 


需要注意：多个数中有的可能相同  如 1 2 2 3 
*/ 

#include<iostream>
#include<algorithm>
using namespace std;
const int NMax=30001;
int arr[NMax];
int main(){
	int n,maxNum,t;
	cin>>maxNum>>n;
	for(int i=0;i<n;++i){
		cin>>t;
		arr[i]=t;
	}
	sort(arr,arr+n);//排序 ，没有0 ////注意：sort(arr,arr+n-1);时，arr[n-1]没有参与排序 
	int l,r;
	l=0;
	r=n-1;
//	for(int i=0;i<n;++i){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
	//l最小，r最大,坐标
	int ans=0; 
	while(l<=r){//l<=r 预防还剩下一个无法匹配 
	//	cout<<"l="<<l<<" r="<<r<<" a[l]="<<arr[l]<<" a[r]="<<arr[r]<<endl;
		if((arr[l]+arr[r])<= maxNum&&l!=r){
			ans++;
			l++;
			r--;
		}else{
			ans++;//最大的一组，最小的不变 
			r--; 
			
		}
	} 
	 
	cout<<ans<<endl;
	
	
	return 0;
}


