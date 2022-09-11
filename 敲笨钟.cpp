#include<iostream>
#include<string.h>
#include<sstream>
#include<vector>
using namespace std;
const string qbz="qiao ben zhong.";
int main(){
    int n;
    string str;
    cin>>n;
    bool flag=true;
    vector<string> v;
    	getchar();
    while(n--){
        getline(cin,str);
        v.clear();
        flag=false;
     //   cout<<"str="<<str<<endl;
   //     cout<<"strfindFistr="<<str.find_first_of(",")<<endl;
        int ind1=str.find(",");
        int ind2=str.find(".");
     //   cout<<"ind1="<<ind1<<" ind2="<<ind2<<endl;
        if(ind1!=-1&&ind2!=-1){
     //   	cout<<str[ind1]<<endl;
            if(str[ind1-3]=='o'&&str[ind1-2]=='n'&&str[ind1-1]=='g'&&str[ind2-3]=='o'&&str[ind2-2]=='n'&&str[ind2-1]=='g'){
                flag=true;
            }
        }
        if(!flag){
            cout<<"Skipped"<<endl;
             continue;
        }
        stringstream ss(str);
      //  cout<<"str="<<str<<" sstream ";
        while(ss>>str){
        //	cout<<str<<" ";
            v.push_back(str);
        }
     //   cout<<endl;
        int len=v.size();
        for(int i=0;i<len-3;++i){
            cout<<v[i]<<" ";
        }
        cout<<qbz<<endl;
        
        
    }
    
    
    return 0;
}
