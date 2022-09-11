#include<iostream>
#include<set>
using namespace std;
int main() {
	int year, n;
	cin >> year >> n;
	set<int> s;
	int yt;
	int i;
	for ( i = year;;++i) {
		yt = i;
		s.clear();
		for (int j = 0; j < 4; ++j) {
			s.insert(yt % 10);
			yt /= 10;
		}
	//	cout<<"size="<<s.size()<<endl;
		if (s.size() == n) {
			printf("%d %04d\n", i - year, i);
			break;
		}
	}
	
	return 0;
}
