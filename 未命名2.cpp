#include<iostream>
using namespace std;
template <class T>
class complex{
public:
	T shi;
	T xu;
	complex(){
	}
	complex(T shi , T xu ) :shi(shi),xu(xu){}
	friend ostream& operator << (ostream &, complex<T>&);
	friend istream& operator >> (ostream &, complex<T>&);
};
template <class T>
ostream& operator << (ostream& os,complex<T>& x){
	os<<x.shi<<"+"<<x.xu<<"i"<<endl;
	return os;
}
template <class T>
istream& operator >> (istream& is,complex<T>& x){
	is>>x.shi>>x.xu;
	return is;
}
int main(void){
	complex<int> a;
	cin>>a.shi>>a.xu;
	cout<<"----------\n";
	cout<<a.shi<<a.xu<<endl;
	return 0;
}
