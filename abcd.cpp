#include<stdio.h>
#include<unistd.h>
using namespace std;
int main(int argc,char* argv[]){
	int a,b;
//	cin>>a>>b;
	char chs[10];
	read(0,chs,2);
	printf("%s",chs);
//	for(int i=0;i<argc;++i){
//		cout<<"i="<<i<<":"<<argv[i]<<endl;
//	}
	
	//cout<<"a="<<argv[0]<<" b="<<argv[1]<<endl;
	
	return 0;
}
