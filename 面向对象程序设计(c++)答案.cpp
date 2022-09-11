题目：1重载函数的参数列表必须不相同。 答案：FALSE

题目：2int i; int &ri=i；对于这条语句，ri和i这两个变量代表的是同一个存储空间。   答案：TRUE

题目：3使用new运算符开辟存储空间后，不必使用delete运算符撤销相应的空间。   答案：FALSE

题目：4结构体成员的类型必须是基本数据类型。  答案：FALSE

题目：5结构是变量的集合，可以按照对基本数据类型的操作方法单独使用其成员变量。   答案：TRUE

题目：6在定义嵌套的结构类型时，必须先定义成员的结构类型，再定义主结构类型。   答案：FALSE

题目：7结构数组是结构与数组的结合体，与普通数组的不同之处在于每个数组元素都是一个结构类型的数据，包括多个成员项。   答案：TRUE

题目：8C++程序中，类的构造函数名与类名相同。   答案：TRUE

题目：9C++程序中，一个类的构造函数可以被重载。   答案：TRUE

题目：10C++程序中，一个类的析构函数可以被重载。   答案：FALSE

题目：11析构函数的作用主要是释放对象占用的资源。   答案：TRUE

题目：12构造函数可以通过对象多次调用。   答案：FALSE

题目：13有下面两种定义：  
```
struct stu{
	char name[8];		
	int age;	
	char sex;		
	double height;	
}; 
```
```
class stu{
public:
	char name[8];
	int age;
	char sex;
	double height;
}; 
```
它们的含义是完全等价的，都包含了相同的数据项，只不过是两种不同的类型。
 答案：TRUE

题目：14在定义对象数组时，可以直接进行初始化，也可以通过赋值语句实现赋值。   答案：TRUE

题目：15利用赋值语句对数组元素进行赋值时，系统先调用有参构造函数创建无名对象，并将其值赋给相应对象数组元素，然后再将无名对象释放,释放时调用析构函数。   答案：TRUE

题目：16this 指针是一个系统预定义的特殊指针,指向当前正在操作的对象。   答案：TRUE

题目：17静态成员的特点是不管这个类创建了多少个对象,其静态成员在内存中只保留一份副本,这个副本为该类的所有对象共享,或者说静态成员为类所有。   答案：TRUE

题目：18静态数据成员不能在类中初始化，使用时需要在类体外声明。   答案：TRUE

题目：19在类中声明常数据成员时，只能通过构造函数成员初始化列表的方式来实现。   答案：FALSE

题目：20类的静态成员函数不可以定义为虚函数。   答案：没有做该题

题目：21虚函数是用virtual 关键字说明的成员函数。   答案：没有做该题

题目：22如果派生类的成员函数的原型与基类中被定义为虚函数的成员函数原型相同，那么，这个函数自动继承基类中虚函数的特性。   答案：没有做该题

题目：23派生类中的虚函数，不仅可以覆盖基类的虚函数，还会隐藏基类中同名函数的所有其它重载形式。  答案：没有做该题

题目：24在构造函数和析构函数中调用虚函数，不是多态。编译时即可确定，调用的函数是自己的类或基类中定义的函数 ，不会等到运行时才决定调用自己的还是派生类的函数。   答案：没有做该题

题目：25可以通过下标随机访问向量vector中的元素。   答案：没有做该题

题目：26当向量对象的内存用完之后，就会产生越界错误。   答案：没有做该题

题目：27set/multiset的区别是set用来存储一组无重复的元素，而multiset允许存储有重复的元素。   答案：没有做该题

题目：28STL中关联型容器都是有序的。   答案：没有做该题

题目：29映射容器里存储的元素都是成对存在的。   答案：没有做该题

题目：30迭代器是对象，它的作用类似于指向元素的指针。   答案：没有做该题

题目：31设置和清除格式标志字的成员函数需要通过对象来引用它们，输出显示格式的对象通常是cout。   答案：没有做该题

题目：32使用打开文件函数open()之前，需要定义一个流类对象，使用open()函数来操作该对象。（。   答案：没有做该题

题目：33使用关闭文件函数close()关闭一个文件时，流对象仍存在。   答案：没有做该题

题目：34打开ASCⅡ码流文件和二进制流文件时，打开方式是相同的。   答案：没有做该题

题目：35seekg()函数和seekp()函数分别用来定位读指针和写指针的。如果使用seek()函数可以同时定义读写指针。   答案：没有做该题


------------------------------------------


题目1:（ ）不是面向对象程序设计的主要特征。  choices=["封装"  "继承"  "多态"  "结构"]   答案：D

题目2:按照标识符的要求，（ ）不能组成标识符。  choices=["连接符"  "下划线"  "大小写字母"  "数字字符"]   答案：A

题目3:cout 是由I/O 流库预定义的（ ）。  choices=["类"  "对象"  "包含文件"  "常量"]   答案：B

题目4:下列表达错误的是（ ）。  choices=["cout<<setw(5)"  "cout<<fill('#')"  "cout.setf(ios::uppercase)"  "cin.fill('#')"]   答案：B

题目5:关于C和C++的描述中，正确的是（ ）  choices=["C是面向过程，C++是纯面向对象"  "C++是C的超集"  "C++是对C的错误的修改"  "C++和C没有关系"]   答案：B

题目6:C++语言支持过程程序设计方法和（ ）设计方法。  choices=["面向对象"  "面向函数"  "面向用户"  "面向问题"]   答案：A

题目7:使用操作符setw对数据进行格式输出时，需要包含（）文件。  choices=["iostream.h"  "fstream.h"  "iomanip.h"  "stdlib.h"]   答案：C

题目8:下列语句中，不能连续输出3个值的是。  choices=["cout<<x<<y<<z;"  "cout<<x  y  z;"  "cout<<x; cout<<y; cout<<z;"  "cout<<(x  y  z)<<(x  y  z)<<(x  y  z);"]   答案：B

题目9:如果默认参数的函数声明为“ void fun(int a,int b=1,char c='a',float d=3.2);”，
则下面调用写法正确的是（ ）。  choices=["fun();"  "fun(2  3);"  "fun(2     'c'  3.14)"  "fun(int a=1);"]   答案：A

题目10:在C++中，关于下列设置缺省参数值的描述中，（）是正确的。  choices=["不允许设置缺省参数值；"  "在指定了缺省值的参数右边，不能出现没有指定缺省值的参数；"  "只能在函数的定义性声明中指定参数的缺省值；"  "设置缺省参数值时，必须全部都设置；"]   答案：B

题目11:对定义重载函数的下列要求中，（ ）是错误的。  choices=["要求参数的个数不同"  "要求参数中至少有一个类型不同"  "要求函数的返回值不同"  "要求参数个数相同时，参数类型不同"]   答案：C

题目12:一个函数为void f(int x, char y = ‘a’)，另一个函数为void f(int)，则它们\_\_\_\_。  choices=["不能在同一程序块中定义"  "可以在同一个程序块中定义并可重载"  "可以在同一个程序块中定义，但不可以重载"  "以上说法均不正确"]   答案：A

题目13:以下有关函数的叙述中正确的是（ ）。  choices=["函数必须返回一个值"  "函数体中必须有return语句"  "两个同名函数，参数表相同而返回值不同不算重载"  "函数执行中形参的改变会改变实参"]   答案：C

题目14:重载函数在调用时选择的依据中，错误的是(??)  choices=["函数的参数"  "参数的类型"  "函数的名字"  "函数的类型"]   答案：C

题目15:以下选项中，是正确的函数默认形参设置的是。  choices=["int fun(int a  int b  int c);"  "int fun(int a  int b  int c=1);"  "int fun(int a  int b=1  int c);"  "int fun(int a=1  int b  int c);"]   答案：B

题目16:设void f1(int * m，long & n)；int a；long b；则以下调用合法的是（）。  choices=["f1(a，b)；"  "f1(&a，b)；"  "f1(a，&b)；"  "f1(&a，&b)；"]   答案：B

题目17:下列对变量的引用中错误的是\_\_\_\_。  choices=["int a; int &p = a;"  "char a; char &p = a;"  "int a; int &p; p=a;"  "loat a; float &p = a;"]   答案：C

题目18:下列关于引用的说法，错误的是\_\_\_\_。  choices=["引用在定义时必须初始化"  "引用在初始化时不能绑定常量值"  "引用初始化后，可以通过更变来引用其他变量"  "数组不能定义引用"]   答案：D

题目19:下列哪一个说法是不正确的?  choices=["某个变量的引用等价于这个变量  相当于该变量的一个别名"  "定义引用时一定要将其初始化成引用某个变量"  "初始化后  它就一直引用该变量不会再别引用别的变量了"  "引用可以引用变量  也可以引用常量和表达式"]   答案：C

题目20:下面程序片段,哪一个是正确的?  choices=["int n=4; int &r=n*3;"  "int m=5; const int &r=m; r=6;"  "int n=8; const int &p=n; int &q=p ;"  "int n=8; int &p=n; const int q=p ;"]   答案：C

题目21:下面程序段 int a=1,b=2; int &r=a; r=b; r=7; cout<<a<<endl; 的输出结果是?  choices=["1"  "2"  "7"  "无法确定"]   答案：C

题目22:如有函数定义：void func(int x = 0, int y = 0){ …. }，则下列函数调用中会出现问题的是\_\_\_\_。  choices=["func(1  2   3);"  "func(1  2);"  "func(1);"  "func();"]   答案：A

题目23:以下正确的函数声明形式是（         ）。  choices=["int func(int x    int y)"  "int func(int    int);"  "int func(int x ; int y);"  "int func(int x    y);"]   答案：D

