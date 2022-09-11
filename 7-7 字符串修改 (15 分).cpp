#include<bits/stdc++.h>
using namespace std;
//"A", "O", "Y", "E", "U", "I"
bool isYuan(char& ch){
//	cout<<"ch="<<ch<<endl;
	if(ch>=65&&ch<97){
		ch+=32;
	} 
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='y'){
//		cout<<"is"<<endl;
		return true;
	}
//	cout<<"no"<<endl;
	return false;
}
int main(){
	string str,res;
	cin>>str;
	int len=str.length();
	res="";
	for(int i=0;i<len;++i){
		if(!isYuan(str[i])){
			cout<<"."<<str[i];
			//res+=("."+str[i]);
		}
	}
//	cout<<res<<endl;
	return 0;
}
