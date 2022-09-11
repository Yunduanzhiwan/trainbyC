#include<iostream>
#include<string.h>
#include<math.h>
#include<set>
using namespace std;
#define MAX 10005
int vis[MAX];
int teli[MAX];
int xinfu[MAX];
set<int>se;
inline void memsetvis(){
	memset(vis,0,sizeof(int)*MAX);
}
int issu(int n){
	if(n==1) return 1;
	int t=sqrt(n);
	for(int i=2;i<=t;++i){
		if(n%2==0){
			return 0;
		} 
	}
	return 1;
}
//int iste(int num,int len){
//    if(num==1)return len;
//    if(vis[num])return -1;
//    int sum=0;
//    int t=0;
//    int ans=num;
//    while(num){
//        t=num%10;
//        num/=10;
//        sum+=t*t;
//    }
//    vis[ans]=1;
//    if(sum==1){
//    	return len;
//	}
//	teli[sum]=-1;
//    return(xinfu[ans]=iste(sum,len+1));
//}
int iste(int num,int len){
		if(num==1)return len;
		if(se.count(num)){
			return -1;//循环
		}
		
		se.insert(num);//放进set 避免循环
		
		int t=num;
		int sum=0;
		int ans=0;
		while(t){
			ans=t%10;
			sum+=(ans*ans);
			t/=10;
		} 
	//	cout<<"sum="<<sum<<endl;
		if(sum==1){
			return len;//是一个幸福数 
		}
		
		//还没结束迭代，那么当前sum这个就是不是特例的
		teli[sum]=-1; 
		
		return (xinfu[num]=iste(sum,len+1));
		 
}


int prime(int x)
{
    if(x<2) return 1;
    for(int i=2;i<=x/i;i++)
    {
        if(x%i==0) return 1;
    }
    return 2;
}
void init(int s,int e){
	for(int i=0;i<=e;++i)teli[i]=-1;
	int len=0;
    for(int i=s;i<=e;++i){
    		memsetvis();
    		se.clear();
        	int ans=iste(i,0); 
        	
        //		cout<<"i="<<i<<" "<<ans<<endl;
        	if(ans>-1){
            	teli[i]=ans;
			}
    }
    
    int suflag=0;
    for(int i=s;i<=e;++i){
    	suflag=1;
    	if(teli[i]>=0){
            len=1;
    		suflag=prime(i); 
    		cout<<i<<" "<<suflag*(teli[i]+1)<<endl;
        }
	 }
    if(len==0) cout<<"SAD"<<endl;
}
int main(){
    int s,e;
    cin>>s>>e;
    init(s,e);
    return 0;
}
