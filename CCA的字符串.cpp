//链接：https://ac.nowcoder.com/acm/contest/9700/B
//来源：牛客网
//
//给定一个仅由大写字母和小写字母组成的字符串。
//一个字符串是“牛”的，当且仅当其有一个子串为“NowCoder”（区分大小写）。
//问给定字符串有多少个子串是“牛”的。
//输入描述:
//一行，一个字符串。
//输出描述:
//一行，一个数表示答案。
//示例1
//输入
//复制
//NowCoderNowCode
//输出
//复制
//8
//备注:
//字符串长度<=10^5

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5;
int n,m;
char s[N];
char t[10]="NowCoder";
 
 
 
void solve(){
   scanf("%s",s);
   n=strlen(s);
   ll ans=0,last=-1;
   for(int i=0;i<=n;++i){
        bool flag=1;
        for(int j=0;j<8;++j)
            if(s[i+j]!=t[j]){
                flag=0;
                break;
            }
        if(flag){
            ans+=1ll*(n-(i+7))*(i-last);
            last=i;
        }
   }
   printf("%lld\n",ans);
}
int main(){
    
        solve();
    
     
    return 0;
}
