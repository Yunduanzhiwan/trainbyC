#include<iostream>
using namespace std;
/*
正多边形的n 的角度


jiaodu=180*（n-2)/n 

*/
bool isDelta(int degree){
	double is=1.0*360/(180-degree);
	if((int)is==is){
		return true;
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int degree;
	for(int i=0;i<n;++i){
		cin>>degree;
		if(isDelta(degree)){
			cout<<"YES\n"; 
		}
		else{
			cout<<"NO\n";
		}
	}
	
	return 0;
} 

/*
Emuskald在他的农场周围需要围栏，但是他懒得自己建造它。所以他买了一个围栏建筑机器人。 他希望栅栏成为正多边形。机器人沿着单个路径构建栅栏，但它只能以单个角度制作栅栏角。 机器人能够建造Emuskald想要的围栏吗？换句话说，是否存在正多边形，其角度等于α？
Input
第一行输入包含一个整数t（0
Output
对于每个测试，输出单行“YES”（不带引号），如果机器人可以构建Emuskald想要的栅栏，并且“NO”（没有引号），如果不可能的话。
Examples
Input
3
30
60
90
Output
NO
YES
YES
Note
在第一个测试用例中，不可能构建栅栏，因为没有带角度的正多边形。 在第二个测试用例中，栅栏是一个正三角形，在最后一个测试用例中是一个正方形。

*/
