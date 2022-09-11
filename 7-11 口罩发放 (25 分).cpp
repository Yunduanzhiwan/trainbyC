#include<bits/stdc++.h>
using namespace std;
class Man{
	public:
		string name;
		string ip;
		int status;
		int th,tm;
		int qt;
		Man(){
			qt=-1;
			th=tm=0;
		}
		Man(string name_,string ip_,int status_,int th_,int tm_){
			name=name_;
			ip=ip_;
			status=status_;
			th=th_;
			tm=tm_;
			qt=-1;
		}
		operator <(const Man& a){
			if(a.th==th){
				return tm<a.tm;
			}
			return th<a.th;
		}
};
Man Ts[1002]; 
int main(){
	int d,p;
	scanf("%d %d",&d,&p);
	int t,s;
	string name;
	string ip;
	int status;
	int th,tm;
	string times;
	priority_queue<Man> q;
	for(int i=0;i<d;++i){
		//cin>>t>>s;
		scanf("%d %d",&t,&s);
		for(int j=0;j<t;++j){
			scanf("%s %s %d",&name,&ip,&status);
			scanf("%d:%d",&th,&tm);
			
			Man man= Man(name,ip,status,th,tm);
			Ts[i]=man;
			
			
		}
		
	//	q.push(man);
		
		
	}
	
	
	return 0;
}
