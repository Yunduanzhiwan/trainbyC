#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
/*
���Ը�����ĿҪ�����򼴿� 
*/
struct Course{
	int id;
	int chinese;
	int math;
	int english;
	int sum;
}; 
bool cmp(Course a,Course b){
	if(a.sum!=b.sum){
		return a.sum>b.sum;
	}
	
	else if(a.chinese!=b.chinese){
		return a.chinese>b.chinese;
	}
	return a.id<b.id;//�޸�  ��ĿΪѧ��С�� ��ǰ�� 
}
int main(){
	int n;
	cin>>n;
	vector<Course> v;
	
	int ch,math,eng,sum; 
	for(int i=1;i<=n;++i){
		sum=0;
		cin>>ch>>math>>eng;
		sum=ch+math+eng;
		Course	course={i,ch,math,eng,sum};
		v.push_back(course);
	}
	
	//����
	sort(v.begin(),v.end(),cmp);
	for(int i=0;i<5;++i){
		cout<<v[i].id<<" "<<v[i].sum<<endl;
	} 
	
	return 0;
}
