#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

//int main(){
//	long long n,a,b,len;
//	scanf("%lld",&n);
//	vector<long long> v;
//	long long shu,tlen;
//	while(n--){
//		v.clear();
//		shu=-1;
//		scanf("%lld %lld %lld",&len,&a,&b);
//		len-=2;
//		tlen=len;
//		v.push_back(a);
//		v.push_back(b);
//	//	if((b-a)%2==0){//奇数，中间放不下 
//			while((b-a-1-len)%(len+1)!=0){// b-a-(1+len)
//				--len;
//			}
//			//中间用了len 个
//			shu=(b-a)/(len+1);
//			for(long long i=1;i<=len;++i){
//				v.push_back(a+shu*i);
//			}
//			
//	//	}
//		if(shu==-1){
//			len=0;
//			shu=b-a;
//		}
//		// ,开始左边
//		
//		len=tlen-len;
//		tlen=len;
//	//	cout<<"len zuo="<<len<<endl;
//		for(long long i=1;i<=tlen;++i){
//			if((a-shu*i)<0){
//			//	len-=i;//又用掉了 i个，剩下 len-i个 
//			//	cout<<"len zuo 完了"<<i<<endl;
//				break;
//			}
//			len--;
//			v.push_back(a-shu*i);
//		} 
//	//	cout<<"len you="<<len<<endl;
//		//右边
//		for(long long i=1;i<=len;++i){
//			v.push_back(b+shu*i);
//		} 
//		long long size=v.size();
////		sort(v,v+size);
//		printf("%lld",v[0]);
//		for(long long i=1;i<size;++i){
//			printf(" %lld",v[i]);
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

int main(){
	int t;
	scanf("%d",&t);
	int n,x,y;
	int d,k;//d为公差 
	int s;//初始值 
	while(t--){
		scanf("%d%d%d",&n,&x,&y);
		d=y-x;//初始公差为两个数的差值,这个公差是目前最小，也是最合理的 
		
		k=n-1;//假设最大为y，需要计算前 n-1个    
		// 5 3 8  d=5 
		//如果两个里面可以继续放
		while(d%k!=0){//如果放不下，则k为1 
			k--;
		}
		//修改公差 此时 k==1|k>1
		d/=k;
		
		//前面真的能放下n-1个？  // y - (n-1)*d>0?
		if(d*(n-1)<y){ 
			s=y-(n-1)*d;
		}else{
			//an=a1+d*(n-1)  -> a1为 an/d的余数 
			s=y%d;
			if(s==0)s+=d;//如果 y==d?  
		}
		//a1找到，公差找到，，输出 a1后面 n-1个
		
		for(int i=0;i<n-1;++i){
			printf("%d ",s+i*d);
		} 
		printf("%d\n",s+n*d-d);
	}
	return 0;
} 

