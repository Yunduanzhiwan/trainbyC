#include<iostream>
#include<string>
using namespace std;
template <class T1, class T2>
class Pair
{
public:
	T1 key; //关键字
	T2 value; //值
	Pair(T1 k, T2 v){
		key = k;
		value = v;
	}
	bool operator < (const Pair<T1, T2> & p) const{
		if (key < p.key)
		
			return true;
		return false;
	}

};
int main()
{
	Pair<int, string> student(19, "Tom");//实例化出一个类 Pair<int,string>
	Pair<int, string> student1(20, "abc");//实例化出一个类 Pair<int,string>
	cout << student.key << " " << student.value;
	cout << "\n--------------\n";
	bool is = student1 < student;
	cout << is << endl;
	cout << "\n-----------\n";
	return 0;
}

