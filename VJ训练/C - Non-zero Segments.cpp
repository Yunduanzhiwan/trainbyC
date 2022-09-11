#include<iostream>
#include<map>
using namespace std;
int main(){
    map<long long,bool>map;
    int ans = 0;
    int n,t;
    long long sum = 0;
    cin >> n;
    map[0] = true;
    for(int i=0;i<n;++i){
        cin >> t;
        sum +=t;
        if(map[sum]){
            ans++;
            map.clear();
            map[0] = true;
            sum = t;    //插入在前面
        }
        map[sum] = true;
    }
    cout << ans <<endl;
    return 0;
}
