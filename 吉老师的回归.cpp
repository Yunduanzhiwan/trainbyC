#include<iostream>
#include<string.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ind=0;
    string str;
    string res;
    getchar();
    int flag=1;
    for(int i=1;i<=n;++i){
        getline(cin,str);
        if(str.find("qiandao")==-1&&str.find("easy")==-1){
            ind++;
            if(ind>m&&flag){
            //	cout<<"ур╣╫ак"<<str<<endl;
                res=str;
                flag=0;
            }
        }
    }
    if(flag)
    	cout<<"Wo AK le"<<endl;
    else
    	cout<<res<<endl;
    
    return 0;
}
