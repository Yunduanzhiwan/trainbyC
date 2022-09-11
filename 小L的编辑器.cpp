//#include<bits/stdc++.h>
//using namespace std;
//
//int main(){
//    ios::sync_with_stdio(false);
//	string a,b;
//	
//	cin>>b;
//	int lena=a.length();
//	
//	int pos=0;
//	string l="";
//	string r="";
//	
//	for(int i=0;i<lena;++i){
//		if(b[i]=='L')r=a[i]+r;
//		else l=l+a[i];
//	}
//	cout<<(l+r);
//	return 0;
//}


#include<bits/stdc++.h>
using namespace std;
char chl[1000005];
char chr[1000005];
char a[1000005];
char b[1000005];

int main(){
    ios::sync_with_stdio(false);
    scanf("%s",&a);
    scanf("%s",&b);
    
    
	//string a,b;
	//cin>>a;
	//cin>>b;
	int lena=strlen(a);
	
//	int pos=0;
//	string l="";
	//string r="";
	int posl=0;
    int posr=lena;
	for(int i=0;i<lena;++i){
		if(b[i]=='L'){
             chr[--posr]=a[i];
        }
		else{
            chl[posl++]=a[i];
        }
	}
	
//	cout<<chl;
	printf("%s",chl);
	for(;posr<lena;++posr){
			printf("%c",chr[posr]);
	}
	return 0;
}
