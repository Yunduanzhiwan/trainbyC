#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int len=str.size();
    string mm=str.substr(len-2,len);
    string yy=str.substr(0,len-2);
    if(yy.size()<4){
        if(yy<="21"){
        	cout<<"20"<<yy;
		}
		else cout<<"19"<<yy;
    }else
    	cout<<yy;
    cout<<"-"<<mm<<endl;
    
    return 0;
}
