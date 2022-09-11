#include<bits/stdc++.h>
using namespace std;
const int maxn=10005;
int g[maxn]={};
int row[maxn]={};
int low[maxn]={};
double istrue(int ax,int ay,int bx,int by){
	return sqrt(  (ax-bx)*(ax-bx)+(ay-by)*(ay-by) ); 
}
int find(int x){
	if(g[x]==-1){
		return -1;
	}
	int f=x;
	while(f!=g[f]){
		f=g[f];
	}
	int t=x;
	while(t!=f){
		int k=g[t];
		g[t]=f;
		t=k;
	}
	return f;
}
void join(int a,int b){
	if(find(a)!=find(b)){
		g[find(b)]=find(a); 
	}
}
bool iscan(int a,int b){
	if(find(a)==find(b)){
		return true;
	}
	return false;
}
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;++i){
		scanf("%d %d",&row[i],&low[i]);
	}	
	memset(g,-1,sizeof(g));
	while(1){
		char p;
		scanf("%c",&p);
		if(p=='O'){
			int i;
			scanf("%d",&i);
			if(g[i]==i) continue;
			g[i]=i;
			for(int x=1;x<=n;++x){
				if(x!=i&&g[x]!=-1&&find(i)!=find(x)){
				double t=istrue(row[i],low[i],row[x],low[x]);
			//	cout<<"t== "<<t<<endl; 
					if(t<=m){
					//	cout<<"join i="<<i<<" x= "<<x<<endl;
						join(i,x);
					}
				}
			}
		}else if(p=='S'){
			int a,b;
			scanf("%d %d",&a,&b);
			if(iscan(a,b)){
				cout<<"FAIL\n";
			}else{
				cout<<"SUCCESS\n";
			}
		}
	}
	
	
	
	return 0;
}

//ac code


/*
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
typedef long long ll;
int N,D;
const int maxn = 1e3+10;
struct node{
    ll x,y;
    bool ok;//是否已经维修好
}no[1010];
int fa[maxn];
void init(){
    for(int i = 1;i<=N;i++) fa[i] = i;
}
int find(int x){
    if(x != fa[x])
        return fa[x] = find(fa[x]);
    return fa[x];
}
void join(int x,int y){
    int fx = find(x),fy =find(y);
    if(fx!=fy) fa[fx] = fy;
}
bool dis(int a,int b){
    if(!no[a].ok || !no[b].ok) return false;
    return (no[a].x-no[b].x)*(no[a].x-no[b].x) + (no[a].y-no[b].y)*(no[a].y-no[b].y) <= D*D;
}
int main(){
    cin>>N>>D;
    init();
    ll x,y;
    for(int i = 1;i<=N;i++){
        scanf("%lld %lld",&x,&y);
        no[i] = {x,y,false};
    }
    char op[2];int id1,id2;
    while(~scanf("%s",op)){
        if(*op == 'O'){
            scanf("%d",&id1);
            if(no[id1].ok) continue;//如果已经修好了，就不用修了
            no[id1].ok = true;
            for(int i = 1;i<=N;i++){
                if(i!=id1 && dis(i,id1))
                    join(i,id1);
            }
        }else{
            scanf("%d%d",&id1,&id2);
            if(find(id1) != find(id2))
                puts("FAIL");
            else
                puts("SUCCESS");
        }
    }
 
    return 0;
}


*/ 