题目24:顺序执行以下语句后，
int  x=0;
int  &y = x;
x++;
变量y 的值是（      ）。  choices=["0"  "1"  "2"  "不确定"]   答案：B

题目25:分析以下程序：程序的输出结果是
```c++
#include <iostream>
using namespace std;
void fun(int num)
{
    cout << num << endl;
}
void fun(char ch)
{
    cout << (ch + 1) << endl;
}
int main()
{
    fun('A');
    return 0;
}
```  choices=["65"  "66"  "A"  "B"]   答案：D

题目26:以下程序中，new语句干了什么。

int** num;

num = new int* [20];  choices=["分配了长度为20的整数数组空间，并将首元素的指针返回。"  "分配了一个整数变量的空间，并将其初始化为20。"  "分配了长度为20的整数指针数组空间，并将num[0]的指针返回。"  "存在错误，编译不能通过。"]   答案：C

题目27:以下程序存在的问题是：

```
void fun()
{
 int *num1, *num2;
 num1 = new int[10];
 num2 = new int[20];
 num1[0] = 100;
 num2[0] = 300;
 num1 = num2;
 delete [] num1;
}
```  choices=["num2不能给num1赋值"  "num2最初指向的空间没有释放"  "num1最初指向的空间没有释放"  "程序没有问题"]   答案：A

题目28:下列哪一个说法是不正确的?  choices=["T是任意类型名，P是类型为` T * `的指针。`P = new T;` 的含义是:动态分配出一片大小为`sizeof(T)`字节的内存空间，并且将该字节的内存空间起始地址赋值给 P"  "T是任意类型名，P是类型为 `T *` 的指针。N是要分配的数组元素个数，可以是整型表达式。`P = new T[N];` 的含义是:动态分配出一片大小为`sizeof(T) *N`字节的内存空间，并且将该内存空间的起始地址赋值给P"  "用\"`new`\"动态分配的内存空间，不一定要用\"`delete`\"运算符进行释放"  "用\"`new`\"动态分配的数组内存空间，一定要用\"`delete [ ]`\"运算符进行释放"]   答案：C

题目29:下列选项哪一个是正确的?  choices=["char *p=new int; p='a'; delete p;"  "int *p=new int[25]; p[10]=100; delete p;"  "char *p=new char[10]; p[0]='k'; delete [ ] p;"  "char *p=new char; p[0]='k'; delete p;"]   答案：C

题目30:下面定义结构变量的语句中错误的是（）。  choices=["struct student{ int num; char name[20]; } s;"  "struct { int num; char name[20]; } s;"  "struct student{ int num; char name[20]; }; struct student s;"  "struct student{ int num; char name[20]; }; student s;"]   答案：B

题目31:如果有以下定义语句，则输出结果为（）。
```
struct {
      int x, y;
} s[2] = { { 1, 3 }, { 2, 7 } };
printf(“%d\n”, s[0].y/s[1].x );
```  choices=["0"  "1"  "2"  "3"]   答案：B

题目32:根据下面的定义，能打印出字母M的语句是（）。
```
struct person{
      char name[10];
      int age;
} c[10] = { “John”, 17, “Paul”, 19, “Mary”, 18, “Adam”, 16 };
```  choices=["printf(“%c”   c[3].name);"  "printf(“%c”   c[3].name[1]);"  "printf(“%c”   c[2].name[0]);"  "printf(“%c”   c[2].name[1]);"]   答案：C

题目33:设有以下说明语句：
<pre>
struct stu
{
  int a;
  float b;
}stutype;
</pre>  则下面的叙述不正确的是：  choices=["struct是结构体类型的关键字"  "struct stu是用户定义的结构体类型"  "stutype是用户定义的结构体类型名"  "a和b都是结构体成员名"]   答案：C

题目34:设有如下定义，则错误的输入语句是（   ）。
```
struct  ss{ 
  char  name[10];
  int age;  
  char sex;
} std[3], *p = std;
```  choices=["scanf(\"%d\"   &(*p).age);"  "scanf(\"%d\"   p->&age);"  "scanf(\"%c\"   &std[0].sex);"  "scanf(\"%c\"   &(p->sex));"]   答案：B

题目35:有关类和对象的说法下列不正确的有（ ）。  choices=["对象是类的一个实例"  "任何一个对象只能属于一个具体的类"  "一个类只能有一个对象"  "类与对象和关系与数据类型和变量的关系相似"]   答案：C

题目36:在面向对象系统中，对象是基本的运行时实体，它 _____  。  choices=["只能包括数据(属性)"  "只能包括操作(行为)"  "把属性和行为封装为一个整体"  "必须具有显式定义的对象名"]   答案：C

题目37:类的实例化是指（   ）。  choices=["定义类"  "定义对象"  "调用类的成员函数"  "访问对象的数据成员"]   答案：B

题目38:已知类A中的一个成员函数说明为void fun(A &a);，则A &a的含义是（ ）  choices=["将a的地址值赋给变量fun"  "指向类A的指针为a"  "a是类A的对象引用，用来做函数fun()的形参"  "变量A与a按位相与运算后作为函数fun()的参数"]   答案：C

题目39:以下对类A的定义,哪个是正确的?  choices=["`class A{\n\tprivate:int v;\n\tpublic:void fun(){}\n}`"  "`class A{\n\tint v;\n\tA * next;\n\tvoid fun(){}\n};`"  "`class A{\n\tint v;\npublic:\n\tvoid fun();\n};\nA::void fun(){}`"  "`class A{\n\tint v;\npublic:\n\tA next;\n\tvoid fun(){}\n};`"]   答案：C

题目40:下列对重载函数的描述中，（ ）是错误的。  choices=["重载函数中不允许使用默认参数"  "重载函数中编译根据参数表进行选择"  "不要使用重载函数来描述毫无相干的函数"  "构造函数重载将会给初始化带来多种方式"]   答案：A

题目41:在下列关键字中,用以说明类中公有成员的是（ ）。  choices=["public"  "private"  "protected"  "friend"]   答案：A

题目42:在下面类声明中，关于生成对象不正确的是（ ）。
class point
{ public:
         int x;
         int y;
         point(int a,int b)   {x=a;y=b;}
};  choices=["point p(10  2);"  "point *p=new    point(1  2);"  "point *p=new point[2];"  "point *p[2]={new point(1  2)   new  point(3  4)};"]   答案：C

题目43: 如果类定义中没有使用 private、protected、或public 关键字，则所有成员（ ）  choices=["都是 public 成员"  "都是 proctected 成员"  "都是 private 成员"  "不一定"]   答案：A

题目44:设类AA已定义，假设以下语句全部合法，哪些语句会触发调用构造函数（  ）。

```
AA a; //1
AA b(12, 10); //2
AA c(b); //3
a.SetX(32); //4
```  choices=["1 和 2"  "1、2 和 3"  "全班"  "1"]   答案：B

题目45:下面程序的运行结果为
```
#include<iostream.h>
class A
{
public:
   A（）{cout<<"1";}
   ~A（）{cout<<"2";}
};
class B:public A
{
public:
     B（）{cout<<"3";}
     ~B（）{cout<<"4";}
};
void main（）
{  B b; }
```  choices=["1234"  "1324"  "1342"  "3142"]   答案：C

题目46:下面程序的运行结果为
```
#include<iostream.h>
class A
{
  int num;
public:
  A（int i）{num=i;}
  A（A &a）{num=a.num++;}
  void print（）{cout<<num;}
};
void main（）
{
  A a （1）,b（a）;
  a.print（）;
  b.print（）;
}
```  choices=["11"  "12"  "21"  "22"]   答案：B

题目47:类的析构函数是在什么时候调用的？  choices=["类创建时"  "创建对象时"  "删除对象时"  "不自动调用"]   答案：C

题目48:下面对于析构函数的描述中，正确的是（      ）  choices=["析构函数是系统的内置函。"  "析构函数名称为在类名或者构造函数名之前加一个“~”"  "析构函数，既然是函数，同样可以带有参数"  "只有用delete关键字删除对象时，系统才会自动调用析构函数。"]   答案：B

题目49:假设A是一个类的名字，下面程序片段，类A会调用析构函数几次？
int main(){
A `* p = new A[2];`
A `* p2 = new A;`
A a;
delete [] p;
}  choices=["1"  "2"  "3"  "4"]   答案：B

题目50:下列关于对象数组的描述中，错误的是（）  choices=["对象数组的下标是从零开始的"  "对象数组的数组名是一个常量指针"  "对象数组的每个元素是同一个类的对象"  "对象数组只能赋初值，而不能被赋值"]   答案：D

题目51:以下程序段,哪个是不正确的?  choices=["`int main()\n{\n\tclass A { int v; };\n\tA a; a.v = 3; return 0;\n}`"  "`int main()\n{\n\tclass A { public:int v;A *p; };\n\tA a; a.p=&a; return 0;\n}`"  "`int main()\n{\n\tclass A { public:int v; };\n\tA *p=new A;\n\tp->v=4; delete p;\n\treturn 0;\n}`"  "`int main()\n{\n\tclass A { public:int v; A *p; };\n\tA a;\n\ta.p=new A;\n\tdelete a.p;\n\treturn 0;\n}`"]   答案：B

题目52:一个类的私有成员  choices=["只能被该类的成员函数访问"  "只能被该类的成员函数和友元函数访问"  "只能被该类的成员函数、友元函数和派生类访问"  "以上答案都不对"]   答案：B

题目53:在公有继承的情况下，在派生类中能够访问的基类成员包括  choices=["公有成员"  "保护成员"  "公有成员、保护成员和私有成员"  "公有成员和保护成员"]   答案：D

