#include<bits/stdc++.h>
using namespace std;

int mapp[4][4];
//6	10,000	16	72
//7	36	17	180
//8	720	18	119
//9	360	19	36
//10	80	20	306
//11	252	21	1,080
//12	108	22	144
//13	72	23	1,800
//14	54	24	3,600
//15	180	

int get(int num){
	if(num==6)return 10000;
	if(num==7)return 36;
	if(num==8)return 720;
	if(num==9)return 360;
	if(num==10)return 80;
	if(num==11)return 252;
	if(num==12)return 108;
	if(num==13)return 72;
	if(num==14)return 54;
	if(num==15)return 180;
	if(num==16)return 72;
	if(num==17)return 180;
	if(num==18)return 119;
	if(num==19)return 36;
	if(num==20)return 306;
	if(num==21)return 1080;
	if(num==22)return 144;
	if(num==23)return 1800;
	if(num==24)return 3600;
	
	
}	
int main(){
	for(int i=1;i<=3;++i){
		for(int j=1;j<=3;++j){
			cin>>mapp[i][j];
//			if(mapp[i][j]==0){
//				mapp[i][j]=9;
//			}
		}
	}
	int nn[11];
	for(int i=1;i<=9;++i){
		nn[i]=i;
	}
	int x,y,z;
	for(int i=1;i<=3;++i){
		for(int j=1;j<=3;++j){
			//cin>>mapp[i][j];
			if(mapp[i][j]!=0){
				nn[mapp[i][j]]=0;
			}else{
				x=i;y=j;
			}
		}
	}
	for(int i=1;i<=10;++i){
		if(nn[i]==i){
			mapp[x][y]=i;
		}
		//nn[i]=i;
	}
	
	for(int i=0;i<3;++i){
		cin>>x>>y;
		cout<<mapp[x][y]<<endl;	
	}
	cin>>z;
	int res=0;
	if(z>=1&&z<=3){
		for(int i=1;i<=3;++i){
			res+=mapp[z][i];
		} 
	}else if(z>=4&&z<=6){
		for(int i=1;i<=3;++i){
			res+=mapp[i][z];
		} 
	}else if(z==7){
		res+=(mapp[1][1]+mapp[2][2]+mapp[3][3]);
	}else if(z==8){
		res+=(mapp[1][3]+mapp[2][2]+mapp[3][1]);
	}
//	cout<<"res="<<res<<endl;
	cout<<get(res)<<endl; 
	
	return 0;
}


/**
#include<iostream>
using namespace std;
int map[4][4];
int vis[11];
void init(){
    for(int i=0;i<11;++i)vis[i]=0;
}
int get(int num){
	if(num==6)return 10000;
	if(num==7)return 36;
	if(num==8)return 720;
	if(num==9)return 360;
	if(num==10)return 80;
	if(num==11)return 252;
	if(num==12)return 108;
	if(num==13)return 72;
	if(num==14)return 54;
	if(num==15)return 180;
	if(num==16)return 72;
	if(num==17)return 180;
	if(num==18)return 119;
	if(num==19)return 36;
	if(num==20)return 306;
	if(num==21)return 1080;
	if(num==22)return 144;
	if(num==23)return 1800;
	if(num==24)return 3600;
	
	
}	
int main(){
    init();
    
    int x,y,t;
	for(int i=1;i<=3;++i){
        for(int j=1;j<=3;++j){
            cin>>map[i][j];
            if(map[i][j]!=0)vis[map[i][j]]=1;
            else {
                x=i;
                y=j;
            }
        }
    }
    for(int i=1;i<=9;++i) if(vis[i]==0) map[x][y]=i;
    
    for(int i=0;i<3;++i){
        cin>>x>>y;
        cout<<map[x][y]<<endl;
    }
    cin>>x;
    int sum=0;
    if(x>=1&&x<=3) sum=map[x][1]+map[x][2]+map[x][3];
    if(x>=4&&x<=6) sum=map[1][x-3]+map[2][x-3]+map[3][x-3];
    if(x==7) sum=map[1][1]+map[2][2]+map[3][3];
    if(x==8) sum=map[1][3]+map[2][2]+map[3][1];
    
    cout<<get(sum)<<endl;
}


*/
