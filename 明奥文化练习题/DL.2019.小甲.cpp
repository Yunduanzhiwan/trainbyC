#include<bits/stdc++.h>
using namespace std;
int myabs(int x){
   return  (x^(x>>31))+((x>>31)&1);
}
int main(){
    int a,b;
    cin>>a>>b;
    int at,bt;
    at=myabs(a);
    bt=myabs(b);
    int res=0;
    if(at>bt)res=2;
    else if(at==bt)res=1;
    else res=0;
    cout<<res<<endl;
    return 0;
}