题目54:派生类继承基类的方式有  choices=["public"  "private"  "protected"  "以上都对"]   答案：D

题目55:下面关于类的继承与派生的程序，其输出结果是
```C++
#include<iostream>
using namespace std;
class A
{
public:
    A(){cout<<"A";}
};
class B
{
public:
    B(){cout<<"B";}
};
class C:public A
{
    B b;
public:
    C(){cout<<"C";}
};
int main(){
    C obj;
    return 0;
}
```  choices=["CBA"  "BAC"  "ACB"  "ABC"]   答案：D

题目56:若obj是类D的对象，则下列语句中正确的是
```C++
class B{
private: void fun1(){ }
protected: void fun2(){ }
public: void fun3(){ }
};
class D : public B {
protected: void fun4(){ }
};
```  choices=["obj.fun1();"  "obj.fun2();"  "obj.fun4();"  "obj.fun3();"]   答案：D

题目57:下面，有关派生类构造函数的论述，错误的是（    ）  choices=["派生类构造函数，需要为基类构造函数传递参数；"  "派生类构造函数，需要为内嵌子对象的初始化传递参数；"  "派生类构造函数，仅对派生类的新增数据成员初始化传递参数；"  "派生类构造函数，可以采用初始化列表的方式为常成员函数传递初始化参数。"]   答案：C

题目58:创建一个类A；然后通过继承的方式由类A派生出类B，则下列关于派生中构造函数和析构函数的描述中正确的是：  choices=["类B继承了类A的构造函数"  "类B继承了类A的析构函数"  "创建类B的对象时，先执行类A的构造函数，然后执行类B的构造函数"  "撤销类B的对象时，先执行类A的析构函数，然后执行类B的析构函数"]   答案：C

题目59:如果多种事物，有一些共同的特点又各自不同的特点，如何编写类来代表这些事物比较合适？  choices=["为每种事物独立编写一个类，各之间互相无关"  "写一个类代表其中一种事物，代表其他事物的类都从这个类派生出来"  "概括所有事物的共同特点，写一个基类。然后为每种事物写一个类，都从基派生而来"  "一共就写一个类，包含所有事物的所有特点，然后用一个成员变量作为标记，来区分不同种类的事物"]   答案：C

题目60:以下说法正确的是？  choices=["派生类可以和基类有同名成员函数，但是不能有同名成员变量"  "派生类的成员函数中，可以调用基类的同名同参数表的成员函数"  "派生类和基类的同名成员函数必须参数表不同，否则就是重复定义"  "派生类和基类的同名成员变量存放在相同存储空间"]   答案：B

题目61:若派生类的成员函数不能直接访问基类中的某个成员，则该成员一定是基类中的（）。  choices=["私有成员"  "公有成员"  "保护成员"  "私有成员或保护成员"]   答案：A

题目62:在创建派生类对象时，构造函数的执行顺序是(    )。  choices=["对象成员构造函数、基类构造函数、派生类本身的构造函数"  "基类构造函数、对象成员构造函数、派生类本身的构造函数"  "基类构造函数、派生类本身的构造函数、对象成员构造函数"  "派生类本身的构造函数、基类构造函数、对象成员构造函数"]   答案：B

题目63:下面程序的输出结果是
```C++
#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        ++count;
    }
    ~MyClass() {
        --count;
    }
    static int getCount() {
        return count;
    }
private:
    static int count;
};
int MyClass::count = 0;
int main() {
    MyClass obj;
    cout << obj.getCount();
    MyClass obj2;
    cout << MyClass::getCount();
    cout << obj2.getCount();
    return 0;
}
```  choices=["121"  "232"  "221"  "122"]   答案：没有做该题

题目64:对类的数据成员或内嵌对象进行初始化时，不属于必须采用构造函数的初始化列表方式进行初始化的是（      ）  choices=["内嵌对象"  "常数据成员"  "静态数据成员"  "对虚基类的初始化"]   答案：没有做该题

题目65:关于静态数据成员描述正确的是( ).  choices=["静态成员的初始化是在构造函数中完成的"  "静态成员被所有本类对象所共享"  "静态成员必须通过类名调用"  "静态成员必须通过对象名调用"]   答案：没有做该题

题目66:子对象的初始化是通过( )来实现的.  choices=["构造函数"  "成员函数"  "构造函数的成员初始化列表"  "友元函数"]   答案：没有做该题

题目67:以下说法正确的是？  choices=["在静态成员函数中可以调用同类的其他任何成员函数"  "const成员函数不能作用于非 const 对象"  "在静态成员函数中不能使用 this 指针"  "静态成员变量每个对象有各自的一份"]   答案：没有做该题

题目68:关于this指针的描述中，错误的是（）。  choices=["this指针是指向对象的指针"  "this指针是在使用对象引用成员函数时，系统自动生成的"  "this指针可以在程序中显示使用"  "this指针是指向成员函数的指针"]   答案：没有做该题

题目69:在下面有关静态成员函数的描述中，正确的是（）。  choices=["在建立对象前，就可以为静态数据成员赋值"  "静态成员函数在类外定义时要用static前缀"  "静态成员函数只能在类外定义"  "在静态成员函数中可以使用this指针"]   答案：没有做该题

题目70:下列选项中，静态成员函数不能直接访问的是（）。  choices=["静态数据成员"  "静态成员函数"  "类以外的函数和数据"  "非静态数据成员"]   答案：没有做该题

题目71:下列描述中，（ ）是抽象类的特性。  choices=["可以说明虚函数"  "可以进行构造函数重载"  "可以定义友元函数"  "不能定义该类对象"]   答案：没有做该题

题目72:如果在基类中将show声明为不带返回值的纯虚函数，正确的写法是（）。  choices=["virtual show()=0;"  "virtual void show();"  "virtual void show()=0;"  "void show()=0 virtual;"]   答案：没有做该题

题目73:若一个类中含有纯虚函数，则该类称为。  choices=["基类"  "纯基类"  "抽象类"  "派生类"]   答案：没有做该题

题目74:假设 Aclass为抽象类，下列正确的说明语句是。  choices=["Aclass fun( int ) ;"  "Aclass * p ;"  "int fun( Aclass ) ;"  "Aclass Obj ;"]   答案：没有做该题

题目75:可以用p.a的形式访问派生类对象p的基类成员a, 其中a是  choices=["私有继承的公有成员"  "公有继承的私有成员"  "公有继承的保护成员"  "公有继承的公有成员"]   答案：没有做该题

题目76:关于虚函数的描述中，（ ）是正确的。  choices=["虚函数是一个static 类型的成员函数"  "虚函数是一个非成员函数"  "基类中说明了虚函数后，派生类中与其对应的函数可不必说明为虚函数"  "派生类的虚函数与基类的虚函数具有不同的参数个数和类型"]   答案：没有做该题

题目77:设有如下代码段:

```
class A {
public:
    void func1() {
        cout << "A1" << endl;
    }
    virtual void func2() {
        cout << "A2" << endl;
    }
};
class B : public A {
public:
    void func1() {
        cout << "B1" << endl;
    }
    void func2() {
        cout << "B2" << endl;
    }
};

int main() {
    A *a = new B;
    a->func1();
    a->func2();
}
```
则输出结果为:  choices=["A1 A2"  "A1 B2"  "B1 A2"  "B1 B2"]   答案：没有做该题

题目78:关于函数模板，描述错误的是。  choices=["函数模板必须由程序员实例化为可执行的函数模板"  "函数模板的实例化由编译器实现"  "一个类定义中，只要有一个函数模板，则这个类是类模板"  "类模板的成员函数都是函数模板，类模板实例化后，成员函数也随之实例化"]   答案：没有做该题

题目79:下列的模板说明中，正确的是。  choices=["template < typename T1   T2 >"  "template < class T1   T2 >"  "template < typename T1   typename T2 >"  "template ( typedef T1   typedef T2 )"]   答案：没有做该题

题目80:有函数模板定义如下：
```c++
template<typename T>
Max(T a, T b, T& c){c = a + b ;}
```
则下列调用中正确的是\_\_\_\_。  choices=["int x   y; char z; Max(x   y   z);"  "double x   y  z; Max(x   y   z);"  "int x   y; float z; Max(x   y   z);"  "float x   double y   z; Max(x   y   z);"]   答案：没有做该题

题目81:类模板的模板参数\_\_\_\_。  choices=["只可作为数据成员的类型"  "可作为成员函数的返回类型"  "可作为成员函数的参数类型"  "以上三者皆可"]   答案：没有做该题

题目82:类模板的使用实际上是将类模板实例化成一个\_\_\_\_。  choices=["函数"  "对象"  "类"  "抽象类"]   答案：没有做该题

题目83:下列关于模板的说法中，错误的是\_\_\_\_。  choices=["用模板定义一个对象时，不能省略参数"  "类模板只能有虚拟参数类型"  "类模板的成员函数都是模板函数"  "类模板在编绎中不会生成任何代码"]   答案：没有做该题

题目84:一个\_\_\_\_允许用户为类定义一种模式，使得类中的某些数据成员及某些成员函数的返回值能取任意类型。  choices=["函数模板"  "模板函数"  "类模板"  "模板类"]   答案：没有做该题

题目85:若有下面的语句：
```C++
vector<int> v;
for (int i = 0; i < 4; i++)
    v.push_back(i + 1);
cout << v.size() << endl;
```
则执行后程序的输出结果是  choices=["1"  "2"  "3"  "4"]   答案：没有做该题

题目86:设有定义 `vector<string> v(10); `
执行下列哪条语句时会调用构造函数?  choices=["`v[0] += \"abc\"; `"  "`v[0] = \"2018\";`"  "`v.push_back(\"ZUCC\");`"  "`cout << (v[1] == \"def\"); `"]   答案：没有做该题

