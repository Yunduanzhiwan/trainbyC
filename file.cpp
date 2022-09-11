#include<iostream>
#include<string>
#include<fstream>
using namespace std;
fstream file("ou.txt",ios::in|ios::out);
class S{
	public:
		int i;
		string name;
		S(){
		}
		S(int i_,string name_):i(i_),name(name_){
		}
};
void test(){
		S s2;
	file.seekg(0);
	while(!file.eof()){
			file.read((char*)&s2,sizeof(S));
		cout<< s2.i<<" "<<s2.name<<endl;
	cout<<"tellg "<<file.tellg()<<endl;
	}
	
}
int main(){
	
	S s(1,"yefeng");
//	cout<< s.i<<" "<<s.name<<endl;
	file.seekp(0,ios::end);
	cout<<"tellg "<<file.tellg()<<endl;
	file.write((char*)&s,sizeof(S));
	
	
	file.flush();
	cout<<"tellg "<<file.tellg()<<endl;
cout<<"--------------------\n";
//
//
file.seekg(0);
S s2;
file.read((char*)&s2,sizeof(S));
	cout<< s2.i<<" "<<s2.name<<endl;
cout<<"tellg "<<file.tellg()<<endl;
file.seekp(file.tellg());
	file.read((char*)&s2,sizeof(S));
	cout<< s2.i<<" "<<s2.name<<endl;
	cout<<"tellg "<<file.tellg()<<endl;
	file.close();
	 
	
	return 0;
}
