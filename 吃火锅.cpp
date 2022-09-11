#include<iostream>
#include<sstream>
#include<string.h>
using namespace std;
int main(){
    string str;
    int len,first,size,t;
    len=first=size=0;
    int flag=1;
    while(1){
        getline(cin,str);
        if(str=="."){
            break;
        }
        len++;
        t=-1;
        
        do{
        	t=str.find("chi1 huo3 guo1",t+1);
        	size++;
        //	cout<<"t="<<t<<endl;
        	if(flag&&t!=-1){
        		first=len;
        	//	cout<<"first="<<first<<" len="<<len<<endl;
        		flag=0;
			}
        	
//        	flag=0;
		}while(t!=-1);
        
        --size;
        
    }
    cout<<len<<endl;
	if(size>0)
		cout<<first<<" "<<size<<endl;
    else
    	cout<<"-_-#"<<endl;
    return 0;
}
