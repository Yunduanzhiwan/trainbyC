#include<bits/stdc++.h>
using namespace std;
int main(){
    char chs[51];
    gets(chs);

    int len=strlen(chs);
    int ind=0;
    for(int i=1;i<len;++i){
    	if(chs[i]=='B'&&chs[i+1]=='B'){
    		ind=i-1;
    
    		break;
		}
		if(chs[i]=='-'){
			ind=i;

		}
	}
	if(ind>0){
		chs[0]='-';
		chs[ind]='W';
	}
	printf("%s\n",chs);
    return 0;
}
