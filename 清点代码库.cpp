/*
上图转自新浪微博：“阿里代码库有几亿行代码，但其中有很多功能重复的代码，比如单单快排就被重写了几百遍。请设计一个程序，能够将代码库中所有功能重复的代码找出。各位大佬有啥想法，我当时就懵了，然后就挂了。。。”

这里我们把问题简化一下：首先假设两个功能模块如果接受同样的输入，总是给出同样的输出，则它们就是功能重复的；其次我们把每个模块的输出都简化为一个整数（在 int 范围内）。于是我们可以设计一系列输入，检查所有功能模块的对应输出，从而查出功能重复的代码。你的任务就是设计并实现这个简化问题的解决方案。

输入格式：
输入在第一行中给出 2 个正整数，依次为 N（≤10
?4
?? ）和 M（≤10
?2
?? ），对应功能模块的个数和系列测试输入的个数。

随后 N 行，每行给出一个功能模块的 M 个对应输出，数字间以空格分隔。

输出格式：
首先在第一行输出不同功能的个数 K。随后 K 行，每行给出具有这个功能的模块的个数，以及这个功能的对应输出。数字间以 1 个空格分隔，行首尾不得有多余空格。输出首先按模块个数非递增顺序，如果有并列，则按输出序列的递增序给出。

注：所谓数列 { A
?1
?? , ..., A
?M
??  } 比 { B
?1
?? , ..., B
?M
??  } 大，是指存在 1≤i<M，使得 A
?1
?? =B
?1
?? ，...，A
?i
?? =B
?i
??  成立，且 A
?i+1
?? >B
?i+1
?? 。

输入样例：
7 3
35 28 74
-1 -1 22
28 74 35
-1 -1 22
11 66 0
35 28 74
35 28 74
输出样例：
4
3 35 28 74
2 -1 -1 22
1 11 66 0
1 28 74 35
*/
#include<iostream>
#include<map>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;
struct Cmp{
		bool operator <(const map<vector<int>, int>::iterator& a, const map<vector<int>, int>::iterator& b){
			return a->second>b->second;
		}
};
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
	sort(mm.begin(), mm.end(), cmp);
	map<vector<int>, int>::iterator it;
	for (it = mm.begin(); it != mm.end(); ++it) {
		cout << it->second << endl;
		//		cout << (it->first) << " " << it->second << endl;
	}
	return 0;
}
