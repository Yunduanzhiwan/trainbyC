

#include<iostream>
using namespace std;

int exGcd(int a,int b,int &x,int &y)
{
    if(b==0)
    {
        x = 1;
        y = 0;
        return a;
    }
    int r = exGcd(b,a%b,x,y);
    int t = x;
    x = y;
    y = t-a/b*y;
    
    return r;
}
int main(){
	int a=9;
	int b=21;
	int x;
	int y;
	cout<<exGcd(a,b,x,y)<<endl;
	cout<<"x="<<x<<" y="<<y<<endl;
	
	return 0;
}
