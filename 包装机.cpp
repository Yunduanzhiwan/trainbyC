#include<iostream>
#include<stack>
#include<string.h>
#include<sstream> 
#include<deque>
using namespace std;
int main() {
    int n, m, smax;
    cin >> n >> m >> smax;

    char ch[m+1];
    deque<char> ss[n+2];
    
    for (int i = 1; i <= n; ++i) {
    	scanf("%s",&ch);
        for (int j = 0; j < m; ++j) {
            ss[i].push_back(ch[j]);
        }
		getchar();
    }
    
    stack<char> s;
    int t;
    string strs;
    getline(cin,strs);
    stringstream sstr(strs);
    int sum;
    while (sstr>>strs) {
    	if(strs=="-1"){
    		break;
		}
        if (strs == "0") {
        	if(s.empty()){
        		continue;
			}
			cout<<s.top();
	
            s.pop();
        }
        else {
            
        	if(s.size()==smax){
        		cout<<s.top();
            	s.pop();
			} 
        	 sum=0;
        	for(int i=0;i<strs.length();++i)sum+=strs[i]-'0';
            if(ss[sum].empty()) continue;
            s.push(ss[sum].front());
            ss[sum].pop_front();
        }
    }
    return 0;
}
