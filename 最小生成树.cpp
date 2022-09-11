#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int maxn=2e5+15;
const int mxn=5e3+15;
struct node
{
    int t;int d;
    bool operator < (const node &a) const
    {
        return d>a.d;
    }
};
int n,m;
int vis[mxn];
vector <node> e[mxn];
priority_queue <node> q;
inline int read()
{
    char ch=getchar();
    int s=0,f=1;
    while (!(ch>='0'&&ch<='9')) {
		if (ch=='-')
			 f=-1;
			 ch=getchar();
	}
    while (ch>='0'&&ch<='9') {
		s=(s<<3)+(s<<1)+ch-'0';
		ch=getchar();
	}
    return s*f;
}
ll prim()
{
    ll ans=0;
    int cnt=0;
    q.push((node){1,0});
    while (!q.empty()&&cnt<=n)
    {
        node k=q.top();q.pop();
         
        if (vis[k.t]) continue;
        vis[k.t]=1;
        ans+=k.d;
        cnt++;
        for (int i=0;i<e[k.t].size();i++)
        if (!vis[e[k.t][i].t]){
            q.push((node){e[k.t][i].t,e[k.t][i].d});
        }
    }
    return ans;
}
int main()
{
    n=read();m=read();
    for (int i=1;i<=m;i++)
    {
        int x=read(),y=read(),z=read();
        e[x].push_back((node){y,z});
		e[y].push_back((node){x,z});
    }
    printf("%lld",prim());
    return 0;
}

/*
#incl7ude <bits/stdc++.h>
int w[105][105],dis[105],f[105],n,s=0;
const int M=2100000;
using namespace std;
void prim(int vi){
    for(int i=1;i<=n;i++){
        if(w[vi][i]!=M){
            dis[i]=w[vi][i];
        }
        else dis[i]=M;
    }
    f[vi]=1;
    int k,min=0;
    for(int i=1;i<=n-1;i++){
        min=M;
        for(int j=1;j<=n;j++){
            if(f[j]==0&&dis[j]<min){
                min=dis[j];
                k=j;
            }
        }
        s=s+min;
        f[k]=1;
        for(int j=1;j<=n;j++){
            if(dis[j]>w[k][j]){
                dis[j]=w[k][j];
            }
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>w[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(w[i][j]==0) w[i][j]=M;
        }
    }
    prim(1);
    cout<<s<<endl;
    return 0;
}


*/ 

