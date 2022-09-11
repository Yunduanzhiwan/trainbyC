#include <bits/stdc++.h>
using namespace std;
//vector<string> a;
string a[500000+10];
int main(){
	int n;
	scanf("%d",&n);
	string aa,bb; 
	int p,l;
	
	string t; 
	for(int i=0;i<n;++i){
		cin>>t;
		a[i]=t;
	}


	for(int i=n-1;i>0;--i){
			if(strcmp(a[i].c_str(),a[i-1].c_str())==-1){
				aa=a[i];
				bb=a[i-1];
				l=a[i].size();
				p=0;
				while(p<l&&aa[p]>=bb[p]){
					p++;
				}
				a[i-1].erase(p);
			}
	}
	
	for(int i=0;i<n;++i){
		cout<<a[i]<<endl;
	}	
	return 0;
}

//
//#include <bits/stdc++.h>
//using namespace std;
//typedef long long ll;
//vector <string> vec;
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    string s;
//    for(int i = 1; i <= n; i++)
//    {
//        cin >> s;
//        vec.push_back(s);
//    }
//    for(int i = n - 1; i > 0; i--)
//    {
//        if(strcmp(vec[i].c_str(), vec[i - 1].c_str()) == -1)//  <
//        {
//            int pos = 0;
//            string a = vec[i];
//            string b = vec[i - 1];
//            while(pos < a.size() && a[pos] >= b[pos])
//                pos++;
//            vec[i - 1].erase(pos);
//        }
//    }
//    for(int i = 0; i < n; i++)
//        cout << vec[i] << endl;
//    return 0;
//}

