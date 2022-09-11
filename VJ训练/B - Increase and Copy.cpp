#include<iostream>
using namespace std;
int MIN = 0x3f3f3f3f;
int main(){
    int  n,t,ant;
    cin >> n;
    while(n--){
        cin >> t;
        MIN = 0x3f3f3f3f;
        for(int i=1;i<=t;i++){   
            ant = (i-1) + (t-i)/i;
            if(t%i){
        	    ant ++;    	
			}
            if(ant <= MIN){
	 			MIN = ant;
			}           
            else{
            	break;
			}
        }
        cout << MIN<<endl;
    }
	return 0;	
}




//#include<iostream>
//#include<map>
//using namespace std;
//int main(){
//    map<long long,bool>map;
//    int ans = 0;
//    int n,t;
//    long long sum = 0;
//    cin >> n;
//    map[0] = true;
//    for(int i=0;i<n;++i){
//        cin >> t;
//        sum +=t;
//        if(map[sum]){
//            ans++;
//            map.clear();
//            map[0] = true;
//            sum = t;    //插入在前面
//        }
//        map[sum] = true;
//    }
//    cout << ans <<endl;
//    return 0;
//}
