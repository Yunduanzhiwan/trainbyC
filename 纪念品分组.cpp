/*
����Ʒ����

��Ŀ����

����n����,������������ϣ������ֵ���ó������ֵ

˼·����С��������ϣ�����һ�飬����������һ�飬��С�ļ����͵ڶ�����飬�Դ���ͼ

�ó����ٶ����� 


��Ҫע�⣺��������еĿ�����ͬ  �� 1 2 2 3 
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
	sort(arr,arr+n);//���� ��û��0 ////ע�⣺sort(arr,arr+n-1);ʱ��arr[n-1]û�в������� 
	int l,r;
	l=0;
	r=n-1;
//	for(int i=0;i<n;++i){
//		cout<<arr[i]<<" ";
//	}
//	cout<<endl;
	//l��С��r���,����
	int ans=0; 
	while(l<=r){//l<=r Ԥ����ʣ��һ���޷�ƥ�� 
	//	cout<<"l="<<l<<" r="<<r<<" a[l]="<<arr[l]<<" a[r]="<<arr[r]<<endl;
		if((arr[l]+arr[r])<= maxNum&&l!=r){
			ans++;
			l++;
			r--;
		}else{
			ans++;//����һ�飬��С�Ĳ��� 
			r--; 
			
		}
	} 
	 
	cout<<ans<<endl;
	
	
	return 0;
}


