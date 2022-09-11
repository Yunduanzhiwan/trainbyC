#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<vector<int>, int> PAIR;

bool cmp_by_value(const PAIR& lhs, const PAIR& rhs) {  
  return lhs.second > rhs.second;  
}
int main() {
	int n, m, k;
	cin >> n >> m;
	set<vector<int> > s;
	map<vector<int>, int > mm;
	int t;
	vector<int> v;
	for (int i = 0; i < n; ++i) {
		v.clear();
		for (int j = 0; j < m; ++j) {
			cin >> t;
			v.push_back(t);
		}
		mm[v]++;
		s.insert(v);
	}
	
	cout << s.size() << endl;
	vector<PAIR> name_score_vec(mm.begin(), mm.end());
 	sort(name_score_vec.begin(), name_score_vec.end(), cmp_by_value);
 	
 	PAIR mapt;
 	vector<int> vit;
 	int len=name_score_vec.size();
 	int vlen;
 	for(int i=0;i<len;++i){
 		mapt=name_score_vec[i];
 		vit=mapt.first;
 		vlen=vit.size();
 		cout<<mapt.second;
 		for(int j=0;j<vlen;++j) cout<<" "<<vit[j];
 		cout<<endl;
	 }
// 	
// 	
//	map<vector<int>, int>::iterator it;
//    vector<int> vit;
//	for (it = mm.begin(); it != mm.end(); ++it) {
//        vit=it->first;
//        
//		cout << it->second ;
//        for(int i=0;i<vit.size();++i){
//            cout<<" "<<vit[i];
//        }
//        cout<<endl;
//		//		cout << (it->first) << " " << it->second << endl;
//	}
	return 0;
}
