#include<iostream>
#include<string.h>
#include<set>
using namespace std;
#define MAX 505
int map[MAX][MAX];
int color[MAX];
int main(){
	int v,e,k;
	cin>>v>>e>>k;
	int a,b;
    set<int> se;
	for(int i=0;i<e;++i){
		cin>>a>>b;
		a--;//0-v
		b--;
		map[a][b]=map[b][a]=1;
	}
    int n;
	cin>>n;
	int t;
	while(n){
		n-=1;
        se.clear();//清除
		memset(color,0,sizeof(vis));
		
		for(int i=0;i<v;++i){
			cin>>t;
			se.insert(color[i]=t);
		}
		
		if(se.size()!=k){//题目要求，必须刚好k种颜色 
            cout<<"No\n";
        }
		else{
			int falg=1;
			for(int xx=0;xx<v;++xx){
				for(int yy=0;yy<v;++yy){
					if(xx!=yy&&map[xx][yy]!=0&&color[xx]==color[yy]){
						falg=0;
						break;
					}
				}
			}
			if(falg==1){
				cout<<"Yes\n";
			}else{
                cout<<"No\n";
            }
        }
	}
	return 0;
} 
