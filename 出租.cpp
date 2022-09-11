#include<iostream>
#include<string.h>
using namespace std;
int main(){
		string str;
		cin>>str;
		int t;
		int arr[11]={0};
		int index[11]={0};
		int arr2[11]={0};
		for(int i=0;i<11;++i){
			t=str[i]-'0';
			arr[t]++;
		}
		int is=1;
		int num=0;
		cout<<"int[] arr = new int[]{";
			for(int i=10;i>=0;--i){
				if(arr[i]){
					if(is==0){
						cout<<",";
					}
					is=0;
					cout<<i;
					arr2[num++]=i;
				}
					
			}
		cout<<"};"<<endl;
		
		
		is=1;
		cout<<"int[] index = new int[]{";
		
		for(int i=0;i<11;++i){
			for(int j=0;j<num;++j){
				if(arr2[j]==(str[i]-'0')){
					if(is==0){
						cout<<",";
					}
					cout<<j;
					is=0;
				}
			}
		} 
			


		cout<<"};"<<endl; 
		
		return 0;
}