题目87:设有如下代码段:
```
std::map<char *, int> m;
const int MAX_SIZE = 100;
int main() {
    char str[MAX_SIZE];
    for (int i = 0; i < 10; i++) {
        std::cin >> str;
        m[str] = i;
    }
    std::cout << m.size() << std::endl;
}

```
读入10个字符串，则输出的 `m.size()` 为  choices=["0"  "1"  "10"]   答案：没有做该题

题目88:下列关于STL的描述中，错误的是。  choices=["STL的内容从广义上讲分为容器、迭代器、算法三个主要部分"  "STL的一个基本理念就是将数据和操作分离"  "STL中的所有组件都由模板构成，其元素可以是任意类型"  "STL的容器、迭代器、算法是三个完全独立的部分，彼此也无任何联系"]   答案：没有做该题

题目89:下列创建vector容器对象的方法中，错误的是。  choices=["`vector<int> v(10);`"  "`vector<int> v(10   1);`"  "`vector<int> v{10   1};`"  "`vector<int> v = (10   1);`"]   答案：没有做该题

题目90:若有下面的语句：
```C++
string s="Hello";
s.append("123");
cout << s.at(5) << endl;
```
则执行后程序的输出结果是  choices=["o"  "1"  "2"  "3"]   答案：没有做该题

题目91:关于用string定义字符串，下列选项中错误的是\_\_\_\_。  choices=["string s; s = \"hello C++\";"  "string s = \"hello C++\";"  "string s(\"hello C++\");"  "string s[\"hello C++\"];"]   答案：没有做该题

题目92:使用C++标准string类定义一个字符串，需要包含的头文件\_\_\_\_。  choices=["string.h"  "string"  "cstring"  "stdlib.h"]   答案：没有做该题

题目93:以下初始化语句正确的是（      ）。  choices=["string * p=\"this\" ;"  "string  p[ ]=\"that\";"  "string p[ ]={\"What\"  \"this\"};"  "char * p={ \"Please\" } ;"]   答案：没有做该题

题目94:下面是关于ios 类的叙述，正确的是（ ）。  choices=["它是istream 类和ostream 类的虚基类"  "它只是istream 类的虚基类"  "它只是ostream 类的虚基类"  "它是iostrearm 类的虚基类"]   答案：没有做该题

题目95:当使用ifstream 流类定义一个流对象并打开一个磁盘文件时，文件的隐含打开方式为（ ）。  choices=["ios::in"  "ios::out"  "ios::in|ios::out"  "ios::binary"]   答案：没有做该题

题目96:下列函数中，（ ）是对文件进行写操作的。  choices=["get"  "read"  "seekg"  "put"]   答案：没有做该题

题目97:在C++中，打开一个文件，就是将整个文件与一个（ ）建立关联，关闭一个文件，就是取消这种关联。  choices=["类"  "流"  "对象"  "结构"]   答案：没有做该题

题目98:对磁盘文件进行操作时，以\_\_\_\_模式打开的文件，可实现创建一个可以写入的、新的空文件；如果该文件已经存在，则先删除以前的内容，再写入新数据。  choices=["ios::in"  "ios::app"  "ios::out"  "ios::binary"]   答案：没有做该题

题目99:使用“myFile.open("Sales.dat",ios::app);”语句打开文件Sales.date后，则（）。  choices=["该文件只能用于输出"  "该文件只能用于输入"  "该文件既可以用于输出，也可以用于输入"  "若该文件存在，则清除该文件的内容"]   答案：没有做该题


------------------------------------------

题目1:
题目：测试c++ 1 分难度：7-1
正文：
倒序输出从控制台输入的n个整数

### 输入格式:

第一行输入一个数n，代表行数  
依次输入n个整数

### 输出格式:

将n个整数倒序输出

### 输入样例:
```in
3
1 2 3
```

### 输出样例:
```out
321
```

答案：
#include<iostream>
using namespace std;
int main(void){
    int n;
    int i=0;
    cin>>n;
    int c[n];
    while(i<n){

        cin>>c[i];
        i++;
    }
    while((--n)>=0){
        cout<<c[n];
    }
    return 0;
}

------------------------


题目2:
题目：计算三角形面积 10 分难度：7-2
正文：
从键盘输入三个数，用来表示三角形的三条边长。如果能构成三角形就输出三角形的面积，否则就输出No。

### 输入格式:

请在这里写输入三角形的三条边长，例如：
3.1   4.2   5.3
### 输出格式:
请在这里输出三角形的面积，例如：

6.50661
### 输入样例:
```in
3.0 4.0 5.0
```

### 输出样例:
```out
6
```

答案：
#include<iostream>
#include<math.h>
using namespace std;
double max(double a,double b,double c){
	double temp=a>b?a:b;
	double max1=temp>c?temp:c;
	return max1;
}
double min(double a,double b,double c){
	double temp=a<b?a:b;
	double min1=temp<c?temp:c;
	return min1;
}
double findtemp(double *a,double max,double min){
	for(double *i=a;i<a+3;i++){
		if(max!=*i&&min!=*i){
			return *i;
		}
	} 
}
int main(void){
    double a[3];
    for(int i=0;i<3;i++){
    	cin>>a[i];
	}
    double max1=max(a[0],a[1],a[2]);
    double min1=min(a[0],a[1],a[2]);
    double temp=findtemp(a,max1,min1);
    if((min1+temp)>max1&&(max1-temp)<min1){
    	double p=(max1+min1+temp)/2;
    	double s=p*(p-a[0])*(p-a[1])*(p-a[2]);
    	s=sqrt(s);
    	cout<<s;
	}else{
		cout<<"No"; 
	} 
}

------------------------


题目3:
题目：问候 10 分难度：7-3
正文：
输出问候：Hello!What's your name?
从键盘输入名字，然后输出欢迎信息。

### 输入格式:

请在这里写输入姓名。例如：
GaiFuShuai

### 输出格式:

请在这里描述输出，例如：

Hello!What's your name?

GaiFuShuai,Welcome to learn OOP using C++!

### 输入样例:
```in
BaiFuMei
```

### 输出样例:
```out
Hello!What's your name?
BaiFuMei,Welcome to learn OOP using C++!
```

答案：
#include<iostream>
#include<math.h>
using namespace std;
int main(void){
 	cout<<"Hello!What's your name?\n";
 	string name;
 	cin>>name;
 	cout<<name<<",Welcome to learn OOP using C++!";
}

------------------------


题目4:
题目：求交错序列前N项和 15 分难度：7-4
正文：
本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

### 输入格式:

输入在一行中给出一个正整数N。

### 输出格式:

在一行中输出部分和的值，结果保留三位小数。

### 输入样例:
```in
5
```

### 输出样例:
```out
0.917
```

答案：
#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
double findres(int n){
	int i=1;
	bool istrue=false;
	double res=1;
	while(i<n){
		i++;
		if(istrue){
			res+=( (double)i / (i+i-1) );
			istrue=false;
		}else{
			res-=( (double)i / (i+i-1) );
			istrue=true;
		}
		
		
	}
	return res;
}
int main(void){
 	int n;
 	cin>>n;
 	double res=findres(n);
 	cout<<setiosflags(ios::fixed)<<setprecision(3);
	 cout<<res;
}

------------------------


题目5:
题目：特殊a串数列求和 20 分难度：7-5
正文：
给定两个均不超过9的正整数$$a$$和$$n$$，要求编写程序求$$a+aa+aaa++\cdots +aa\cdots a$$（$$n$$个$$a$$）之和。

### 输入格式：

输入在一行中给出不超过9的正整数$$a$$和$$n$$。

### 输出格式：

在一行中按照“s = 对应的和”的格式输出。

### 输入样例：
```in
2 3
```

### 输出样例：
```out
s = 246
```

答案：
#include<iostream>
#include<math.h>
using namespace std;
int main(void){
	unsigned a,n;
	cin>>a>>n;
	if(a>9||n>9){
		return 0;
	}
	int i=0;
	int res=0;
    int temp=0;
	while(i<n){
        i++;
        temp=temp*10+a;
        res+=temp;
	}
	cout<<"s = "<<res;
}

------------------------


题目6:
题目：统计一行文本的单词个数 15 分难度：7-6
正文：
本题目要求编写程序统计一行字符中单词的个数。所谓“单词”是指连续不含空格的字符串，各单词之间用空格分隔，空格数可以是多个。

### 输入格式:

输入给出一行字符。 

### 输出格式:

在一行中输出单词个数。 

### 输入样例:
```in
Let's go to room 209.
```

### 输出样例:
```out
5
```

答案：
#include<iostream>
using namespace std;
int main(void){
	char ch;
	int num=0;
	int size=0;
	bool is=true;
	while(1){
		scanf("%c",&ch);
		if(ch=='\n'){
			break;
		}else if(ch!=' '){
			size++;
			is=true;
			
		}else if(ch==' '){
			if(size>0){
				num++;
			is=false;
			size=0;	
			}
		
		}
		
	}
	if(size>0){
			num++;
		}
	//cout<<num;
	printf("%d",num);
}

------------------------


题目7:
题目：鸿鸿哥分钱 15 分难度：7-7
正文：
鸿鸿哥最近和一个小伙伴做了个小项目，赚了一个亿，两人一起高高兴兴开了庆功宴之后，鸿鸿哥就准备分一下钱了。鸿鸿哥想了想，生意不是做一天的，所以一个亿之中的大部分资金还是要继续投资，不能只是做一发就走，这个想法也得到了小伙伴的认可。而余下来的钱不知道具体数值，只知道是x万~y万之间（因为某种神秘力量余下的钱一定是偶数万）。而鸿鸿哥原本也是土豪，这点小钱也看不上眼，于是他想分多一点给小伙伴，他决定把钱分成两个素数（程序员喜欢各种特别的数字），自己拿小的那份。那么问题来了，鸿鸿哥和小伙伴个各拿多少万呢？鸿鸿哥想知道所有可能的分法。

