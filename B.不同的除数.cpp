
#include<iostream>
using namespace std;
int gcd(int x,int y){
    return y?gcd(y,x%y):x;
}
int lcm(int x,int y){
	int  hcf = x;
    int temp = y;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }
 
    int lcm = (x * y) / hcf;
    return lcm;
}
int main(){
//	cout<<lcm(3,6);
	int t,d;
	cin>>t;
	int num=0;
	while(t--){
		cin>>d;
		num=1;
		int min=0;
		int st=1;
		int ans=st+d;
		while(num<3){
		//	cout<<"st="<<st<<" ans="<<ans<<endl;
			min=lcm(st,ans);
			num++;
			st=ans;
			ans=st+d;
	//		cout<<"min="<<min<<endl;
		}
		cout<<min<<endl;
	}
		
	return 0;
}
