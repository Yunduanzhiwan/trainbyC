#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str[102];
	string stemp;
	
	int dan=0;
	int first,zon;
	first=zon=0;
	while(1){
		getline(cin,stemp);
		if(stemp.length()==1&&stemp=="."){
			break;
		} 
		dan++;
		int tm=stemp.find("chi1 huo3 guo1");
		if(tm!=-1){
			zon++;
			if(first==0){
				first=dan;
			}
		}
	}
	cout<<dan<<endl;
	if(zon==0){
		cout<<"-_-#"<<endl;
	}
	else{
		cout<<first<<" "<<zon<<endl;
	}

	return 0;
}
