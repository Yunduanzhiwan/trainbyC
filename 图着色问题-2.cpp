#include<iostream>
#include<vector>
#include<set>
#include<string.h>
using namespace std;
/*
L2-3 ͼ��ɫ���� (25 ��)
ͼ��ɫ������һ��������NP��ȫ���⡣��������ͼG=(V,E)���ʿɷ���K����ɫΪV�е�ÿһ���������һ����ɫ��ʹ�ò������������ڶ������ͬһ����ɫ��

�����Ⲣ����Ҫ���������ɫ���⣬���ǶԸ�����һ����ɫ���䣬�����ж����Ƿ���ͼ��ɫ�����һ���⡣

�����ʽ��
�����ڵ�һ�и���3������V��0<V��500����E����0����K��0<K��V�����ֱ�������ͼ�Ķ��������������Լ���ɫ�����������ɫ����1��V��š����E�У�ÿ�и���һ���ߵ������˵�ı�š���ͼ����Ϣ����֮�󣬸�����һ��������N����20�����Ǵ�������ɫ���䷽���ĸ��������N�У�ÿ��˳�θ���V���������ɫ����i�����ֱ�ʾ��i���������ɫ�������ּ��Կո�ָ�����Ŀ��֤����������ͼ�ǺϷ��ģ����������Ի�·���رߣ���

�����ʽ��
��ÿ����ɫ���䷽���������ͼ��ɫ�����һ���������Yes���������No��ÿ��ռһ�С�

����������
6 8 3
2 1
1 3
4 6
2 5
2 4
5 4
5 6
3 6
4
1 2 3 3 1 2
4 5 6 6 4 5
1 2 3 4 5 6
2 3 4 2 3 4
���������
Yes
Yes
No
No

*/
int main(){
	int v,e,k,n;
	cin>>v>>e>>k;
	vector<vector<int> >vv(v+1);
	vv.resize(v+1);
	int color[v+1];
	set<int> se;
	memset(color,0,sizeof(int)*n+1);
	int a,b;
	for(int i=1;i<=e;++i){
		cin>>a>>b;
		vv[a].push_back(b);
	}
	cin>>n;
	int flag;
	int len;
	for(int i=1;i<=n;++i){
		se.clear();
		flag=1;
		for(int x=1;x<=v;++x){//�����x���ڵ� 
			cin>>color[x];
			se.insert(color[x]);
		}
		if(se.size()!=k){
			//cout<<"se.size="<<se.size()<<endl;
			flag=0;
		}
		//�ѽڵ����ͨ�ڵ��ó���
		for(int x=1;x<=v;++x){
		 	if(flag==0){
		 	//	cout<<"��ǰ����"<<endl; 
		 		break;
			 }
			len=vv[x].size();
			for(int j=0;j<len;++j){
				if(color[vv[x][j]]==color[x]){
					flag=0;
					break; 
				}
			}
		} 
		if(flag)cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	
	return 0;
}