### 输入格式:

输入两个整数x，y（6<=x，x<=y，n<=100），一组输入。

### 输出格式:

输出x和y之间所有偶数表示成的两个素数之和。

### 输入样例:

在这里给出一组输入。例如：

```in
8 10
```

### 输出样例:

在这里给出相应的输出。例如：

```out
8=3+5 
10=3+7
```


答案：
#include<iostream>
#include<cmath>
using namespace std;
inline bool isnum(int num){
	if(num<2){
		return false;
	}
	for(int i=2;i<num;i++){
		if(num%i==0){
		
			return false;
			
		}
	}
	return true;
}
int main(void){
	int x,y;
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if(i%2==0){
			for(int k=2;k<i;k++){
				if(isnum(k)&&isnum(i-k)){
					cout<<i<<"="<<k<<"+"<<i-k<<endl;
					break;
				}
			}
		}
	}
	return 0;
}

------------------------


题目8:
题目：估值一亿的AI核心代码 20 分难度：7-8
正文：

![AI.jpg](~/3e7829fa-ed75-4890-acca-54a00fbac9d3.jpg)


以上图片来自新浪微博。

本题要求你实现一个稍微更值钱一点的 AI 英文问答程序，规则是：

- 无论用户说什么，首先把对方说的话在一行中原样打印出来；
- 消除原文中多余空格：把相邻单词间的多个空格换成 1 个空格，把行首尾的空格全部删掉，把标点符号前面的空格删掉；
- 把原文中所有大写英文字母变成小写，除了 `I`；
- 把原文中所有独立的 `can you`、`could you` 对应地换成 `I can`、`I could`—— 这里“独立”是指被空格或标点符号分隔开的单词；
- 把原文中所有独立的 `I` 和 `me` 换成 `you`；
- 把原文中所有的问号 `?` 换成惊叹号 `!`；
- 在一行中输出替换后的句子作为 AI 的回答。

### 输入格式：

输入首先在第一行给出不超过 10 的正整数 N，随后 N 行，每行给出一句不超过 1000 个字符的、以回车结尾的用户的对话，对话为非空字符串，仅包括字母、数字、空格、可见的半角标点符号。

### 输出格式：

按题面要求输出，每个 AI 的回答前要加上 `AI:` 和一个空格。

### 输入样例：
```in
6
Hello ?
 Good to chat   with you
can   you speak Chinese?
Really?
Could you show me 5
What Is this prime? I,don 't know
```

### 输出样例：
```out
Hello ?
AI: hello!
 Good to chat   with you
AI: good to chat with you
can   you speak Chinese?
AI: I can speak chinese!
Really?
AI: really!
Could you show me 5
AI: I could show you 5
What Is this prime? I,don 't know
AI: what Is this prime! you,don't know
```


答案：
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	getchar();  // 吸收换行 
	string s;
	while(n--){
		string str[1005];
		int cnt=0;
		getline(cin,s);
		cout << s << endl << "AI:";
		for(int i=0;i<s.size();++i){
			if(isalnum(s[i])){
				if(s[i]!='I')
					s[i]=tolower(s[i]);
			}
			else{
				s.insert(i," ");    //对每个非字母和数字之前加空格
				i++;
			}
			if(s[i]=='?')
				s[i]='!';
		}
		stringstream ss(s);        //主要依靠这个函数来取消单词之前的空格
		while(ss >> s){
			str[cnt++]=s;
		}
		if(!isalnum(str[0][0]))     		// 如果 第一个单词的第一个位置就是标点  那么要输出一个空格，题中要求 每个 AI 的回答前要加上 AI: 和一个空格。
			cout << " ";
		for(int i=0;i<cnt;++i){
			if(!isalnum(str[i][0])){         // 判断第一个字符是否是 标点，标点前面不要输出空格
				cout << str[i];
			}
			else if((str[i]=="can" || str[i]=="could") && str[i+1]=="you"){ // &&优先级大于|| ,所以要加括号 
				cout << " I " << str[i];
				i++;
			}
			else if(str[i]=="I" || str[i]=="me"){
				cout << " you";
			}
			else
				cout << " " << str[i];
		}
		cout << endl;
	}
} 


------------------------


题目9:
题目：实数排序 20 分难度：7-9
正文：
本题要求编写程序，输入n个实数，使用指针引用的方式将它们按从大到小的顺序排列。

### 输入格式:

输入第一行给出一个正整数n（2≤n≤10）,输入第二行给出n个实数，其间以空格分隔。

### 输出格式:

输出从大到小排好序的n个数（保留2位小数），每个数之间空一格，行末没有空格。

### 输入样例:

在这里给出一组输入。例如：

```in
5
3.2 5.4 6.12 2.51 4.23
```

### 输出样例:

在这里给出相应的输出。例如：

```out
6.12 5.40 4.23 3.20 2.51
```


答案：
#include<iostream>
#include<iomanip>
using namespace std;
void sort(double *p,int num){//降序排序 
	//int num=sizeof(p)/sizeof(int);
	//cout<<num<<endl;
	for(double *i=p;i<p+(num-1);i++){
		for(double *j=i;j<p+num;j++){
			if(*j>*i){
				
			double t=*i;
			*i=*j;
			*j=t;
				
			}
		}
	}
}
int main(void){
    int n;
    cin>>n;
    double num[n];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    sort(num,n);
    for(int i=0;i<n-1;i++){
        cout<<fixed<<setprecision(2)<<num[i]<<" ";
    }
    cout<<num[n-1];


    return 0;
}

------------------------


题目10:
题目：字符串的连接 15 分难度：7-10
正文：
本题要求编写程序，使用指针方式实现两个字符串的连接(不能使用strcat函数），并将连接后的字符串输出。

### 输入格式:

输入一行以回车结束的非空字符串（不超过40个字符），再输入一行以回车结束的非空字符串（不超过40个字符）。

### 输出格式:

一行输出俩字符串连接后新的字符串。

### 输入样例:



```in
Beijing_
China
```

### 输出样例:

```out
Beijing_China
```


答案：
#include<iostream>
#include<string>
using namespace std;
int main(void){
   string a,b;
   getline(cin,a);
   getline(cin,b);
   char c[100];
   int i=0,j=0;
   while(a[i]!='\0'){
       c[i]=a[i];
       i++;
   }
    while(b[j]!='\0'){
        c[i+j]=b[j];
        j++;
    }
    //最后需要加上  \0
    c[i+j]='\0';
    puts(c);
    return 0;
}

------------------------


题目11:
题目：使用函数删除字符串中的字符 10 分难度：7-11
正文：
输入一个正整数 repeat (0<repeat<10)，做 repeat 次下列运算：

输入一个字符串 str，再输入一个字符 c，将字符串 str 中出现的所有字符 c 删除。

要求定义并调用函数delchar(str,c), 它的功能是将字符串 str 中出现的所有 c 字符删除，函数形参str的类型是字符指针，形参c的类型是char，函数类型是void。

输入输出示例：括号内为说明，无需输入输出

### 输入样例:
```in
3               (repeat=3）
happy new year  (字符串"happy new year")
a               (待删除的字符'a')
bee             (字符串"bee")
e               (待删除的字符'e')
111211          (字符串"111211")
1               (待删除的字符'1')
```

### 输出样例:
```out
result: hppy new yer    (字符串"happy new year"中的字符'a'都被删除)
result: b               (字符串"bee"中的字符'e'都被删除)
result: 2               (字符串"111211"中的字符'1'都被删除)
```

答案：
#include<iostream>
#include<string.h>
using namespace std;
void delchar(char* str,char ch){
//	int len=sizeof(str)/sizeof(char);
	int len=strlen(str);
	//cout<<"len="<<len; 
	int t=0;
	for(int i=0;i<len;i++){
		if(str[i]==ch){
			//如果这个字符不是最后一个则这个字符被后面的字符覆盖，并且后面字符全部向前面移动一位
			 t=i;
			 	while(str[t+1]!='\0'){
			 		str[t]=str[t+1];
			 		t++;
				 }
			 	str[t]='\0';
			 //	len--;
			 	i--;
		}
	}
	cout<<"result: "<<str;
}
int main(void){
	int n;
	cin>>n;
	char str[100];
   // string str;
	char ch;
	getchar();
	for(int i=0;i<n;i++){
		fgets(str,100,stdin);
        //getline(cin,str);
		cin>>ch;
		getchar();
		delchar(str,ch);
	}
	return 0;
}
             


------------------------


题目12:
题目：学生的平均成绩 10 分难度：7-59
正文：
有五个学生，每个学生有3门课的成绩，从键盘输入以上数据（包括学生号，姓名，三门课成绩），其中学号和姓名都是以字符串方式存储，计算出每名学生的平均成绩，

### 输入格式:

分别在5行中输入5名学生的信息。按照学号、姓名、3门课的成绩顺序输入，学号和姓名是均不超过4个字符的字符串，字符串中不包含空格、换行符和制表符，一名学生的各个数据之间用一个空格间隔。

### 输出格式:

分别在5行中输出5名学生的信息。按照学号、姓名、3门课的平均成绩顺序输出，其中学号和姓名输出占5列列宽，平均成绩保留1位小数，输出占5列列宽。

### 输入样例:
```in
1 aa 78 45 12
2 bb 95 85 95
3 cc 75 45 65
4 dd 74 84 95
5 ee 48 49 56
```

### 输出样例:
```out
    1   aa 45.0
    2   bb 91.7
    3   cc 61.7
    4   dd 84.3
    5   ee 51.0
```

答案：
#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
    int n=5;
    double a,b,c;
    double res;
    string name;
    int class_stu;
    for(int i=0;i<n;i++){
    	cin>>class_stu;
    	cin>>name;
        cin>>a>>b>>c;
        res=(a+b+c)/3;
        cout<<setw(5)<<class_stu<<setw(5)<<name<<" ";
        cout<<fixed<<setprecision(1)<<res<<endl;
    }

    return 0;
}

