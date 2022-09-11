//#include<bits/stdc++.h>
//#include<string.h>
//using namespace std;
//#define mod 9982435399824353
//typedef unsigned long long ll;
//int main(){
//	 int n;
//	 cin>>n;
//	 ll v[n+5];
//	 ll res=0;
//	  ll t;
//	 for(int i=0;i<n;++i){
//	 	cin>>t;
//	 	res+=t;
//	 	v[i]=t;
//	 } 
//	 
//	t=res/n;
//	sort(v,v+n);
//	cout<<"t="<<t<<endl;
//	ll sum=0;
//	int ans=0;
////	if(v[0]>v[1]&&v[0]>v[n-1]){
////		if(v[1]>v[])
////	}
//	for(int i=0;i<n;++i){
//		cout<<v[i]<<" ";
//	}
//	cout<<endl;
//
//	int sumt=0;
//	int jia,jian;
//	for(int i=0;i<n;++i){
//		cout<<"sumt="<<sumt<<endl;
//		if(sumt==n){
//			
//			break;
//		}
//	
//		jian=i-1;jia=i+1;
//		if(i==0)jian=n-1;
//		if(i==n-1)jia=0;
//		cout<<"jian="<<jian<<" i="<<i<<" jia="<<jia<<endl;
//		
//		if(v[jian]>v[jia]){
//				int xu=t-v[i];
//				if((v[jian]-xu)>t){
//					ans=xu;
//				}
//				else if((v[jian]-xu)<t){
//					ans=v[jian]-t;
//				}
//				else if(v[jian]<t){
//					ans=0;
//				}
//				
//				 cout<<"xu="<<xu<<" ans="<<ans<<endl; 
//				 
//				sum+=ans;
//				v[i]+=ans;
//				v[jian]-=ans;	
//			
//			
//		}else if(v[jia]>v[jian]){
//				int xu=t-v[i];
//				if(v[jia]-xu>t){
//					ans=xu;
//				}
//				else if(v[jia]-xu<t){
//					ans=v[jia]-t;
//				}
//				else if(v[jia]<t){
//					ans=0;
//				}
//				
//				cout<<"xu="<<xu<<" ans="<<ans<<endl;
//				sum+=ans;
//				v[i]+=ans;
//				v[jia]-=ans;
//		}
//		cout<<"v["<<i<<"]="<<v[i]<<endl;
//		if(v[i]==t){
//			sumt++;
//		}
//	}
//	cout<<sum<<endl;
//	return 0;
//} 

#include<bits/stdc++.h>
using namespace std;
long long s,t,R[1000005];
int main()
{
    int i,n;
    scanf("%d",&n);
    for(t=i=0;i<n;i++)scanf("%lld",&R[i]),t+=R[i];
   	t/=n;
    for(i=1;i<n;i++)R[i]+=R[i-1]-t;
    for(int i=1;i<=n;i++)printf("%d ",R[i]);cout<<endl; 
    sort(R,R+n),t=R[n/2];
    for(int i=1;i<=n;i++)printf("%d ",R[i]);cout<<endl;
    for(s=i=0;i<n;i++)s+=abs(R[i]-t);
    printf("%lld\n",s);
    return 0;
}
