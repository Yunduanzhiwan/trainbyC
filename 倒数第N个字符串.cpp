 #include<iostream>
 #include<math.h>
 using namespace std;
 
 int main(){
 	int l,n;
 	cin>>l>>n;
 	int res=pow(26,l)-n;
 	
 	int i=0;
 	char str[l+1];
 	for(i=0;i<l;++i){
 		str[i]='a';
	 }
	 --i;
 	while(res>0){
 		int t=res%26;
 		str[i--]+=t;
 		res/=26;
	 }
	 cout<<str<<endl;
 	
 	
 	return 0;
 } 
