#include <bits/stdc++.h>
using namespace std;
bool falg1,falg2;
int main(){
	string s1,s2;
	int n;
	cin>>n;
	getchar();
	
	for(int k=1;k<=n;++k){
		getline(cin,s1);
		getline(cin,s2);
		falg1=falg2=true;
		if(s1.length()==s2.length()){
			if(s1!=s2)falg1=false;
			
		}else{
			//È¥µôs1µÄ¿Õ¸ñ
//			int l=s1.length();
			int i, j;
	        for(i = 0, j = 0; s1[i]; i++){
	            if(s1[i] != ' ') s1[j++] = s1[i];
			}
	        s1[j] = '\0';
			if(strcmp(s1.c_str(),s2.c_str())){
				falg1=false;
			}else{
				falg2=false;
			}
		}
		cout<<"Case "<<k<<": ";
		if(!falg1){
			cout<<"Wrong Answer"<<endl;
		}else if(!falg2){
		cout<<"Output Format Error"<<endl;	
		} 
		else{
			 cout<<"Yes"<<endl;	
		}
	} 
	
	
	
	
	return 0;
} 
