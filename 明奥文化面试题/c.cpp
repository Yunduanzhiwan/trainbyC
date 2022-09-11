#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("c.in","r",stdin);
	freopen("c.out","w",stdout);
	
	char str[51];
	cin>>str;
	int ans=0; 
	for(int i=0;str[i],str[i]!='\0';++i){
		if(str[i]=='('&&(str[i+1]==')'||str[i+1]=='|')){
			ans++;
			i++;
		}
		if(str[i]=='|'&&str[i+1]==')'){
			ans++;
			i++;
		}
		
	}
	cout<<ans<<endl;
	return 0;
}
