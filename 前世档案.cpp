#include<iostream>
#include<string.h>
#include<stack>
#include<math.h>
using namespace std;
int main(){
    int m,n;
    string ans;
    cin>>m>>n;
    stack<int> s;
    int t;
    int res=0;
    int i;
    while(n--){
    	res=0;
        cin>>ans;
        int len=ans.length();
        for(int i=0;i<len;++i)
        	s.push(ans[i]); 
        i=0;
        while(!s.empty()){
        	t=s.top();s.pop();
        	
        	if(t=='y'){
        		i++;
			}else{
				res+=pow(2,i);
				i++;
			}
		}
		res+=1;
		cout<<res<<endl;
    }
    
    
    return 0;
}