------------------------


题目13:
题目：找出总分最高的学生 10 分难度：7-60
正文：
给定N个学生的基本信息，包括学号（由5个数字组成的字符串）、姓名（长度小于10的不包含空白字符的非空字符串）和3门课程的成绩（[0,100]区间内的整数），要求输出总分最高学生的姓名、学号和总分。

### 输入格式：

输入在一行中给出正整数N（$$\le$$10）。随后N行，每行给出一位学生的信息，格式为“学号 姓名 成绩1 成绩2 成绩3”，中间以空格分隔。

### 输出格式：

在一行中输出总分最高学生的姓名、学号和总分，间隔一个空格。题目保证这样的学生是唯一的。

### 输入样例：
```in
5
00001 huanglan 78 83 75
00002 wanghai 76 80 77
00003 shenqiang 87 83 76
10001 zhangfeng 92 88 78
21987 zhangmeng 80 82 75
```

### 输出样例：
```out
zhangfeng 10001 258
```

答案：
#include<iostream>
using namespace std;
int main(void){
    int n;
    cin>>n;
    string class_stru;
   string res_sut;//学号要字符串,前面的0
    string name;
    string res_name;
    int a,b,c,res;
    res=0;
    cin>>class_stru>>name>>a>>b>>c;
    res=(a+b+c);
    res_sut=class_stru;
    res_name=name;
    for(int i=0;i<n-1;i++){
        cin>>class_stru>>name>>a>>b>>c;
        if((a+b+c)>res){
            res=(a+b+c);
            res_name=name;
            res_sut=class_stru;
        }
    }
    cout<<res_name<<" "<<res_sut<<" "<<res;
    return 0;
}

------------------------


题目14:
题目：一帮一 10 分难度：7-61
正文：
“一帮一学习小组”是中小学中常见的学习组织方式，老师把学习成绩靠前的学生跟学习成绩靠后的学生排在一组。本题就请你编写程序帮助老师自动完成这个分配工作，即在得到全班学生的排名后，在当前尚未分组的学生中，将名次最靠前的学生与名次最靠后的**异性**学生分为一组。

### 输入格式：

输入第一行给出正偶数`N`（$$\le$$50），即全班学生的人数。此后`N`行，按照名次从高到低的顺序给出每个学生的性别（0代表女生，1代表男生）和姓名（不超过8个英文字母的非空字符串），其间以1个空格分隔。这里保证本班男女比例是1:1，并且没有并列名次。

### 输出格式：

每行输出一组两个学生的姓名，其间以1个空格分隔。名次高的学生在前，名次低的学生在后。小组的输出顺序按照前面学生的名次从高到低排列。

### 输入样例：
```in
8
0 Amy
1 Tom
1 Bill
0 Cindy
0 Maya
1 John
1 Jack
0 Linda
```

### 输出样例：
```out
Amy Jack
Tom Linda
Bill Maya
Cindy John
```

答案：
#include <stdio.h>
int main()
{
int N,a[50],i;
char b[50][100];
int j;
scanf("%d",&N);
for(i=0; i<N; i++)
{
scanf("%d",&a[i]);
scanf("%s",&b[i]);
}
for(i=0; i<N; i++)
{
for(j=N-1; j>=0; j--)
{
if(a[i]!=a[j]&&a[i]<=1&&a[j]<=1)
{
a[i]=2;///等于2是因为男生是1，女生是0.等于2再搭配上面的条件就可以把已经比较了的排除
a[j]=2;
printf("%s %s\n",b[i],b[j]);
break;
}
}
}
return 0;
}

------------------------


题目15:
题目：领装备 15 分难度：7-62
正文：
鸿鸿哥最近在一个游戏公司做兼职，负责后台的数据管理。该公司的游戏最近正值2周年活动，为了感谢玩家们长久以来的支持，公司总裁决定给予玩家们感恩大回馈——活动期间只要登录游戏，就能获得稀有装备（稀有装备也分星级，星级越高越好）。其具体实施方法如下：每个玩家凭借自己的玩家号领取一个号码牌，然后用号码牌进行兑换稀有装备。注意：总裁的恶趣味来了，领取的号码牌并非越大越好，号码大并非就代表装备的星级高，星级是随机生成的。而鸿鸿哥任务是根据生成的数据来发放装备给玩家。你能编程帮助鸿鸿哥解决这个问题吗？

### 输入格式:
输入第一行给出一个正整数?N（≤1000），代表参与游戏的玩家个数。
随后?N?行，每行给出一个玩家的信息：玩家号  号码牌  装备星级。其中玩家号由 14 位数字组成，号码牌从 1 到?N?编号。输入保证每个玩家号都不同。
玩家信息之后，给出一个正整数?M（≤N），随后一行中给出?M?个待查询的玩家号，以空格分隔。

### 输出格式:

对应每个需要查询的号码牌，在一行中输出对应的玩家号和装备星级，中间用 1 个空格分隔。

### 输入样例:

在这里给出一组输入。例如：

```in
4
10120150912233 2 4
10120150912119 4 1
10120150912126 1 3
10120150912002 3 2
2
3 4
```

### 输出样例:

在这里给出相应的输出。例如：

```out
10120150912002 2
10120150912119 1
```


答案：
#include<iostream>
using namespace std; 
int  main(void){
    int n;
    cin>>n;
    string *class_hao=new string[n];
    int *pai=new int[n];
    int *xing=new int[n];
    for(int i=0;i<n;i++){
        cin>>class_hao[i]>>pai[i]>>xing[i];

    }
    int num;
    cin>>num;
    int *c_xing=new int[num];
    for(int i=0;i<num;i++){
        cin>>c_xing[i];
    }
    for(int j=0;j<num;j++){
         for(int i=0;i<n;i++){
            if(pai[i]==c_xing[j]){
                cout<<class_hao[i]<<" "<<xing[i]<<endl;
                break;
            }
        }
    }
   

    return 0;
}

------------------------


题目16:
题目：查找单价最高和最低的书籍 10 分难度：7-65
正文：
编写程序，从键盘输入 n (n<10)本书的名称和定价并存入结构数组中，查找并输出其中定价最高和最低的书的名称和定价。

输出格式语句：

 printf("highest price: %.1f, %s\n", );

 printf("lowest price: %.1f, %s\n",);

输入输出示例：括号内为说明，无需输入输出

### 输入样例:
```in
3	(n=3)
Programming in C
21.5
Programming in VB
18.5
Programming in Delphi
25
```

### 输出样例:
```out
highest price: 25.0, Programming in Delphi 
lowest price: 18.5, Programming in VB 
```

答案：
#include<iostream>
#include<iomanip>
#include <string.h>
using namespace std;
struct Book
{
	double price;
	char name[31];
}book;

int main()
{
	int n;
	cin >> n;
	struct Book book[100];

	int i, max = 0, min = 0;
	for (i = 0; i<n; i++)
	{
		getchar();
		cin.getline(book[i].name, 31);
		cin >> book[i].price;
		if (book[i].price>book[max].price)
		{
			max = i;
		}
		if (book[i].price<book[min].price)
		{
			min = i;
		}
	}
	cout << "highest price: " << fixed << setprecision(1) << book[max].price << ", " << book[max].name << endl;
	cout << "lowest price: " << fixed << setprecision(1) << book[min].price << ", " << book[min].name;
	getchar();
	return 0;
}


------------------------


题目17:
题目：立方体类的实现 30 分难度：7-17
正文：
立方体类Box的实现，完成计算体积、计算表面积、输出结果等功能。其中给定的主函数为：

    int  main( ){
        float ab;
        cin>>ab;
        Box  obj;
        obj.seta( ab );
        obj.getvolume( );
        obj.getarea( );
        obj.disp( );
        return 0;
    }
### 输入格式:

立方体的边长，可以是float类型的数据。

### 输出格式:

立方体的体积和表面积，中间用一个空格隔开，末尾换行。

### 输入样例:
```in
3
```

### 输出样例:
```out
27 54
```

答案：
#include<iostream>
using namespace std;
class Box{
	private:
		float a;
		double volume;
		double area;
	public:
		void seta(float ab){
			a=ab;
		}
		void getvolume( ){
			volume=a*a*a;
		}
		void getarea(){
			area=a*a*6;
		}
		void disp(){
			cout<<volume<<" "<<area<<endl;
		}
		
};
int  main( ){
    float ab;
    cin>>ab;
    Box  obj;
    obj.seta( ab );
    obj.getvolume( );
    obj.getarea( );
    obj.disp( );
    return 0;
}

------------------------


题目18:
题目：设计一个矩形类Rectangle并创建测试程序（C++） 10 分难度：7-18
正文：
设计一个名为Rectangle的矩形类，这个类包括：两个名为width和height的double数据域，它们分别表示矩形的宽和高。width和height的默认值都为1.该类包括矩形类的无参构造函数（默认构造函数）；一个width和height为指定值的矩形构造函数；一个名为getArea( )的函数返回矩形的面积；一个名为getPerimeter( )的函数返回矩形的周长。请实现这个类。编写一个测试程序，创建一个Rectangle对象，从键盘输入矩形的宽和高，然后输出矩形的面积和周长。

