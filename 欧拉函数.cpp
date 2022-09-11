#include<stdio.h>
#include<stdlib.h>
using namespace std;
int eular(int n)
{
    int ret=1,i;
    for(i=2;i*i<=n;i++)
    {
    	printf("i= %d\n",i);
        if(n%i==0)//ÊÇÒò×Ó 
        {
            n/=i;
			ret*=(i-1);
			printf("ret= %d n=%d\n",ret,n);
            while(n%i==0) n/=i,ret*=i,printf("ret= %d n=%d\n",ret,n);
        }
    }
    if(n>1) ret*=n-1;
    printf("ret= %d n=%d\n",ret,n);
    return ret;
}
long long myeular(long long n) {
	if((n%2)%2==1)return (n%2)-1;
    long long ans = n;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) {
            ans -= ans/i;
            while(n % i == 0)
                n /= i;
        }
    }
    if(n > 1)ans -= ans/n;
    return ans;
}
int main ()
{
      int n,s;
      scanf("%d",&n);
      s=myeular(n);
      printf("%d",s);
      return 0;
}
