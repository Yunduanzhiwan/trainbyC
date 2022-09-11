#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
int shu(string s){
		int n=0;
		int len=s.length();
		for(int i=0;i<len;++i){
			n+=(s[i]-'0');
		}
	    int i;
        int t;
        while (n >= 10) {
            i = n;
            t = 0;
            while (i != 0) {
                t += i % 10;
                i /= 10;
            }
            n = t;
        }
        return n;
}
int main()
{
	string n;	//10^1000 Ì«´ó £¬µÃÓÃ×Ö·û´® 
	cin>>n;
	int res=shu(n);
	cout<<res<<endl;
	return 0;
 } 
