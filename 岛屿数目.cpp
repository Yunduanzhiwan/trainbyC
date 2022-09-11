#include<iostream>
#include<string.h>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
#define MAX 55
int map[MAX][MAX];
int cont=0;//岛屿个数 


typedef pair<int,int>PA;//构造键值对 
vector<PA>st;//记录每个岛屿的每个像素，与第一个像素的，坐标差值，存放在动态数组中， 
bool comp(const PA&a ,const PA&b ){//自定义比较 
	if(a.first==b.first) return a.second<b.second;
	else return a.first<b.first;
}

set<int> ss;//岛屿的面积，去重原理计算，多少个岛屿的面积不同 
set<vector<PA>> strs;//形状   存放每个不同形状的岛屿,：利用set集合的去重原理，把每个 vector<PA>st 放进去去重，最后 strs.size()就是形状的个数 

int xx=0;//作为岛屿的第一个像素坐标，不知道为啥，x0,y0这样子老是报错，所以改了名字，xx,yx就通过了 
int yx=0;
int n,m;//n*m的地图， 0到n-1 
int dfs(int x,int y){ 
	if(x<0||y<0||x>=n||y>=m||map[x][y]==0)return 0;
	map[x][y]=0;//避免重复，提高效率 
	st.push_back(PA(x-xx,y-yx));
	return dfs(x-1,y)+dfs(x+1,y)+dfs(x,y-1)+dfs(x,y+1)+1;//自己和周边的面积 
}

int main(){
	cin>>n>>m;
	char c;
	int  mian;
	memset(map,0,sizeof(map)); //初始化地图 
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
				xx=i;yx=j;//岛屿的第一个像素 
				mian=dfs(i,j);//返回面积 
				sort(st.begin(),st.end(),comp);//根据每个像素与第一个像素的坐标差值排序 
				strs.insert(st);//把得到st（形状）放入set容器 
				cont++;//岛屿数量+1 
				ss.insert(mian);//面积放入容器去重 
				st.clear();//清空形状 
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


