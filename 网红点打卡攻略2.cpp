#include<iostream>
using namespace std;
int map[202][202];
int vis[202];
#define MAX 0x3f3f3f3f
void init(){
    for(int i=0;i<202;++i)
        for(int j=0;j<202;++j)
           map[i][j]=MAX;
}
void initvis(){
	for(int i=0;i<202;++i)vis[i]=0;
}
int main(){
    int n,m;
    cin>>n>>m;
    init();
    initvis();
    int x,y,fei;
    for(int i=0;i<m;++i){
        cin>>x>>y>>fei;
        map[x][y]=map[y][x]=fei;
    }
    
    int k;
    cin>>k;
    int len;
    int num[n+2];
    bool flag;
    int minfei=MAX;
    int curr=0;//当前地点
    int sum=0;//价格
    int ind=-1;
    int size=k;
    //cout<<"size="<<size<<endl;
    int ans;
    for(int i=1;i<=k;++i){
    	initvis();
        cin>>len;
        flag=true;
        curr=sum=0;//出发点
        for(int j=0;j<len;++j){
            cin>>ans;
            if(vis[ans]==0){
            	sum+=map[curr][ans];
            	curr=ans;
            	vis[ans]=1;
			}else flag=false;
            
        }
        if(len!=n||flag==false||map[curr][0]==MAX){
            size--;
            continue;
        }
        sum+=map[curr][0];//回家
       // cout<<"sum="<<sum<<endl;
        if(sum<minfei){
            minfei=sum;
            ind=i;
            
            
        }
        else if(sum==minfei&&minfei!=MAX&&i<ind){
             minfei=sum;
             ind=i;
        }
    }
    
    cout<<size<<endl<<ind<<" "<<minfei<<endl;
    return 0;    
}
