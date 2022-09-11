//À≠œ»µπ

#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	
	int n;
	cin>>n;
	int ah,ax,bh,bx;
	int resh,resx;
	
	int an,bn;
	an=bn=0;
	while(n--){
		cin>>ah>>ax>>bh>>bx;
		resh=ah+bh;
		if(resh==ax&&resh!=bx){
			++an;
		}
		else if(resh==bx&&resh!=ax) {
			++bn;
		}

		
		if(an>a||bn>b)break;
	} 
//	cout<<"an="<<an<<" bn="<<bn<<endl;
	if(an>a) cout<<"A"<<endl<<bn;
	else cout<<"B"<<endl<<an;
	return 0;
}
