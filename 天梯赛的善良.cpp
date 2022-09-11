#include<iostream>
#include<map>

using namespace std;
#define INF 0x3f3f3f3f
int main(){
    int n;
    cin>>n;
    int min,minnum,max,maxnum;
    min=INF;
    max=-1;
    minnum=maxnum=0;
    int t;
    map<int,int> mm;
    for(int i=0;i<n;++i){
        cin>>t;
        if(t<min){
            min=t;
        }
        if(t>max){
            max=t;
        }
        mm[t]++;
    }
    cout<<min<<" "<<mm[min]<<endl<<max<<" "<<mm[max]<<endl;
    
    return 0;
}
