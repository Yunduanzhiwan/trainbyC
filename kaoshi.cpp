//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//class Student{
//    public:
//        string name;
//        int h,w,room;
//        Student(){}
//        Student(int room,string name,int h,int w );
//        void print();
//        void input();
//
//};
//
//Student::Student(int room,string name,int h,int w):name(name),h(h),w(w){//  构造函数，含4个参数，完成对4个属性的初始化
//    this->room=room;    
//}
//void Student::print()
//{
//    cout<<setw(6)<<setfill('0')<<room<<" "<<name<<" "<<h<<" "<<w<<endl;
//}
//void Student::input(){
//    cin>>room>>name>>h>>w;
//}
//int main(){
//    int n;
//    string name;
//    int w,h,room;
//    cin>>n;
//    Student a[n];    
//    for(int i=0;i<n;i++){
//		a[i].input();
//    }
//
//    //冒泡排序法：实现按宿舍号从小到大排序
//    for(int i=n;i>=2;i--){
//        bool change=false;
//        for(int j=0;j<=i-2;j++){
//            if (a[j].room>a[i].room){ 
//                Student t=a[j];
//                a[j]=a[j+1];
//                a[j+1]=t;
//                change=true; //修改交换的标志
//            }
//        }
//        if (!change)
//           break;
//    }
//    int maxI=0;
//    for(int i=1;i<n;i++){
//        if (a[i].room!=a[maxI].room){ //遇到新的宿舍号
//            a[maxI].print();  //输出身高最高者的信息
//            maxI=i;
//        }
//        else{
//            if (a[i].h>a[maxI].h)///当前学生的身高超出同宿舍的目前最高身高
//               maxI=i;
//        }   
//    }
//    a[maxI].print();
//   return 0;
//}


#include <iostream>
using namespace std;
class Employee {
	protected:
		string eid;
		string ename;
		float salary;
	public:
		Employee(string id,string name,float salary=2000);
		void print();
};
Employee::Employee(string id,string name,float salary_){
	eid=id;
	ename=name;
	salary=salary_;
}
void Employee::print(){
cout<<"id:"<<eid<<" name:"<<ename<<" salary:"<<salary;
} 
/* 你的代码将被嵌入这里 */
class Department:public Employee{
	string name;
	int peoples;
	public:
		Department(string name_,int peoples_,string id,string name1,float salary=5000):Employee(id,name1,salary),name(name_),peoples(peoples_){
			
		}
		void print(){
			cout<<"department name:"<<name<<endl;
			cout<<"info of manager:\n";
			Employee::print();
		}
	
};
int main() {
	int m;
	cin>>m;
	if (m==1) {
		Department d1("aaa",8,"cw003","Lee",8000);
		d1.print();
	} else if (m==2) {
		Department d2("cccc",21,"wl001","LiuMeng");
		d2.print();
	} else {
		cout<<"employee:"<<endl;
		Employee lee("cw001","Joey",3000);
		lee.print();
	}
	return 0;
}

//
///* 你的代码将被嵌入这里 */
Employee::Employee(string id,string name,float salary_){
	eid=id;
	ename=name;
	salary=salary_;
}
void Employee::print(){
cout<<"id:"<<eid<<" name:"<<ename<<" salary:"<<salary; 
} 
class Department:public Employee{
	string name;
	int peoples;
	public:
		Department(string name_,int peoples_,string id,string name1,float salary=5000):Employee(id,name1,salary),name(name_),peoples(peoples_){}
		void print(){
			cout<<"department name:"<<name<<endl;
			cout<<"info of manager:\n";
			Employee::print();
		}
};














