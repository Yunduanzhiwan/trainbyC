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
//	//	if((b-a)%2==0){//�������м�Ų��� 
//			while((b-a-1-len)%(len+1)!=0){// b-a-(1+len)
//				--len;
//			}
//			//�м�����len ��
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
//		// ,��ʼ���
//		
//		len=tlen-len;
//		tlen=len;
//	//	cout<<"len zuo="<<len<<endl;
//		for(long long i=1;i<=tlen;++i){
//			if((a-shu*i)<0){
//			//	len-=i;//���õ��� i����ʣ�� len-i�� 
//			//	cout<<"len zuo ����"<<i<<endl;
//				break;
//			}
//			len--;
//			v.push_back(a-shu*i);
//		} 
//	//	cout<<"len you="<<len<<endl;
//		//�ұ�
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
	int d,k;//dΪ���� 
	int s;//��ʼֵ 
	while(t--){
		scanf("%d%d%d",&n,&x,&y);
		d=y-x;//��ʼ����Ϊ�������Ĳ�ֵ,���������Ŀǰ��С��Ҳ�������� 
		
		k=n-1;//�������Ϊy����Ҫ����ǰ n-1��    
		// 5 3 8  d=5 
		//�������������Լ�����
		while(d%k!=0){//����Ų��£���kΪ1 
			k--;
		}
		//�޸Ĺ��� ��ʱ k==1|k>1
		d/=k;
		
		//ǰ������ܷ���n-1����  // y - (n-1)*d>0?
		if(d*(n-1)<y){ 
			s=y-(n-1)*d;
		}else{
			//an=a1+d*(n-1)  -> a1Ϊ an/d������ 
			s=y%d;
			if(s==0)s+=d;//��� y==d?  
		}
		//a1�ҵ��������ҵ�������� a1���� n-1��
		
		for(int i=0;i<n-1;++i){
			printf("%d ",s+i*d);
		} 
		printf("%d\n",s+n*d-d);
	}
	return 0;
} 

