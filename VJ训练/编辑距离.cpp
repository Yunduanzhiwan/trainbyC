#include<iostream>
#include<string.h>
using namespace std; 
int minDistance(string word1, string word2) {
        int l1=word1.length();
        int l2=word2.length();

        if(l1*l2==0){//其中有零，返回另一个的长度 
            return (l1+l2);
        }
        int dp[l1+1][l2+1];//初始化dp0为0 
        for(int i=0;i<=l2;++i){
            dp[i][0]=i;
        }
        for(int j=0;j<=l1;++j){
            dp[0][j]=j;
        }
        for(int i=1;i<=l1;++i){
            for(int j=1;j<=l2;++j){
                int l=dp[i-1][j]+1;
                int d=dp[i][j-1]+1;
                int r=dp[i-1][j-1];
                if(word1[i-1]!=word2[j-1]){
                    r+=1;
                }
                dp[i][j]=min(l,min(d,r));
            }
        }
        return dp[l1][l2];
    }
int main(){
    	
    	string a,b;
    	cin>>a>>b;
		int res=minDistance(a,b);
    	cout<<res<<endl;
    	
	}
