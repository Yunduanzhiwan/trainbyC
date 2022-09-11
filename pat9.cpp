#include<bits/stdc++.h>
using namespace std;

class People{
public:
	string name;
	string id;
	int qk;//ַי¿צ
	int timehh,timemm;
	int shci;
	int zhe;
	People(){
		shci=-0x3f3f3f3f;
		zhe=-1;
	}
	bool operator <(const People& pa ){
		if(timehh==pa.timehh)return timemm<pa.timemm;
		
		return timehh<pa.timehh;
	} 
	
};

set<People> sets;
int main(){
	int d,p,t,s;
	cin>>d>>p;
	People *peoples=new People[1005];;
	for(int i=0;i<d;++i){
		cin>>t>>s;
		
		for(int j=0;j<t;++j){
			cin>>peoples[j].name>>peoples[j].id>>peoples[j].qk;
			scanf("%d:%d",&peoples[j].timehh,&peoples[j].timemm);
			peoples[j].zhe=i;
			sets.find()
		}
		
		for(int j=0;j<t;++j){
			cout<<"p= "<<peoples[j].name<<" "<<peoples[j].id<<" "<<peoples[j].timehh<<" "<<peoples[j].timemm<<" sci="<<peoples[j].shci<<" zhe="<<peoples[j].zhe<<endl;
		}
		
		sort(peoples,peoples+t);
		
		int fa=0;
		cout<<"s="<<s<<endl;
		for(int j=0;j<t;++j){
			cout<<"p= "<<peoples[j].name<<" "<<peoples[j].id<<" "<<peoples[j].timehh<<" "<<peoples[j].timemm<<" sci="<<peoples[j].shci<<" zhe="<<peoples[j].zhe<<endl;
//			if(fa==s){
//				break;
//			}
		//	cout<<"fa="<<fa<<endl;
			if((peoples[j].zhe-peoples[j].shci)>p&&fa<s&&peoples[j].id.length()==18){
				fa++;
				peoples[j].shci=peoples[j].zhe;
		//		cout<<peoples[j].name<<" "<<peoples[j].id<<endl;
			}
			
		}
	}
	
	return 0;
}
