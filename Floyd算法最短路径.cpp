#include<iostream>
#include<string.h>
using namespace std;
int n;
double map[1000][1000];
int dis[1000][1000];
#define INF 0x3f3f3f3f
string res[44];
void init(){
	
	//39个顶点 
	for(int i=1;i<=39;++i){
		if(i<8){
			res[i]="S"+to_string(i);//itoa(i) 将i转为字符串 
		}else if(i<23){
			res[i]="A"+to_string(i-7);
		}else{
			res[i]="P"+to_string(i-22);
		}
	}
}
double getprice(int n){
	double res=INF; 
	if(n<=300){
			res=20;
		}else if(n<=350){
			res=23;
		}else if(n<=400){
			res=26;
		}else if(n<=450){
			res=29;
		}else if(n<=500){
			res=32;
		}else if(n<=600){
			res=37;
		}else if(n<=700){
			res=44;
		}else if(n<=800){
			res=50;
		}else if(n<=900){
			res=55;
		}else if(n<=1000){
			res=60;
		}else{
			res=(n-1000+99)/100*5+60;
		}
		return res;
}
int findrows(string s, string* res) {
	for (int i = 0; i < 50; ++i) {
		if (s == res[i]) {
			return i;
		}
	}
	return -1;
}
void Floyd(){
	for(int k=1;k<=n;++k){
		for(int i=1;i<=n;++i){
			for(int j=1;j<=n;++j){
				if(map[i][j]>map[i][k]+map[k][j]){
					map[i][j]=map[i][k]+map[k][j]; 
				}
			}
		}
	}
}
int main(){
	init();
//	for(int i=1;i<=39;++i){
//		cout<<res[i]<<" ";
//	}
//	cout<<endl;
	int m;//m条边 
	cin>>n>>m;
	double t;
	int x,y;
	//init初始化 
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
		//	cin>>t;
			if(i==j){
				map[i][j]=map[j][i]=0;
			}else{
				map[i][j]=map[j][i]=INF;
			}//else{
			//	map[i][j]=map[j][i]=t;
		//	}
		}
	}
	string sx,sy;
//	cout<<"m="<<m<<endl;
	for(int i=1;i<=m;++i){
//		cout<<"i"<<endl;
//		getchar();
		cin>>sx>>sy;
		x=findrows(sx,res);
		y=findrows(sy,res);
//		cout<<"x="<<x<<" y="<<y<<endl;
		cin>>t;
//		cout<<"sx="<<sx<<" sy="<<sy<<endl;
//		cout<<"sy[0]="<<sy[0]<<endl; 
		if(sy[0]=='A'){
//			cout<<"A";
			t=t*0.1;
			
//			cout<<"t="<<t<<endl;
		}else{
//			cout<<"B";
			t=getprice(t);
//			cout<<"t="<<t<<endl;
		}
		if(x==y){
			map[x][y]=0;
			continue;
		}
		map[x][y]=t;	
		map[y][x]=t;	
	}	
	cout<<"\n--------------------------------\n";
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n--------------------------------\n";
	Floyd();
		for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n--------------------------------\n";
	
	for(int i=1;i<=7;++i){
//		cout<<"\n-------------------------------S"<<i<<"-------------------------\n"<<endl;
		for(int j=8;j<=22;++j){
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
	
//	int price;
//
//	int s,tt;
//	cin>>s>>tt;
////	cout<<s<<" -> "<<tt<<" = "<<map[s][tt]<<endl;
//	int ss[1000];
//	int ttt[1000];
//	getchar();
//	//工厂 
//	for(int i=1;i<=s;++i){
//		cin>>ss[i];
//	}//目标火车站 
//	getchar();
//	for(int i=1;i<=tt;++i){
//		cin>>ttt[i];
//	}
//	for(int i=1;i<=s;++i){
//		for(int j=1;j<=tt;++j){
//			cout<<ss[i]<<" -> "<<ttt[j]<<" = "<<map[ss[i]][ttt[j]]<<endl;
//		}
//		cout<<"\n--------------------------------\n";
//	} 
	return 0;
	/*
24 23
P1 P3 450
P2 P3 80
P3 P4 1150
P4 P8 1100
P5 P6 306
P6 P7 195
S1 P7 20
S1 P8 202
P8 P9 720
S2 P8 1200
P3 P9 690
P9 P10 520
P10 P11 170
P11 P12 88
S5 P12 462
S4 P11 690
P11 14 160
P14 P13 70
P14 P15 320
P15 P16 160
S6 P16 70
P16 P17 290
P17 S7 30
7 17
8 22 23 24 21 18 14
1 3 5 6 7 8 10 11 13 16 17 18 19 20 21 9 4
*/
/*
32 31 
P1 A2 3 
P2 A3 2
P4 A4 600
P5 A5 10
P6 A6 5
P7 A7 10
S1 A7 31
P8 A8 12
P9 A9 42
P10 A10 70
P12 A11 10
P13 A12 10
P15 A13 62
S6 A14 110
P16 A14 30
P17 A15 20
S7 A15 20
A1 A2 104
A2 A3 301
A3 A4 750
A4 A5 606
A5 A6 194
A6 A7 205
A7 A8 201 
A8 A9 680
A9 A10 480
A10 A11 300
A11 A12 220
A12 A13 210
A13 A14 420
A14 A15 500
17 15
16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
 


*/ 
/*
39 54
P1 P3 450
P2 P3 80
P3 P4 1150
P4 P8 1100
P5 P6 306
P6 P7 195
S1 P7 20
S1 P8 202
P8 P9 720
S2 P8 1200
S3 P9 690
P9 P10 520
P10 P11 170
P11 P12 88
S5 P12 462
S4 P11 690
P11 P14 160
P14 P13 70
P14 P15 320
P15 P16 160
S6 P16 70
P16 P17 290
P17 S7 30
P1 A2 3 
P2 A3 2
P4 A4 600
P5 A5 10
P6 A6 5
P7 A7 10
S1 A7 31
P8 A8 12
P9 A9 42
P10 A10 70
P12 A11 10
P13 A12 10
P15 A13 62
S6 A14 110
P16 A14 30
P17 A15 20
S7 A15 20
A1 A2 104
A2 A3 301
A3 A4 750
A4 A5 606
A5 A6 194
A6 A7 205
A7 A8 201 
A8 A9 680
A9 A10 480
A10 A11 300
A11 A12 220
A12 A13 210
A13 A14 420
A14 A15 500

*/



} 
