//#include<iostream>
//#include<sstream>
//#include<string>
//using namespace std;
//
//
//string b[4]={"人","羊","狼","菜"};
//string bb[10];
//int findrows(string s, string* res) {
//	for (int i = 0; i < 50; ++i) {
//		if (s == res[i]) {
//			return i;
//		}
//	}
//	return -1;
//}
//void printfrc(int** res, string* a, int ai, string* b, int bi) {
//	cout << " ";
//	for (int i = 0; i < bi; ++i) {
//		cout << " " << b[i];
//	}
//	cout << "\n---------------------\n";
//	for (int i = 0; i < ai; ++i) {
//		cout << a[i] << "|";
//		for (int j = 0; j < bi; ++j) {
//			cout << res[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//int main(void){
//	int** ttt=new int*[10];
//	for(int i=0;i<10;++i){
//		ttt[i]=new int[10]{0};
//	}
//	for(int i=0;i<10;++i){
//		for(int j=0;j<10;++j){
//			cout<<ttt[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	int row,col;
//	int ai,bi=10;
//	for(int i=1;i<9;++i){
//		bb[i]="v";
//		bb[i]+=((i+1)+'0');
//	}
//	bb[0]="v1";
//	bb[9]="v10";
//		
//	for(int i=0;i<10;++i){
//		cout<<bb[i]<<" ";
//	}
//	cout<<endl;
//	string s;
//	for(int i=0;i<9;++i){
//		cin>>s;
//		row=findrows(s,bb);
//		getline(cin,s);
//		istringstream ss(s);
//		while(ss>>s){
//		col=findrows(s,bb);
//		cout<<"row = "<<row<<"col= "<<col<<" \n";
//		ttt[row][col]=ttt[row][col]+1;
//		ttt[col][row]=ttt[col][row]+1;
//		}
//	}
//	for(int i=0;i<10;++i){
//		for(int j=0;j<10;++j){
//			cout<<ttt[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	printfrc(ttt,bb,ai,bb,bi);
//	return 0;
//} 
///*
//v1 v2 v3 v4
//v2 v5
//v3 v5
//v4 v6
//v5 v7
//v6 v8 v9
//v7 v10
//v8 v10
//v9 v10
//0 1 1 1 0 0 0 0 0 0;
//1 0 0 0 1 0 0 0 0 0;
//1 0 0 0 1 0 0 0 0 0;
//1 0 0 0 0 1 0 0 0 0;
//0 1 1 0 0 0 1 0 0 0;
//0 0 0 1 0 0 0 1 1 0;
//0 0 0 0 1 0 0 0 0 1;
//0 0 0 0 0 1 0 0 0 1;
//0 0 0 0 0 1 0 0 0 1;
//0 0 0 0 0 0 1 1 1 0;
//*/
#include<iostream>
#include<string.h>
#include<sstream>
#include<stdlib.h>
#include<vector>
#include<set>
#include<ctime>
using namespace std;
#define random(x) rand()%(x)
vector<int> beixuan;
int test[]={0,0,0,0};
int dang[]={0,0,0,0};
int anquan[10][4]={{1,1,1,1},{1,1,0,1},{1,0,1,1},{1,1,1,0},{1,1,0,0},{0,0,1,1},{0,1,0,0},
					{0,0,1,0},{0,0,0,1},{0,0,0,0}};
int kexuan[4][4]={{1,1,0,0},{1,0,1,0},{1,0,0,1},{1,0,0,0}};

bool isguo(int* ke){

	bool istrue=false;
	for(int i=0;i<4;++i){
		test[i]=(dang[i]+ke[i])%2;
	}
	for(int i=0;i<10;++i){
			if(test[0]==anquan[i][0]&&test[1]==anquan[i][1]&&test[2]==anquan[i][2]&&test[3]==anquan[i][3]){
			//istrue=true;
			beixuan.push_back(i);
			//	break;
			}else{
				continue;
			}
	}
	if(beixuan.size()>0) istrue=true;
	return istrue;
}

void out(){
	
	if(test[0]==1)
		cout<<"西-->东 ";
	else
		cout<<"东-->西 ";
	if(test[0]!=dang[0]){
		cout<<"人";
	}
	if(test[1]!=dang[1]){
		cout<<"带着羊";
	}
	if(test[2]!=dang[2]){
		cout<<"带着狼";
	}
	if(test[3]!=dang[3]){
		cout<<"带着菜";
	}
	cout<<"过河";	
	cout<<"  ";
	for(int i=0;i<4;++i){
		dang[i]=test[i];
	}
}
int findxuan(){
	
		beixuan.clear();
		for(int i=0;i<4;++i){
			if(isguo(kexuan[i])){
				beixuan.push_back(i);
			}
		}
		return (int)random(beixuan.size());
	//	cout<<"size= "<<beixuan.size()<<endl;
}
//void start(){
//		findxuan();
//		while((dang[1]+dang[0]+dang[2]+dang[3])!=4){
//			if(isguo(kexuan[])){
//				out();
//			}
//			
//		}
//}
int main(){
	findxuan();
	int x=0;
	int t=0;
	//x=random(beixuan.size());
//cout<<"x= "<<x<<endl;
		while((dang[1]+dang[0]+dang[2]+dang[3])!=4){
			x=findxuan();
			//if(isguo(kexuan[x])){
					out();
					cout<<endl;
			
//			for(int i=0;i<4;i++){
//				if(isguo(kexuan[i])){
//					out();
//					cout<<endl;
//				}
//			}
		}
	return 0;
}