### 输入格式:

3.5 35.9（第一个数表示矩形的宽，第二个数表示矩形的高，中间是空间分隔。）

### 输出格式:

125.65  （第一行输出矩形的面积）
78.8  （第二行输出矩形的周长）

### 输入样例:
```in
3.5 35.9
```

### 输出样例:
```out
125.65
78.8
```

答案：
#include<iostream>
using namespace std;
class Rectangle{
	private:
		double width,hight;
		double area,perimeter;
		
	public:
		Rectangle(double w=1,double h=1){
			width=w;
			hight=h;
		}
		Rectangle(){
			width=1;
			hight=1;
		}
		void  getArea(){
			cout<<width*hight<<endl;
		}
		double getPerimeter(){
			cout<<width*2+hight*2<<endl;
		}
		
};
int  main( ){
		
		double w,h;
		cin>>w>>h;
		Rectangle re(w,h);
		re.getArea();
		re.getPerimeter();
    return 0;
}

------------------------


题目19:
题目：复数类的操作 20 分难度：7-19
正文：
1、声明一个复数类Complex（类私有数据成员为double型的real和image） 

2、定义构造函数，用于指定复数的实部与虚部。

3、定义取反成员函数，调用时能返回该复数的相反数（实部、虚部分别是原数的相反数）。 

4、定义成员函数Print()，调用该函数时，以格式(real, image)输出当前对象。

5、编写加法友元函数，以复数对象c1，c2为参数，求两个复数对象相加之和。 

6、主程序实现： 

（1）读入两个实数，用于初始化对象c1。 

（2）读入两个实数，用于初始化对象c2。 

（3）计算c1与c2相加结果，并输出。 

（4）计算c2的相反数与c1相加结果，并输出。


### 输入格式:

输入有两行： 

第一行是复数c1的实部与虚部，以空格分隔； 

第二行是复数c2的实部与虚部，以空格分隔。

### 输出格式:

输出共三行: 

第一行是c1与c2之和；

第二行是c2的相反数与c1之和；

第三行是c2 。

### 输入样例:

在这里给出一组输入。例如：

```in
2.5 3.7
4.2 6.5
```

### 输出样例:

在这里给出相应的输出。例如：

```out
(6.7, 10.2)
(-1.7, -2.8)
(4.2, 6.5)
```


答案：


/*
1、声明一个复数类Complex（类私有数据成员为double型的real和image）
2、定义构造函数，用于指定复数的实部与虚部。
3、定义取反成员函数，调用时能返回该复数的相反数（实部、虚部分别是原数的相反数）。
4、定义成员函数Print()，调用该函数时，以格式(real, image)输出当前对象。
5、编写加法友元函数，以复数对象c1，c2为参数，求两个复数对象相加之和。
6、主程序实现：
（1）读入两个实数，用于初始化对象c1。
（2）读入两个实数，用于初始化对象c2。
（3）计算c1与c2相加结果，并输出。
（4）计算c2的相反数与c1相加结果，并输出。
输入格式:
输入有两行：
第一行是复数c1的实部与虚部，以空格分隔；
第二行是复数c2的实部与虚部，以空格分隔。
输出格式:
输出共三行:
第一行是c1与c2之和；
第二行是c2的相反数与c1之和；
第三行是c2 。
输入样例:
在这里给出一组输入。例如：
2.5 3.7
4.2 6.5







输出样例:
在这里给出相应的输出。例如：
(6.7, 10.2)
(-1.7, -2.8)
(4.2, 6.5)
*/
#include<iostream>
using namespace std;
class Complex{

public:
	Complex(double r, double i) :real(r), image(i){}
	Complex qufan(){
	return	Complex(-real,-image);
//		real=-real;
//		image=-image;
//		return *this;
	}
	void Print(){
		cout << "(" << real << ", " << image << ")" << endl;
	}
	friend Complex operator+(const Complex & a, const Complex &b);
private:
	double real, image;
};
Complex operator+(const Complex &a, const Complex &b) {
	return Complex(a.real + b.real, a.image + b.image);

}
int main(void){
	double ax, ay, bx, by;
	cin >> ax >> ay;
	cin >> bx >> by;
	Complex a(ax, ay);
	Complex b(bx, by);
	Complex c = a + b;
	
//	Complex x=b.qufan();
//
	c.Print();
	 
	Complex d = b.qufan() + a;
	d.Print();
	b.Print();


	return 0;
}

------------------------


题目20:
题目：宿舍谁最高？ 20 分难度：7-99
正文：
学校选拔篮球队员，每间宿舍最多有4个人。现给出宿舍列表，请找出每个宿舍最高的同学。定义一个学生类Student,有身高height，体重weight等。

### 输入格式:

首先输入一个整型数n （1<=n<=1000000），表示n位同学。  
紧跟着n行输入,每一行格式为：宿舍号，name,height,weight。  
宿舍号的区间为[0,999999]， name 由字母组成，长度小于16，height，weight为正整数。  

### 输出格式:

按宿舍号从小到大排序，输出每间宿舍身高最高的同学信息。题目保证每间宿舍只有一位身高最高的同学。

### 输入样例:
```in
7
000000 Tom 175 120
000001 Jack 180 130
000001 Hale 160 140
000000 Marry 160 120
000000 Jerry 165 110
000003 ETAF 183 145
000001 Mickey 170 115
```

### 输出样例:
```out
000000 Tom 175 120
000001 Jack 180 130
000003 ETAF 183 145
```

答案：
#include <iostream>
#include <iomanip>
#include<map>
#include<string>
using namespace std;
class Student{
public:
	int hige;
	int weight;
	string name;
};
int main(void){
	int n;
	cin >> n;
	Student stu;
	map<int, Student> mp;
	int hao;//宿舍号 
	for (int i = 0; i<n; i++){
		cin >> hao >> stu.name >> stu.hige >> stu.weight;
		if (stu.hige>mp[hao].hige ){
			mp[hao] = stu;//筛选最高
		}
	}
	//map<int, Student>::iterator it;
	for (auto it = mp.begin(); it != mp.end(); it++){
		cout << setw(6)<<setfill('0')<< it->first << " " << it->second.name << " " << it->second.hige << " " << it->second.weight << endl;
	}
	return 0;
}

------------------------


题目21:
题目：图书音像出租管理 10 分难度：7-121
正文：
一个图书音像店出租图书和磁带。  
给出下面一个基类的框架：  
class Publication  
{  
protected:  
string title;//名称  
float price;//原价  
int day;//租期  
public:  
virtual void display()=0;//打印价格清单  
}  
以Publication为基类，构建Book和Tape类。  
生成上述类并编写主函数，要求主函数中有一个基类Publication指针数组，数组元素不超过10个。  
Publication *pp[10];  
主函数根据输入的信息，相应建立Book, Tape类对象。  
它们的原始租金为：租期*1.2。  
另外，实际收取的租金不超过2倍的租品估价。  
Book的估价为：新旧程度*原价。  
Tape的估价为：原价/（1+已出租次数/3）。  
输入格式：每个测试用例占一行，第一项为租品类型，1为Book,2为Tape.接下来为名称、原价、租期。最后一项Book是新旧程度（0.1至1），Tape是已出租次数。以0表示输入的结束。  
要求输出名称，原始租金(小数点后保留1位小数)，如果原始租金大于2倍租品估价，则同时给出实际应收取的租金(小数点后保留1位小数)，并在最后标明R。  

输入样例  
1 AAA 19.5 3 0.5  
1 BBB 9.5 2 0.1  
2 AA 10 2 0  
2 DDDD 12.5 2 38  
1 FFF 42 3 0.1  
0  
输出样例  
AAA 3.6  
BBB 2.4 1.9 R  
AA 2.4  
DDDD 2.4 1.8 R  
FFF 3.6

答案：
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Publication
{
protected:
	string title;//名称
	float price;//原价
	int day;//租期
public:
	Publication(string name, float price_, int day_) :title(name), price(price_), day(day_){}
	virtual void display() = 0;//打印价格清单
};

class Book :public  Publication{////名称、原价、租期。最后一项Book是新旧程度
	float isnew;
public:
	Book(string name, float price_, int day_, float isnew_) :Publication(name, price_, day_), isnew(isnew_){

	}
	void display(){//它们的原始租金为：租期1.2。
	
		cout << title << " " << (day*1.2);
		if ((day*1.2) > (isnew*price * 2)){
			cout << " " << (isnew* price * 2) << " R" ;
		}
		cout << endl;
	}
};
class Tape :public Publication
{
	int nums;
public:
	Tape(string name, float price_, int day_, int isnew_) : Publication(name, price_, day_), nums(isnew_){}
	void display(){
		cout << title << " " << day*1.2;//原价/（1+已出租次数/3）。
		if ((day*1.2) > (price / (1 + nums / 3) * 2)){
		//	cout << (price / (1 + nums / 3) * 2) << " R" ;
			printf(" %.1f R",(price/(nums/3+1))*2.0);
		}

		cout << endl;
	}
};

int main(void){


	Publication *pp[10];
	int type;
	string name;
	float price;
	int day;
	int num;
	float isnew;
	int i = 0;
	while (cin >> type){
		if (type == 0){
			break;
		}
		else{
			if (type == 1){
				cin >> name >> price >> day >> isnew;
				pp[i++] = new Book(name, price, day, isnew);
			}
			else if (type == 2){
				cin >> name >> price >> day >> num;
				pp[i++] = new Tape(name, price, day, num);

			}


		}
	}
	for (int k = 0; k < i; k++){
		pp[k]->display();
	}
	return 0;
}


