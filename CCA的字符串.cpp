//���ӣ�https://ac.nowcoder.com/acm/contest/9700/B
//��Դ��ţ����
//
//����һ�����ɴ�д��ĸ��Сд��ĸ��ɵ��ַ�����
//һ���ַ����ǡ�ţ���ģ����ҽ�������һ���Ӵ�Ϊ��NowCoder�������ִ�Сд����
//�ʸ����ַ����ж��ٸ��Ӵ��ǡ�ţ���ġ�
//��������:
//һ�У�һ���ַ�����
//�������:
//һ�У�һ������ʾ�𰸡�
//ʾ��1
//����
//����
//NowCoderNowCode
//���
//����
//8
//��ע:
//�ַ�������<=10^5

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
