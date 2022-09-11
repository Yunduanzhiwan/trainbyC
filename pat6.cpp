#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int jian[25];
void initt(){
	jian[6]=1000;
	jian[7]=36;
	jian[8]=720;
	jian[9]=360;
	jian[10]=80;
	jian[11]=252;
	jian[12]=108;
	jian[13]=72;
	jian[14]=54;
	jian[15]=180;
	jian[16]=72;
	jian[17]=180;
	jian[18]=119;
	jian[19]=36;
	jian[20]=306;
	jian[21]=1080;
	jian[22]=144;
	jian[23]=1800;
	jian[24]=3600; 
	
}
int main(){
	initt();
	int vis[10]={0};
	int map[4][4];
	
	int t,bx,by;
	for(int i=1;i<=3;++i){
		for(int j=1;j<=3;++j){
			cin>>t;
			map[i][j]=t;
			vis[t]=1;
			if(t==0){
				bx=i;by=j;
			}
		}
	}
	for(int i=0;i<=9;++i){
		if(vis[i]==0){
			map[bx][by]=i;
			break;
		}
	}
	int x,y;
	for(int i=0;i<3;++i){
		cin>>x>>y;
		cout<<map[x][y]<<endl;
	}
	int que;
	cin>>que;
	int sum=0;
	if(que>0){
		if(que<=3){
			sum=map[que][1]+map[que][2]+map[que][3];
		}else if(que<=6){
			sum=map[1][que]+map[2][que]+map[3][que];
		}
		else if(que==7){
			sum=map[1][1]+map[2][2]+map[3][3];
		}else if(que==8){
			sum=map[1][3]+map[2][2]+map[3][1];
		}
		
		cout<<jian[sum]<<endl;
	}

	return 0;
}