------------------------


题目22:
题目：体育俱乐部积分管理 10 分难度：7-122
正文：
一个俱乐部有篮球、足球和排球队。  
下面给出基类的框架：  
class Ball  
{  
protected:  
string opponent;//对手  
public:  
void display();//显示比赛成绩  
}  
以Ball为基类，构建Basketball, Football和Volleyball三个类。  
生成上述类并编写主函数，要求主函数中有一个基类Ball指针数组，数组元素不超过20个。  
Ball *pb[20];  
主函数根据输入的信息，相应建立Basketball, Football, Volleyball类对象。  
输入格式：每个测试用例占一行，第一项为类型，1为Basketball，2为Football，3为Volleyball, 第二项是对手名称，第二项是比分。输入0表示输入的结束。  
输出时，依次打印对手名称和该场积分数（以万元为单位）：Basketball胜一场得2分，负一场得1分；Football胜一场得3分，平一场得1分；排球以3：0或3：1胜时，得3分，以3：2胜时，得2分，以2：3负时，得1分，其它情况得0分。  

输入样例  
1 AAA 108:106  
2 BB 2:1  
3 CCC 3:2  
2 BB 2:2  
3 EEE 3:1  
3 FFF 2:3  
3 CCC 0:3  
1 AAA 95:99  
0  

输出样例  
AAA 2  
BB 3  
CCC 2  
BB 1  
EEE 3  
FFF 1  
CCC 0  
AAA 1

答案：
#include<iostream>
#include<string>
using namespace std;
class Ball
{
protected:
	string opponent;//对手
public:
	Ball(string s) :opponent(s){};
	virtual void display()=0;//显示比赛成绩
};
class Basketball :public Ball{
public:
	Basketball(string s, int so) :Ball(s), sco(so){};
	virtual void display(){
		
		if (sco > 0)
			cout << opponent << " " << 2 << endl;
		if (sco<0)
			cout << opponent << " " << 1 << endl;
	}
private:
	int sco;

};
class Football :public Ball{
public:
	Football(string s, int so) :Ball(s), sco(so){};
	virtual void display(){
		if (sco > 0)
			cout << opponent << " " << 3 << endl;
		if (sco==0)
			cout << opponent << " " << 1 << endl;
		if (sco<0)
			cout << opponent << " " << 0 << endl;
	}
private:
	int sco;
};
class Volleyball :public Ball{
public:
	Volleyball(string s, double so) :Ball(s), sco(so){};
	virtual void display(){
		//3：0或3：1胜时，得3分，以3：2胜时，得2分，以2：3负时，得1分，其它情况得0分。
		if (sco ==3.1||sco==3.0)
			cout << opponent << " " << 3 << endl;
		else if (sco == 3.2)
			cout << opponent << " " << 2 << endl;
		else if(sco == 2.3)
			cout << opponent << " " << 1 << endl;
		else if (sco==-1)
		{
			cout << opponent << " " << 0 << endl;
		}
	}
private:
	double sco;
};
int main(void){
	Ball *pb[20];
	int n;
	int count = 0;
	string s;
	int a1, a2;
	double sco;
	while (true)
	{
		
		cin >> n;
		if (n == 0){
			break;
		}
		cin >> s;
		scanf("%d:%d", &a1, &a2);
		
		if (n == 1){
		
			if (a1 > a2)
				sco = 1;
			else
				sco = -1;
			pb[count++] = new Basketball(s,sco);
		}
		else if (n==2)
		{
			
			if (a1 > a2)
				sco = 1;
			else if (a1 == a2)
				sco = 0;
			else if (a1 < a2)
				sco = -1;
			pb[count++] = new Football(s, sco);
		}
		else if (n==3)
		{
			
			//排球以3：0或3：1胜时，得3分，以3：2胜时，得2分，以2：3负时，得1分，其它情况得0分。 
			if (a1 == 3 && (a2 == 1 || a2 == 0))
				sco = 3.1;
			else if (a1 == 3 && a2 == 2)
				sco = 3.2;
			else if (a1 == 2 && a2 == 3)
				sco = 2.3;
			else
				sco = -1;

			pb[count++] = new Volleyball(s, sco);
		}

	}
	for (int i = 0; i < count; ++i){
		pb[i]->display();
		delete pb[i];
	}
	return 0;
}

------------------------


题目23:
题目：选择法排序 20 分难度：7-23
正文：
本题要求将给定的$$n$$个整数从大到小排序后输出。

### 输入格式：

输入第一行给出一个不超过10的正整数$$n$$。第二行给出$$n$$个整数，其间以空格分隔。

### 输出格式：

在一行中输出从大到小有序的数列，相邻数字间有一个空格，行末不得有多余空格。

### 输入样例：
```in
4
5 1 7 6
```

### 输出样例：
```out
7 6 5 1
```

答案：
#include<iostream>
#include<stdlib.h>
using namespace std;
int com(const void*a,const void* b){
	return *(int*)b - *(int*)a;
}
int main(){
	 int n=10;
	cin >> n;
	int num[n];
	for (int i = 0; i < n; i++){
		cin >> num[i];
	}
	qsort(num, n, sizeof(int), com);
	for (int i = 0; i < n-1; i++){
		cout << num[i] << " ";
	}
	cout<<num[n-1]; 
	return 0;
}

------------------------


题目24:
题目：三个整数之和 10 分难度：7-24
正文：
输入三个整数求和并输出。

### 输入格式:
在一行中输入3个整数，3个整数之间用一个空格间隔，没有其它任何附加字符。

### 输出格式:

在一行中按照“sum=结果”的顺序输出，其中结果为原样输出。

### 输入样例:
```in
4 5 6
```

### 输出样例:
```out
sum=15
```

答案：
#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n[3];
	//cin>>n[1]>>n[2]>>n[3];
	for(int i=0;i<3;i++){
		cin>>n[i];
	}
	int *p[]={n,n+1,n+2};
	int **q=p;
	
	int sum=**q+**(q+1)+**(q+2);
	cout<<"sum="<<sum<<endl;
	return 0;
}

------------------------


题目25:
题目：抽象基类Shape派生3个类 15 分难度：7-25
正文：
声明抽象基类Shape,由它派生出三个类，圆形Circle，矩形Rectangle，三角形Triangle，用一个函数输出三个面积。

### 输入格式:

在一行中依次输入5个数，圆的半径，长方形的高和宽，三角形的高和底，中间用空格分隔

### 输出格式:

圆的面积，长方形的面积，三角形的面积，小数点后保留2位有效数字，每个面积占一行。

### 输入样例:

在这里给出一组输入。例如：

```in
3 3 4 3 4
```

### 输出样例:

在这里给出相应的输出。例如：

```out
28.27
12.00
6.00
```


答案：
#include<iostream>
using namespace std;
class Shape{
public:
virtual	void show() = 0;
};
class Circle :public Shape{
private:
	double r;
public:
	void set(double r_){
		r = r_;
	}
	virtual void show(){
		printf("%.2f\n", 3.1415926*r*r);
	}
};
class Rectangle :public Shape{
private:
	double a, b;
public:
	void set(double a_, double b_){
		a = a_;
		b = b_;
	}
	virtual void show(){
		printf("%.2f\n", a*b);
	}
};
class Triangle :public Shape{
private:
	double a, b;
public:
	void set(double a_, double b_){
		a = a_;
		b = b_;
	}
	virtual void show(){
		printf("%.2f\n", 0.5*a*b);
	}
};
int main(void){

	Circle c;
	Rectangle R;
	Triangle t;
	double r, a, b;
	cin >> r >> a >> b;
	c.set(r);
	R.set(a, b);
	cin >> a >> b;
	t.set(a, b);
	c.show();
	R.show();
	t.show();
	return 0;
}

------------------------


题目26:
题目：A-B 20 分难度：7-183
正文：
本题要求你计算$$A-B$$。不过麻烦的是，$$A$$和$$B$$都是字符串 —— 即从字符串$$A$$中把字符串$$B$$所包含的字符全删掉，剩下的字符组成的就是字符串$$A-B$$。

### 输入格式：

输入在2行中先后给出字符串$$A$$和$$B$$。两字符串的长度都不超过$$10^4$$，并且保证每个字符串都是由可见的ASCII码和空白字符组成，最后以换行符结束。

### 输出格式：

在一行中打印出$$A-B$$的结果字符串。

### 输入样例：
```in
I love GPLT!  It's a fun game!
aeiou
```

### 输出样例：
```out
I lv GPLT!  It's  fn gm!
```

答案：
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	int size=s1.size();
	for(int i=0;i<size;++i){
		bool isfalg=1;
		for(int j=0;j<s2.length();++j){
			if(s1[i]==s2[j]){
				isfalg=0;
				break;
			}
		}
		if(isfalg)
			cout<<s1[i];
	}
	
	
	return 0;
}

------------------------


题目27:
题目：学号解析 10 分难度：7-184
正文：
川师的学号的某些位有特殊的含义，如从2016110101中可以看出该学生为2016级，就读于11系，班级为1班。根据输入的学号，利用程序进行解析，输出对应的信息。

### 输入格式:

一个学号

### 输出格式:

相关信息

### 输入样例:

在这里给出一组输入。例如：

```in
2016110101
```

### 输出样例:

在这里给出相应的输出。例如：

```out
year:2016
department:11
class:01

```


答案：
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	string s1;
	cin>>s1;
	cout<<"year:"<<s1.substr(0,4)<<endl;
	cout<<"department:"<<s1.substr(4,2)<<endl;
	cout<<"class:"<<s1.substr(6,2)<<endl;
	return 0;
}

------------------------



