#include <iostream>
using namespace std;

/*
Constructor called.
num:10010
name:Wang_li
sex:f

Constructor called.
num:10011
name:Zhang_fun
sex:m

Destructor called.
Destructor called.

*/
class Student{
	int num;
	string name;
	char sex;
	public:
		Student(int a,string s,char f){
			
		}
		void display(){
			
		}
};

/* 请在这里填写答案 */
int main()
  {Student stud1(10010,"Wang_li",'f');
   stud1.display();
   Student stud2(10011,"Zhang_fun",'m');
   stud2.display();
   return 0;
}


/* 你的代码将被嵌在这里 */
