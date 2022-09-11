/*
汉诺塔是一个源于印度古老传说的益智玩具。据说大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘，大梵天命令僧侣把圆盘移到另一根柱子上，并且规定：在小圆盘上不能放大圆盘，每次只能移动一个圆盘。当所有圆盘都移到另一根柱子上时，世界就会毁灭。

题图1.jpg

请编写程序，输入汉诺塔圆片的数量，输出移动汉诺塔的步骤。
输入格式

    圆盘数 起始柱 目的柱 过度柱

输出格式

    移动汉诺塔的步骤
    每行显示一步操作，具体格式为：
    盘片号: 起始柱 -> 目的柱
    其中盘片号从 1 开始由小到大顺序编号。

输入样例

3
a c b

输出样例

1: a -> c
2: a -> b
1: c -> b
3: a -> c
1: b -> a
2: b -> c
1: a -> c
*/ 


#include<iostream>
using namespace std;
void move(int n,char start,char end){
    printf("%d: %c -> %c\n",n,start,end);
    //cout<<n<<" "<<start<<" -> "<<end<<endl;
}
void sort(int n,char a,char b,char c){//作用为：n个盘a通过c放到b上
    if(n>0){
        sort(n-1,a,c,b);//迭代为(n-1)，将前(n-1)个通过b,放在c上
        move(n,a,b);//让第n块（也就是最底层那块）通过A放在B上。
        sort(n-1,c,b,a);//在让（n-1)块通过a,放在b上。
    }
}
int main(void){
    int n;
    cin>>n;
    char a,b,c;
 	cin>>a;
 	cin>>b;
 	cin>>c;
    sort(n,a,b,c);

    return 0;
}
