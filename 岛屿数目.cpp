#include<iostream>
#include<string.h>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
#define MAX 55
int map[MAX][MAX];
int cont=0;//������� 


typedef pair<int,int>PA;//�����ֵ�� 
vector<PA>st;//��¼ÿ�������ÿ�����أ����һ�����صģ������ֵ������ڶ�̬�����У� 
bool comp(const PA&a ,const PA&b ){//�Զ���Ƚ� 
	if(a.first==b.first) return a.second<b.second;
	else return a.first<b.first;
}

set<int> ss;//����������ȥ��ԭ����㣬���ٸ�����������ͬ 
set<vector<PA>> strs;//��״   ���ÿ����ͬ��״�ĵ���,������set���ϵ�ȥ��ԭ����ÿ�� vector<PA>st �Ž�ȥȥ�أ���� strs.size()������״�ĸ��� 

int xx=0;//��Ϊ����ĵ�һ���������꣬��֪��Ϊɶ��x0,y0���������Ǳ������Ը������֣�xx,yx��ͨ���� 
int yx=0;
int n,m;//n*m�ĵ�ͼ�� 0��n-1 
int dfs(int x,int y){ 
	if(x<0||y<0||x>=n||y>=m||map[x][y]==0)return 0;
	map[x][y]=0;//�����ظ������Ч�� 
	st.push_back(PA(x-xx,y-yx));
	return dfs(x-1,y)+dfs(x+1,y)+dfs(x,y-1)+dfs(x,y+1)+1;//�Լ����ܱߵ���� 
}

int main(){
	cin>>n>>m;
	char c;
	int  mian;
	memset(map,0,sizeof(map)); //��ʼ����ͼ 
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			cin>>c;
			if(c=='.')
				map[i][j]=0;
			else if(c=='#')
				map[i][j]=1;
		} 
	}
	for(int i=0;i<n;++i){
		for(int j=0;j<m;++j){
			if(map[i][j]==1){
				xx=i;yx=j;//����ĵ�һ������ 
				mian=dfs(i,j);//������� 
				sort(st.begin(),st.end(),comp);//����ÿ���������һ�����ص������ֵ���� 
				strs.insert(st);//�ѵõ�st����״������set���� 
				cont++;//��������+1 
				ss.insert(mian);//�����������ȥ�� 
				st.clear();//�����״ 
			} 
		} 
	}
	cout<<cont<<" "<<ss.size()<<" "<<strs.size()<<endl;
	return 0;
} 
/*

7 7 
#######
#.....#
#.###.#
#.#.#.#
#.###.#
#.....#
#######  

3 7
###.###
#.#.#.#
###.###

6 6
......
.##...
..#...
....#.
....##
......
*/ 


