题目：1$$2^N$和$N^N$具有相同的增长速度。
 答案：FALSE

题目：2算法分析的两个主要方面是时间复杂度和空间复杂度的分析。
 答案：TRUE

题目：3算法可以没有输入，但是必须有输出。   答案：TRUE

题目：4数据元素是数据的最小单位。   答案：FALSE

题目：5数据的逻辑结构是指数据的各数据项之间的逻辑关系。   答案：FALSE

题目：6数据结构概念包括数据之间的逻辑结构、数据在计算机中的存储方式和数据的运算三个方面。   答案：TRUE

题目：7数据元素可以由类型互不相同的数据项构成。   答案：TRUE

题目：8数据的逻辑结构说明数据元素之间的顺序关系，它依赖于计算机的存储结构。    答案：FALSE

题目：9$$n! is $O(n^n).
 答案：FALSE

题目：10$$O(N^2) is the same as $O(1+2+3+\cdots+N).   答案：TRUE

题目：11对于顺序存储的长度为$N$的线性表，访问结点和增加结点的时间复杂度分别对应为$O(1)和$O(N)。
 答案：TRUE

题目：12若某线性表最常用的操作是存取任一指定序号的元素和在最后进行插入和删除运算，则利用顺序表存储最节省时间。
 答案：TRUE

题目：13对于顺序存储的长度为$N$的线性表，删除第一个元素和插入最后一个元素的时间复杂度分别对应为$O(1)和$O(N)。
 答案：TRUE

题目：14(neuDS)在顺序表中逻辑上相邻的元素，其对应的物理位置也是相邻的。   答案：FALSE

题目：15(neuDS)所谓随机存取，就是通过首地址和元素的位序号值可以在O(1)的时间内找到指定的元素。   答案：TRUE

题目：16(neuDS)顺序存储的线性表不支持随机存取。   答案：FALSE

题目：17(neuDS)在顺序表上进行插入、删除操作时需要移动元素的个数与待插入或待删除元素的位置无关。   答案：FALSE

题目：18(neuDS)顺序存储方式只能用于存储线性结构。   答案：FALSE

题目：19在具有$N$个结点的单链表中，访问结点和增加结点的时间复杂度分别对应为$O(1)和$O(N)。
 答案：FALSE

题目：20若用链表来表示一个线性表，则表中元素的地址一定是连续的。
 答案：FALSE

题目：21将$N$个数据按照从小到大顺序组织存放在一个单向链表中。如果采用二分查找，那么查找的平均时间复杂度是$O(logN)。
 答案：FALSE

题目：22取线性表的第i个元素的时间同i的大小有关。   答案：FALSE

题目：23链表的每个结点都恰好有一个指针。   答案：TRUE

题目：24线性表的顺序存储表示优于链式存储表示。   答案：FALSE

题目：25链式存储的优点是插入、删除元素时不会引起后续元素的移动，缺点是只能顺序访问各元素。   答案：TRUE

题目：26链表 - 存储结构

链表中逻辑上相邻的元素，其物理位置也一定相邻。
 答案：FALSE

题目：27通过对堆栈S操作：Push(S,1), Push(S,2), Pop(S), Push(S,3), Pop(S), Pop(S)。输出的序列为：123。
 答案：FALSE

题目：28若一个栈的输入序列为1，2，3，…，$N$，输出序列的第一个元素是$i$，则第$j$个输出元素是$j-i-1$。
 答案：FALSE

题目：29若一个栈的输入序列为{1, 2, 3, 4, 5}，则不可能得到{3, 4, 1, 2, 5}这样的出栈序列。
 答案：TRUE

题目：30栈和队列的存储方式，既可以是顺序方式，也可以是链式方式。   答案：TRUE

题目：31栈底元素是不能删除的元素。  答案：FALSE

题目：32顺序栈中元素值的大小是有序的。   答案：FALSE

题目：33在n个元素连续进栈以后，它们的出栈顺序和进栈顺序一定正好相反。   答案：TRUE

题目：34栈顶元素和栈底元素有可能是冋一个元素。   答案：TRUE


------------------------------------------
题目1:下面程序段的时间复杂度是 (      )
```
i ＝ 0；
while（i<=n）
     i = i * 3；
```  choices=["O(2n)"  "O(n)"  "O(n$^2$)"  "O($log_3n$)"]   答案：D

题目2:下面程序段的时间复杂度是(       )。
```
for( i =0; i<n; i++)
   for(j=0;j<m;j++)
 	  A[i][j] ＝ 0;
```  choices=["O(2n)"  "O(n*m)"  "O($n^2$)"  "O(logn)"]   答案：D

题目3:程序段
```
FOR  i:=n-1  DOWNTO  1  DO
            FOR j:=1 TO i DO
               IF A[j]>A[j+1]
                  THEN  A[j]与A[j+1]对换；
```
其中 n为正整数，则最后一行的语句频度在最坏情况下是（   ）  choices=["O（n）"  "O(nlogn)"  "O($n^3$)"  "O($n^2$)"]   答案：D

题目4:下列函数中，哪个函数具有最快的增长速度？  choices=["$N^2 logN$"  "$N(logN)^4$"  "$N^3$"  "$NlogN^2$"]   答案：D

题目5:下面代码段的时间复杂度是（）。
```c++
x=n; //n>1
y=0;
while( x≥(y+1)*(y+1) )
    y++;
```  choices=["$O(1)"  "$O(n^{1/2})"  "$O(n)"  "$O(log_2 n)"]   答案：D

题目6:在数据结构中，从逻辑上可以把数据结构分成（   ）。  choices=["动态结构和静态结构"  "紧凑结构和非紧凑结构"  "线性结构和非线性结构"  "内部结构和外部结构"]   答案：C

题目7:与数据元素本身的形式、内容、相对位置、个数无关的是数据的（   ）。  choices=["存储结构"  "存储实现"  "逻辑结构"  "运算实现"]   答案：C

题目8:通常要求同一逻辑结构中的所有数据元素具有相同的特性，这意味着（   ）。  choices=["数据在同一范围内取值"  "不仅数据元素所包含的数据项的个数要相同，而且对应数据项的类型要一致"  "每个数据元素都一样"  "数据元素所包含的数据项的个数要相等"]   答案：B

题目9:以下说法正确的是（   ）。  choices=["数据元素是数据的最小单位"  "数据项是数据的基本单位"  "数据结构是带有结构的各数据项的集合"  "一些表面上很不相同的数据可以有相同的逻辑结构"]   答案：D

题目10:下列哪个函数是$O(N)的？  choices=["$2NlogN$"  "$logN^2$"  "$N(logN)^2$"  "$N^2/2$"]   答案：B

题目11:算法的时间复杂度取决于（    ）。  choices=["问题的规模"  "待处理数据的初态"  "计算机的配置"  "A和B"]   答案：A

题目12:下面代码段的时间复杂度是（）。
```c++
s=0;
for ( i=0; i<n; i++ )
    for( j=0; j<n; j++ )
        s+=B[i][j];
sum=s;
```  choices=["$O(1)"  "$O(log_2 n)"  "$O(n)"  "$O(n^2)"]   答案：D

题目13:给定$N\times N\times N$的三维数组A，则在不改变数组的前提下，查找最小元素的时间复杂度是：  choices=["$O(N^2)"  "$O(NlogN)"  "$O(N^3 logN)"  "$O(N^3)"]   答案：D

题目14:以下数据结构中，（  ）是非线性数据结构。  choices=["树"  "字符串"  "队列"  "栈"]   答案：A

题目15:下列代码
```
if ( A > B ) {
    for ( i=0; i<N; i++ )
        for ( j=N*N; j>i; j-- )
            A += B;
}
else {
    for ( i=0; i<N*2; i++ )
        for ( j=N*2; j>i; j-- )
            A += B;
}
```
的时间复杂度是：  choices=["$O(N)"  "$O(N^2)"  "$O(N^3)"  "$O(N^4)"]   答案：D

题目16:数组A[1..5,1..6]每个元素占5个单元，将其按行优先次序存储在起始地址为1000的连续的内存单元中，则元素A[5,5]的地址为：  choices=["1120"  "1125"  "1140"  "1145"]   答案：C

题目17:在$N$个结点的顺序表中，算法的时间复杂度为O(1)的操作是：  choices=["访问第$i$个结点（$1\\le i\\le N$）和求第$i$个结点的直接前驱（$2\\le i\\le N$）"  "在第$i$个结点后插入一个新结点（$1\\le i\\le N$）"  "删除第$i$个结点（$1\\le i\\le N$）"  "将$N$个结点从小到大排序"]   答案：A

题目18:以下关于顺序表的说法中，正确的是（ ）。  choices=["顺序表可以利用一维数组表示，因此顺序表与一维数组在结构上是一致的，它们可以通用"  "在顺序表中，逻辑上相邻的元素在物理位置上不一定相邻"  "顺序表和一维数组一样，都可以按下标随机（或直接）访问，顺序表还可以从某一指定元素开始，向前或向后逐个元素顺序访问"  "在顺序表中每一表元素的数据类型还可以是顺序表"]   答案：C

题目19:线性表若采用链式存储结构时，要求内存中可用存储单元的地址  choices=["必须是连续的"  "连续或不连续都可以"  "部分地址必须是连续的"  "一定是不连续的"]   答案：B

题目20:线性表L在什么情况下适用于使用链式结构实现？  choices=["需不断对L进行删除插入"  "需经常修改L中的结点值"  "L中含有大量的结点"  "L中结点结构复杂"]   答案：B

题目21:链表不具有的特点是：  choices=["插入、删除不需要移动元素"  "方便随机访问任一元素"  "不必事先估计存储空间"  "所需空间与线性长度成正比"]   答案：B

题目22:适用于压缩存储稀疏矩阵的两种存储结构是：  choices=["三元组表和十字链表"  "三元组表和邻接矩阵"  "十字链表和二叉链表"  "邻接矩阵和十字链表"]   答案：A

题目23:在具有$N$个结点的单链表中，实现下列哪个操作，其算法的时间复杂度是$O(N)？  choices=["在地址为$p$的结点之后插入一个结点"  "删除开始结点"  "遍历链表和求链表的第$i$个结点"  "删除地址为$p$的结点的后继结点"]   答案：C

题目24:某线性表中最常用的操作是在最后一个元素之后插入一个元素和删除第一个元素，则采用什么存储方式最节省运算时间？  choices=["单链表"  "仅有尾指针的单循环链表"  "仅有头指针的单循环链表"  "双链表"]   答案：B

题目25:若某表最常用的操作是在最后一个结点之后插入一个结点或删除最后一个结点。则采用哪种存储方式最节省运算时间？  choices=["单链表"  "双链表"  "单循环链表"  "带头结点的双循环链表"]   答案：D

题目26:将线性表La和Lb头尾连接，要求时间复杂度为O(1)，且占用辅助空间尽量小。应该使用哪种结构？  choices=["单链表"  "单循环链表"  "带尾指针的单循环链表"  "带头结点的双循环链表"]   答案：C

题目27:对于一个具有$N$个结点的单链表，在给定值为$x$的结点后插入一个新结点的时间复杂度为  choices=["$O(1)"  "$O(N/2)"  "$O(N)"  "$O(N^2)"]   答案：C

题目28:设`h`为不带头结点的单向链表。在`h`的头上插入一个新结点`t`的语句是：  choices=["`h=t; t->next=h->next;`"  "`t->next=h->next; h=t;`"  "`h=t; t->next=h;`"  "`t->next=h; h=t;`"]   答案：D

题目29:在单链表中，若`p`所指的结点不是最后结点，在`p`之后插入`s`所指结点，则执行  choices=["`s->next=p; p->next=s;`"  "`s->next=p->next; p=s;`"  "`s->next=p->next; p->next=s;`"  "`p->next=s; s->next=p;`"]   答案：A

题目30:带头结点的单链表`h`为空的判定条件是：  choices=["`h == NULL;`"  "`h->next == NULL;`"  "`h->next == h;`"  "`h != NULL;`"]   答案：B

题目31:对于一非空的循环单链表，`h`和`p`分别指向链表的头、尾结点，则有：  choices=["`p->next == h`"  "`p->next == NULL`"  "`p == NULL`"  "`p == h`"]   答案：A

题目32:将两个结点数都为$N$且都从小到大有序的单向链表合并成一个从小到大有序的单向链表，那么可能的最少比较次数是：  choices=["$1$"  "$N$"  "$2N$"  "$NlogN$"]   答案：B

题目33:已知表头元素为`c`的单链表在内存中的存储状态如下表所示：

![](~/124)

现将`f`存放于`1014H`处，并插入到单链表中，若`f`在逻辑上位于`a`和`e`之间，则`a`、`e`、`f`的“链接地址”依次

是：  choices=["`1010H`   `1014H`   `1004H`"  "`1010H`   `1004H`   `1014H`"  "`1014H`   `1010H`   `1004H`"  "`1014H`   `1004H`   `1010H`"]   答案：C

题目34:链表不具有的特点是\_\_\_\_。  choices=["可随机访问任一元素"  "插入、删除不需要移动元素"  "不必事先估计存储空间"  "所需空间与线性表长度成正比"]   答案：A

题目35:以下说法错误的是  (  )。  choices=["对于线性表来说，定位运算LocateElem在顺序表和单链表上的时间复杂度均为O（n）"  "插入、删除操作在顺序表上的实现，平均时间复杂度为O（n）"  "在链表上实现读表元运算的平均时间复杂度为O（1）"  "插入、删除操作在链表上的实现可在O（1）时间内完成"]   答案：C

题目36:线性表、堆栈、队列的主要区别是什么？  choices=["线性表用指针，堆栈和队列用数组"  "堆栈和队列都是插入、删除受到约束的线性表"  "线性表和队列都可以用循环链表实现，但堆栈不能"  "堆栈和队列都不是线性结构，而线性表是"]   答案：B

题目37:现有队列 Q 与栈 S，初始时 Q 中的元素依次是{ 1, 2, 3, 4, 5, 6 }（1在队头），S 为空。若允许下列3种操作：（1）出队并输出出队元素；（2）出队并将出队元素入栈；（3）出栈并输出出栈元素，则不能得到的输出序列是：  choices=["1   2   5   6   4   3"  "2   3   4   5   6   1"  "3   4   5   6   1   2"  "6   5   4   3   2   1"]   答案：C

题目38:若栈$S_1$中保存整数，栈$S_2$中保存运算符，函数`F()`依次执行下述各步操作：

- （1）从$S_1$中依次弹出两个操作数`a`和`b`；
- （2）从$S_2$中弹出一个运算符`op`；
- （3）执行相应的运算`b op a`；
- （4）将运算结果压入$S_1$中。

假定$S_1$中的操作数依次是{ 5, 8, 3, 2 }（2在栈顶），$S_2$中的运算符依次是{ `*`, `-`, `+` }（+在栈顶）。调用3次`F()`后，$S_1$栈顶保存的值是：  choices=["-15"  "15"  "-20"  "20"]   答案：B

题目39:若用大小为6的数组来实现循环队列，且当前`front`和`rear`的值分别为0和4。当从队列中删除两个元素，再加入两个元素后，`front`和`rear`的值分别为多少？  choices=["2和0"  "2和2"  "2和4"  "2和6"]   答案：A

题目40:在一个不带头结点的非空链式队列中,假设f和r分别为队头和队尾指针,则插入s所指的结点运算是(  )。  choices=["f->next=s; f=s;"  "r->next=s; r=s;"  "s->next=s; r=s;"  "s->next=f; f=s;"]   答案：B

题目41:假设有5个整数以1、2、3、4、5的顺序被压入堆栈，且出栈顺序为3、5、4、2、1，那么为了获得这样的输出，堆栈大小至少为：  choices=["2"  "3"  "4"  "5"]   答案：C

题目42:若元素a、b、c、d、e、f依次进栈，允许进栈、退栈操作交替进行，但不允许连续三次进行退栈工作，则不可能得到的出栈序列是？  choices=["b c a e f d"  "c b d a e f"  "d c e b f a"  "a f e d c b"]   答案：D

题目43:设一个栈的输入序列是1、2、3、4、5，则下列序列中，是栈的合法输出序列的是？  choices=["3 2 1 5 4"  "5 1 2 3 4"  "4 5 1 3 2"  "4 3 1 2 5"]   答案：A

题目44:有六个元素以6、5、4、3、2、1的顺序进栈，问哪个不是合法的出栈序列？  choices=["2 3 4 1 5 6"  "3 4 6 5 2 1"  "5 4 3 6 1 2"  "4 5 3 1 2 6"]   答案：B

题目45:令P代表入栈，O代表出栈。若利用堆栈将中缀表达式`3*2+8/4`转为后缀表达式，则相应的堆栈操作序列是：  choices=["PPPOOO"  "POPOPO"  "POPPOO"  "PPOOPO"]   答案：C

题目46:表达式`a*(b+c)-d`的后缀表达式是：  choices=["`a b c + * d -`"  "`a b c d * + -`"  "`a b c * + d -`"  "`- + * a b c d`"]   答案：A

题目47:若`top`为指向栈顶元素的指针，判定栈`S`（最多容纳`m`个元素）为空的条件是：  choices=["`S->top == 0`"  "`S->top == -1`"  "`S->top != m-1`"  "`S->top == m-1`"]   答案：B

题目48:若栈采用顺序存储方式存储，现两栈共享空间`V[m]`：`top[i]`代表第`i`（`i`=1或2）个栈的栈顶；栈1的底在`V[0]`，栈2的底在`V[m-1]`，则栈满的条件是：  choices=["`|top[2]-top[1]|==0`"  "`top[1]+top[2]==m`"  "`top[1]==top[2]`"  "`top[1]+1==top[2]`"]   答案：D

题目49:设栈S和队列Q的初始状态均为空，元素{1, 2, 3, 4, 5, 6, 7}依次进入栈S。若每个元素出栈后立即进入队列Q，且7个元素出队的顺序是{2, 5, 6, 4, 7, 3, 1}，则栈S的容量至少是：  choices=["1"  "2"  "3"  "4"]   答案：D

题目50:给定一个堆栈的入栈序列为{ 1, 2, \cdots$, $n$ }，出栈序列为{ $p_1$, $p_2$, \cdots$, $p_n$ }。如果$p_2 = n$，则存在多少种不同的出栈序列？  choices=["$n$"  "$n-1$"  "2"  "1"]   答案：B


------------------------------------------
题目1:
题目：打印沙漏 20 分难度：7-1
正文：
本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印
```
*****
 ***
  *
 ***
*****
```

所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。

给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。


### 输入格式:

输入在一行给出1个正整数N（\le$$1000）和一个符号，中间以空格分隔。

### 输出格式:

首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。

### 输入样例:
```in
19 *
```

### 输出样例:
```out
*****
 ***
  *
 ***
*****
2
```

答案：
#include<iostream>
using namespace std;
int len=0;
int main(){
	int n;
	char c;
	cin>>n>>c;
	int sum=0;
	for(len=0;sum<=n;++len){
		sum+=(2*len+1)*(len==0?1:2);
	}
	
	
	len--;	
	if(sum>n)
		sum-=(2*len+1)*(len==0?1:2);
	
	
	len=len*2-1;
	
//	cout<<"sum="<<sum<<" len="<<len<<endl;
	
	
	for(int i=0;i<len/2;++i){
		for(int j=0;j<i;++j){
			cout<<" ";
		}
		for(int j=0;j<2*(len/2-i)+1;++j){
			cout<<c;
		}
		cout<<endl;
	}
	
	
	for(int i=len/2;i>=0;--i){
		for(int j=0;j<i;++j){
			cout<<" ";
		}
		for(int j=0;j<2*(len/2-i)+1;++j){
			cout<<c;
		}
		cout<<endl;
		
		
	}
	cout<<n-sum<<endl;
	
	return 0;
} 

------------------------


题目2:
题目：素数对猜想 20 分难度：7-2
正文：
让我们定义$d_n$为：$d_n = p_{n+1}-p_n$，其中$p_i$是第$i$个素数。显然有$d_1 = 1$，且对于$n>1$有$d_n$是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。

现给定任意正整数`N`(<10^5$)，请计算不超过`N`的满足猜想的素数对的个数。


### 输入格式:

输入在一行给出正整数`N`。

### 输出格式:

在一行中输出不超过`N`的满足猜想的素数对的个数。

### 输入样例:
```in
20
```

### 输出样例:
```out
4
```

答案：

#include<iostream>
#include<math.h>
using namespace std; 

int isPrime(int n)
{	//返回1表示判断为质数，0为非质数，在此没有进行输入异常检测
	float n_sqrt;
	if(n==2 || n==3) return 1;
	if(n%6!=1 && n%6!=5) return 0;
	n_sqrt=floor(sqrt((float)n));
	for(int i=5;i<=n_sqrt;i+=6)
	{
	    if(n%(i)==0 | n%(i+2)==0) return 0;
	}
        return 1;
} 

int main(){
	int n;
	cin>>n;
	int sum=0;
	for(int i=2;i<=n;){
		if(i%2!=0){
			if((i+2<=n)&&isPrime(i)&&isPrime(i+2)){
				++sum;
				++i;
			}
		}
		++i;
	} 
	cout<<sum<<endl;
	return 0;
}

------------------------


题目3:
题目：数组元素循环右移问题 20 分难度：7-3
正文：
一个数组$A$中存有$N$（>0$）个整数，在不允许使用另外数组的前提下，将每个整数循环向右移$M$（\ge 0$）个位置，即将$A$中的数据由（$A_0 A_1 \cdots A_{N-1}）变换为（$A_{N-M} \cdots A_{N-1} A_0 A_1 \cdots A_{N-M-1}）（最后$M$个数循环移至最前面的$M$个位置）。如果需要考虑程序移动数据的次数尽量少，要如何设计移动的方法？

### 输入格式:

每个输入包含一个测试用例，第1行输入$N$（$1\le N \le 100$）和$M$（\ge 0$）；第2行输入$N$个整数，之间用空格分隔。

### 输出格式:

在一行中输出循环右移$M$位以后的整数序列，之间用空格分隔，序列结尾不能有多余空格。

### 输入样例:
```in
6 2
1 2 3 4 5 6
```

### 输出样例:
```out
5 6 1 2 3 4
```

答案：

#include<iostream>
using namespace std; 
#define MAXn 102 
int nums[MAXn]={0};
int main(void){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>nums[i];
	}
	int t;
	while(m--){
		t=nums[n-1];
		for(int i=n-1;i>0;--i){
			nums[i]=nums[i-1]; 
		}
		nums[0]=t;
	}
	
	for(int i=0;i<n-1;++i){
		cout<<nums[i]<<" ";
	}
    cout<<nums[n-1];
	
	return 0;
}

------------------------


题目4:
题目：两个有序链表序列的合并 20 分难度：7-14
正文：
已知两个非降序链表序列S1与S2，设计函数构造出S1与S2合并后的新的非降序链表S3。

### 输入格式:

输入分两行，分别在每行给出由若干个正整数构成的非降序序列，用-1$表示序列的结尾（-1$不属于这个序列）。数字用空格间隔。

### 输出格式:

在一行中输出合并后新的非降序链表，数字间用空格分开，结尾不能有多余空格；若新链表为空，输出`NULL`。

### 输入样例:
```in
1 3 5 -1
2 4 6 8 10 -1
```

### 输出样例:
```out
1 2 3 4 5 6 8 10
```

答案：
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

typedef struct Node *ProNode;
typedef int Elmentype;
struct Node{
	Elmentype Data;
	ProNode Next;
};
ProNode read(){
	ProNode head,temp,end;
	Elmentype data;
	
	head=temp=end=NULL;
	while(1){
		scanf("%d",&data);
		if(data==-1){
			
			break;
		}
		
	//	cout<<"data="<<data<<endl;
		temp=(ProNode)malloc(sizeof(struct Node));
		temp->Data=data;
		if(end!=NULL){
			end->Next=temp;
			end=temp;
			end->Next=NULL;
		}else{
			head=temp;
			head->Next=NULL;
			end=head;
		}
	}
	return head;
	
}
ProNode insert(ProNode List, Elmentype _Data){
	if(List==NULL){
		List=(ProNode)malloc(sizeof(struct Node));
		List->Data=_Data;
		List->Next=NULL;
		return List;
	}
	
	ProNode Head=List;
	while(List&&List->Next!=NULL){
		List=List->Next;
	}
	
	List->Next=(ProNode)malloc(sizeof(struct Node));
	List->Next->Data=_Data;
	List->Next->Next=NULL;
	
	return Head;
}

ProNode getList(ProNode List){
	ProNode tlist=List;
	List=List->Next;
//	cout<<"tlist->data"<<tlist->Data<<"\n";
	return tlist;
}
ProNode hebin(ProNode list1,ProNode list2){
	if(list1==NULL&&list2==NULL){
		return NULL;
	}
	
	
	ProNode head,Temp,end;
	head=Temp=end=NULL;
	//head=( (list1->Data)<(list2->Data)?getList(list1):getList(list2));
	
	if(list1->Data<=list2->Data){
		head=list1;
		list1=list1->Next;
	}else{
		head=list2;
		list2=list2->Next;
	}
	
	end=head;
	end->Next=NULL;
	while(list1&&list2){
		//Temp=( (list1->Data)<(list2->Data)?getList(list1):getList(list2));
		if((list1->Data)<=(list2->Data)){
			Temp=list1;
			list1=list1->Next;
		}else{
			Temp=list2;
			list2=list2->Next;
		}
		end->Next=Temp;
		end=Temp;
		end->Next=NULL;
	}
	while(list1){
		Temp=list1;
		list1=list1->Next;
		end->Next=Temp;
		end=Temp;
		end->Next=NULL;
	}
	while(list2){
		Temp=list2;
		list2=list2->Next;
		end->Next=Temp;
		end=Temp;
		end->Next=NULL;
	}
	

	
	
	return head;
	
}
int main(){
	ProNode head1,head2,head3;
	head1=head2=head3=NULL;
	
	
	head1=read();
	head2=read(); 
	//Elmentype t;
	
//	while(1){
//		scanf("%d",&t);
//		if(t==-1){
//			break;
//		}
//		head1=insert(head1,t);
//	}
//	
//
//
//	while(1){
//		scanf("%d",&t);
//		if(t==-1){
//			break;
//		}
//		head2=insert(head2,t);
//	}	
	
	


	head3=hebin(head1,head2);


	if(head3==NULL){
		cout<<"NULL"<<endl;
		return 0;
	}
	
	int falg=1;
	while(head3){
		if(falg){
			printf("%d",head3->Data);
			falg=0;
		}else{
			printf(" %d",head3->Data);
		}
		
		head3=head3->Next;
	}
	
	return 0;
} 

------------------------


题目5:
题目：堆栈操作合法性 20 分难度：7-6
正文：
假设以`S`和`X`分别表示入栈和出栈操作。如果根据一个仅由`S`和`X`构成的序列，对一个空堆栈进行操作，相应操作均可行（如没有出现删除时栈空）且最后状态也是栈空，则称该序列是合法的堆栈操作序列。请编写程序，输入`S`和`X`序列，判断该序列是否合法。

### 输入格式:

输入第一行给出两个正整数N和M，其中N是待测序列的个数，M（\le 50$）是堆栈的最大容量。随后N行，每行中给出一个仅由`S`和`X`构成的序列。序列保证不为空，且长度不超过100。

### 输出格式:

对每个序列，在一行中输出`YES`如果该序列是合法的堆栈操作序列，或`NO`如果不是。

### 输入样例：
```in
4 10
SSSXXSXXSX
SSSXXSXXS
SSSSSSSSSSXSSXXXXXXXXXXX
SSSXXSXXX
```

### 输出样例：
```out
YES
NO
NO
NO
```

答案：
#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main()
{
   int n,m;
   cin >> n >> m;
   string str;
   for(int i=0;i<n;i++)
   {  
      bool flag = true;
      cin >> str;
      stack<int> s;
      for(int j=0;j<str.size();j++)
      {
         if(str[j] == 'S')
         {
            if(s.size() < m)
            s.push(1);
            else 
            {
               flag = false;
               break;
            }
         }
         else 
         {
            if( !s.empty() )
            s.pop();
            else 
            {
               flag = false;
               break;
            }
         }
      }
      if(!s.empty())
      flag = false;
      if(flag)
      cout << "YES" <<endl;
      else 
      cout << "NO" <<endl;
   }
}

------------------------


题目6:
题目：后缀式求值 25 分难度：7-7
正文：
我们人类习惯于书写“中缀式”，如 `3 + 5 * 2` ，其值为`13`。 (p.s. 为什么人类习惯中缀式呢？是因为中缀式比后缀式好用么？）<br>
而计算机更加习惯“后缀式”（也叫“逆波兰式”，Reverse Polish Notation）。上述中缀式对应的后缀式是： `3 5 2 * +` <br>
现在，请对输入的后缀式进行求值。

### 输入格式:

在一行中输入一个后缀式，`运算数`和`运算符`之间用空格分隔，运算数长度不超过`6`位，运算符仅有`+ - * /` 四种。

### 输出格式:

在一行中输出后缀式的值，保留一位小数。

### 输入样例:
```in
3 5.4 2.2 * +
```

### 输出样例:
```out
14.9
```


答案：
#include<iostream>
#include<stack>
#include<string>
#include<sstream>
#include<map>

using namespace std;
stack<double> s;
map<char ,int> Map; 
void init(){
	Map['+']=0;
	Map['-']=0;
	Map['*']=1;
	Map['/']=1;
	Map['(']=-1;
}
int main(){
	
	string str;
	getline(cin,str);
	istringstream strt(str);
	int len=str.length();
	
	double res=0;
	string t;
	strt>>t;
	while(t.length()>0){
	//	cout<<"t="<<t<<endl;
		if(t.length()==1&&(t=="*"||t=="/"||t=="+"||t=="-")){
			double b=s.top();
	//		cout<<"a="<<a<<endl;
			s.pop();
			double a=s.top();
		//	cout<<"b="<<b<<endl;
			s.pop();

			if(t=="+"){
				s.push(a+b);
			}
			else if(t=="-"){
				s.push(a-b);
			}
			else if(t=="*"){
				s.push(a*b);
			}
			else if(t=="/"){
				s.push(a/b);
			}
			
		}else{
//			char *tt=t.;
			stringstream strs(t);
			double tin;
			strs>>tin;
			s.push(tin);
		}
		
		
		
		
		
	//	cout<<"t.top()="<<s.top()<<endl;
		
		
		
		
		
		
		
		
		
		t="";
		strt>>t;
		
	}
	
	printf("%.1lf",s.top());
//	istringstream ss("123 23 4");
//	
////	cout<<ss.str()<<endl;
//	string a;
//	ss>>a;
//	cout<<a<<endl;
	return 0;
} 

------------------------


题目7:
题目：表达式转换 25 分难度：7-8
正文：
算术表达式有前缀表示法、中缀表示法和后缀表示法等形式。日常使用的算术表达式是采用中缀表示法，即二元运算符位于两个运算数中间。请设计程序将中缀表达式转换为后缀表达式。

### 输入格式:

输入在一行中给出不含空格的中缀表达式，可包含`+`、`-`、`*`、`\`以及左右括号`()`，表达式不超过20个字符。

### 输出格式:

在一行中输出转换后的后缀表达式，要求不同对象（运算数、运算符号）之间以空格分隔，但结尾不得有多余空格。

### 输入样例:
```in
2+3*(7-4)+8/4
```

### 输出样例:
```out
2 3 7 4 - * + 8 4 / +
```

答案：
///**
//求后缀表达式
//1。扫描字符串
//2.判断字符
//3.数字或者小数点，输出
//
//4.* / + - 把优先级大于等于本字符的弹出，直到自己遇到最小，或者栈底
//
//5.（ 优先级最低，直接入栈
//6.） 一直弹栈，直到遇到（ 括号 
//
//
//*/
//
//#include<iostream>
//#include<string.h>
//#include<stack>
//#include<map>
//using namespace std;
//map<char,int> priority;
//map<char ,int> Map; 
//stack<char> s;
//int main(){
//	Map['+']=0;
//	Map['-']=0;
//	Map['*']=1;
//	Map['/']=1;
//	Map['(']=-1;
//	
//	string str;
//	string str2;
//	cin>>str;
//	int len=str.length();
//	int flag=1;
//	for(int i=0;i<len;){
//		int hasnum=0;
//		while((str[i]>='0'&&str[i]<='9')||str[i+1]=='.'){
////			if(flag||str[i-1]=='.'||(str[i-1]>='0'&&str[i-1]<='9')){
////				flag=0; 
////				cout<<str[i];
////			}else if(!(str[i-1]>='0'&&str[i-1]<='9')&&str[i-1]!='.'){
////				cout<<" "<<str[i];
////			}	
//			hasnum=1;
//			str2+=str[i]; 
//			cout<<str[i];
//			if(str[i+1]=='.'){	
//				cout<<".";
//				str2+=str[i+1];
//				++i;
//			}
//			++i;
//		}
//		if(hasnum){
//			str2+=' ';
//			cout<<" ";
//		}
//		//字符弹出 
//		if(str[i]=='*'||str[i]=='/'||str[i]=='+'||str[i]=='-'){
//			while(!s.empty()&&Map[str[i]]<=Map[s.top()]){
//				str2+=(s.top());
//				str2+=' ';
////				if(flag){
////					flag=0; 
////					cout<<s.top();
////				}else{
////					cout<<" "<<s.top();
////				}	
//				cout<<s.top()<<" ";
//				s.pop();
//			}
//			s.push(str[i]);
//			++i;
//		}
//		if(str[i]=='(')
//		{
//			s.push(str[i]);
//			++i;
//		 }
//		 if(str[i]==')'){
//		 	while(s.top()!='('){
//		 		str2+=(s.top());
//		 		str2+=' ';
////		 		if(flag){
////		 			flag=0; 
////					cout<<s.top();
////				}else{
////					cout<<" "<<s.top();
////				}
//				cout<<s.top()<<" ";
//		 		s.pop();
//			 }
//			 s.pop();//(左括号弹出，不输出 
//		 	++i;
//		 }
//	}
//	while(!s.empty()){
//		str2+=(s.top());
//		str2+=' ';
//		cout<<s.top()<<" ";
////			cout<<" "<<s.top();
//		   s.pop();
//	}
////	cout<<"\n------------------\n";
////	cout<<str2<<endl;
//	//str2[str2.length()-1]='\0';
////	cout<<str2;
//	return 0;
//} 


/**
求后缀表达式
1。扫描字符串
2.判断字符
3.数字或者小数点，输出

4.* / + - 把优先级大于等于本字符的弹出，直到自己遇到最小，或者栈底

5.（ 优先级最低，直接入栈
6.） 一直弹栈，直到遇到（ 括号 


*/

#include<iostream>
#include<string.h>
#include<stack>
#include<map>
using namespace std;
map<char,int> priority;
map<char ,int> Map; 
stack<char> s;
int main(){
	Map['+']=0;
	Map['-']=0;
	Map['*']=1;
	Map['/']=1;
	Map['(']=-1;
	
	string str;
	string str2;
	cin>>str;
	int len=str.length();
	int flag=1;
	for(int i=0;i<len;){
		int hasnum=0;
		while((str[i]>='0'&&str[i]<='9')||str[i+1]=='.'){
//			if(flag||str[i-1]=='.'||(str[i-1]>='0'&&str[i-1]<='9')){
//				flag=0; 
//				cout<<str[i];
//			}else if(!(str[i-1]>='0'&&str[i-1]<='9')&&str[i-1]!='.'){
//				cout<<" "<<str[i];
//			}	
			hasnum=1;
			str2+=str[i]; 
			if(str[i+1]=='.'){	
				//cout<<".";
				str2+=str[i+1];
				++i;
			}
			++i;
		}
		if(hasnum){
			str2+=' ';
		}
		//字符弹出 
		if(  (str[i]=='*'||str[i]=='/'||str[i]=='+'||str[i]=='-') ){
			if(i==0||(str[i-1]=='*'||str[i-1]=='/'||str[i-1]=='+'||str[i-1]=='-'||str[i-1]=='(')){
				if(str[i]=='-'){
					str2+=str[i];
				}
				//cout<<"q"<<str[i]<<endl; 
				++i;
			}else{
				
				while(!s.empty()&&Map[str[i]]<=Map[s.top()]){
					str2+=(s.top());
					str2+=' ';
	//				if(flag){
	//					flag=0; 
	//					cout<<s.top();
	//				}else{
	//					cout<<" "<<s.top();
	//				}	
					s.pop();
				}
				s.push(str[i]);
				++i;
			}
			
			
		}
		//else if((str[i]=='*'||str[i]=='/'||str[i]=='+'||str[i]=='-')&&(str[i-1]=='*'||str[i-1]=='/'||str[i-1]=='+'||str[i-1]=='-')){
		//	cout<<"q"<<str[i]<<endl;
		//	str2+=str[i];
	///	}
		if(str[i]=='(')
		{
			s.push(str[i]);
			++i;
		 }
		 if(str[i]==')'){
		 	while(s.top()!='('){
		 		str2+=(s.top());
		 		str2+=' ';
//		 		if(flag){
//		 			flag=0; 
//					cout<<s.top();
//				}else{
//					cout<<" "<<s.top();
//				}
		 		s.pop();
			 }
			 s.pop();//(左括号弹出，不输出 
		 	++i;
		 }
	}
	while(!s.empty()){
		str2+=(s.top());
		str2+=' ';
//			cout<<" "<<s.top();
		   s.pop();
	}
//	cout<<"\n------------------\n";
//	cout<<str2<<endl;
	str2[str2.length()-1]='\0';
	cout<<str2;
	return 0;
} 

------------------------


题目8:
题目：汉诺塔问题 10 分难度：7-4
正文：
汉诺塔是一个源于印度古老传说的益智玩具。据说大梵天创造世界的时候做了三根金刚石柱子，在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘，大梵天命令僧侣把圆盘移到另一根柱子上，并且规定：在小圆盘上不能放大圆盘，每次只能移动一个圆盘。当所有圆盘都移到另一根柱子上时，世界就会毁灭。

![题图1.jpg](~/eac25442-22c9-4b87-8cf8-e8a69ea0cf02.jpg)

请编写程序，输入汉诺塔圆片的数量，输出移动汉诺塔的步骤。

#### 输入格式
> 圆盘数
> 起始柱 目的柱 过度柱

#### 输出格式
> 移动汉诺塔的步骤  
> 每行显示一步操作，具体格式为：  
> 盘片号: 起始柱 -> 目的柱  
> 其中盘片号从 1 开始由小到大顺序编号。

#### 输入样例
```in
3
a c b
```
#### 输出样例

```out
1: a -> c
2: a -> b
1: c -> b
3: a -> c
1: b -> a
2: b -> c
1: a -> c
```


答案：
/*
汉诺塔是一个源于印度古老传说的益智玩具。
据说大梵天创造世界的时候做了三根金刚石柱子，
在一根柱子上从下往上按照大小顺序摞着64片黄金圆盘，
大梵天命令僧侣把圆盘移到另一根柱子上，并且规定：在小圆盘上不能放大圆盘，
每次只能移动一个圆盘。当所有圆盘都移到另一根柱子上时，世界就会毁灭。

*/ 

#include<iostream>
using namespace std;
int n;
char a,b,c;

void han(int n,char a,char b,char c){
	if(n==1){
		cout<<n<<": "<<a<<" -> "<<b<<endl;
	}else{
		han(n-1,a,c,b);
		cout<<n<<": "<<a<<" -> "<<b<<endl;
		han(n-1,c,b,a);
	}
}

int main(){
	cin>>n;
	cin>>a>>b>>c;
	han(n,a,b,c); 
	
	return 0;
} 

------------------------


题目9:
题目：约瑟夫环问题-hebust 10 分难度：7-9
正文：
约瑟夫环问题

约瑟夫环是一个数学的应用问题：已知n个人（以编号a，b，c...分别表示）围坐在一张圆桌周围。从编号为1的人开始报数，数到m的那个人出列；他的下一个人又从1开始报数，数到m的那个人又出列；依此规律重复下去，直到圆桌周围的人全部出列。

### 输入格式:
固定为2行，第一行为m，第二行为n个人的名称列表，用英文字母代表，元素直接使用英文逗号 ， 分开

### 输出格式:
一行，为出列元素序列，元素之间使用英文逗号 ， 分开【注意：末尾元素后没有逗号】

### 输入样例:

在这里给出一组输入。例如：

```in
3
a,b,c,d,e,f,g
```

### 输出样例:

在这里给出相应的输出。例如：

```out
c,f,b,g,e,a,d
```

答案：
#include<iostream>
#include<string.h>
#include<queue> 
using namespace std;
int num=0;
char* split(string str,char reg){
	int l=str.length();
	char* res=new char[l];
	for(int i=0;i<l;++i){
		if(str[i]!=reg){	
			res[num++]=str[i];
		}
	}
	return res;
}

queue<char>q;
int main(){
	
	int m;
	int n;
	cin>>m;
	
	string str;
	cin>>str;
	getchar();
	char *t=split(str,',');
	
	for(int i=0;i<num;++i){
		q.push(*(t+i));
	}
	
	int falg=1;
	while(!q.empty()){
		for(int i=0;i<m-1;++i){
			if(!q.empty()){
				q.push(q.front());
				q.pop();
			}
		}
	
		char c=q.front();q.pop();
		if(falg){
			cout<<c;
			falg=0;
		}else{
			cout<<","<<c;
		}
		
	}
		
	return 0;
}

------------------------


题目10:
题目：两个有序链表序列的交集 20 分难度：7-10
正文：
已知两个非降序链表序列S1与S2，设计函数构造出S1与S2的交集新链表S3。

### 输入格式:

输入分两行，分别在每行给出由若干个正整数构成的非降序序列，用-1$表示序列的结尾（-1$不属于这个序列）。数字用空格间隔。

### 输出格式:

在一行中输出两个输入序列的交集序列，数字间用空格分开，结尾不能有多余空格；若新链表为空，输出`NULL`。

### 输入样例:
```in
1 2 5 -1
2 4 5 8 10 -1
```

### 输出样例:
```out
2 5
```

答案：
#include<iostream>
#include<queue>
using namespace std;

int main()
{
	queue<int> a,b;
	int x,cnt=0;
	while(cin >>x && x!=-1)
	a.push(x);
	while(cin >> x && x!= -1)
	b.push(x);
	bool flag = true;
	while(!a.empty() && !b.empty() )
	{
		if(a.front() == b.front())
		{
			if(flag)
			{
				flag = false;
				cout << a.front();
			}
			else 
			{
				cout <<" " << a.front();
			}
			a.pop();
			b.pop();
			cnt ++;
		}
		else if(a.front() > b.front())
		{
			while(a.front() > b.front() && !b.empty())
			b.pop();
		}
		else 
		{
			while(a.front() < b.front() && !a.empty())
			a.pop();
		}
	}
	if(!cnt)
	cout << "NULL";
    return 0;
}

------------------------


题目11:
题目：列车调度 25 分难度：7-11
正文：
火车站的列车调度铁轨的结构如下图所示。


![](~/188)

两端分别是一条入口（Entrance）轨道和一条出口（Exit）轨道，它们之间有`N`条平行的轨道。每趟列车从入口可以选择任意一条轨道进入，最后从出口离开。在图中有9趟列车，在入口处按照{8，4，2，5，3，9，1，6，7}的顺序排队等待进入。如果要求它们必须按序号递减的顺序从出口离开，则至少需要多少条平行铁轨用于调度？

### 输入格式：

输入第一行给出一个整数`N` (2 \le$ `N` \le 10^5$)，下一行给出从1到`N`的整数序号的一个重排列。数字间以空格分隔。

### 输出格式：

在一行中输出可以将输入的列车按序号递减的顺序调离所需要的最少的铁轨条数。

### 输入样例：
```in
9
8 4 2 5 3 9 1 6 7
```

### 输出样例：
```out
4
```

答案：
#include<iostream>
using namespace std;
int a[(int)1e5+1];
int ans;
int main()
{   
    int n,t;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> t;
        if(!i || t > a[ans-1]  )
        {
            a[ans++] = t;
        }
        else 
        {
            int pos = lower_bound(a,a+ans,t)-a;
            a[pos] = t;
        }
    }
    cout << ans <<endl;
    return 0;
}

------------------------


题目12:
题目：二分查找 25 分难度：7-12
正文：
请实现有重复数字的有序数组的二分查找。

输出在数组中第一个大于等于查找值的位置，如果数组中不存在这样的数，则输出数组长度加一。

### 输入格式:

输入第一行有两个数，第一个数为数组长度n（≤10^6），第二个数为需要查找的数。

接下来有n个整数，以空格或换行符分隔。

### 输出格式:

输出待查找的数的位置。

### 输入样例:


```in
5 4
1 2 4 4 5
```

### 输出样例:


```out
3
```

### 样例解释:
```
有5个数，查找4出现的位置，4第一次出现在第3个位置，所以输出3。
```


答案：
#include<iostream>
using namespace std;
int a[1000005];
int f(int val,int size)
{
    int left = 0, right = size - 1, mid;
    while(left <= right) 
    {
        mid = left + (right - left) / 2;
        if(a[mid] >= val) 
            right = mid - 1;
        else 
            left = mid + 1 ;
    }
    return left;
}
int main()
{   
    int n,m;
    scanf("%d %d\n",&n,&m);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int pos = f(m,n);
    if(pos == n)
    cout << n+1 <<endl;
    else 
    cout << pos+1 <<endl;
   // system("pause");
}

------------------------


题目13:
题目：建立与遍历二叉树 25 分难度：7-13
正文：
以字符串的形式定义一棵二叉树的先序序列，若字符是‘#’, 表示该二叉树是空树，否则该字符是相应结点的数据元素。读入相应先序序列，建立**二叉链式存储结构**的二叉树，然后中序遍历该二叉树并输出结点数据。
### 输入格式:

字符串形式的先序序列（即结点的数据类型为单个字符）

### 输出格式:

中序遍历结果

### 输入样例:

在这里给出一组输入。例如：

```in
ABC##DE#G##F###
```

### 输出样例:

在这里给出相应的输出。例如：

```out
CBEGDFA
```


答案：
#include<iostream>
using namespace std;
typedef char ElemType;
typedef struct BitNode{
	ElemType date;
	struct BitNode* left;
	struct BitNode* right;
}*trrePtr;
void init(trrePtr &root){
	char c;
	cin>>c;
	if(c=='#'){
		root=NULL;
	}else{
		root=new BitNode;
		root->date=c;
		init(root->left);
		init(root->right);
	} 
}
void midShow(trrePtr root){
	if(root){
		midShow(root->left);	
		cout<<root->date;
		midShow(root->right);
	}
}
int main(){
	trrePtr root=NULL;
	init(root);
	midShow(root);
	return 0;
} 

------------------------


题目14:
题目：根据后序和中序遍历输出先序遍历 25 分难度：7-15
正文：
本题要求根据给定的一棵二叉树的后序遍历和中序遍历结果，输出该树的先序遍历结果。

### 输入格式:

第一行给出正整数$N$(\le 30$)，是树中结点的个数。随后两行，每行给出$N$个整数，分别对应后序遍历和中序遍历结果，数字间以空格分隔。题目保证输入正确对应一棵二叉树。

### 输出格式:

在一行中输出`Preorder: `以及该树的先序遍历结果。数字间有1个空格，行末不得有多余空格。

### 输入样例:
```in
7
2 3 1 5 7 6 4
1 2 3 4 5 6 7
```

### 输出样例:
```out
Preorder: 4 1 3 2 6 5 7
```

答案：
#include<iostream>
using namespace std;
#define MAX 33
int numh[MAX]={0};
int numz[MAX]={0};
void qian(int lh,int rh,int lz,int rz){
	if(lh>rh||lz>rz){
		return;	
	}
		cout<<" "<<numh[rh];
		int i;
		for(i=lz;i<=rz;++i){
			if(numz[i]==numh[rh]){
				qian(lh,lh+(i-lz-1),lz,i-1);
				qian(lh+(i-lz),rh-1,i+1,rz);
				return;
			}
		}
} 
 
int main(){
 	int n;
 	cin>>n;
 	int t;
 	for(int i=0;i<n;++i){
 		cin>>t;
 		numh[i]=t;
	 }
	 for(int i=0;i<n;++i){
	 	cin>>t;
	 	numz[i]=t;
	 }
	 cout<<"Preorder:";
	 qian(0,n-1,0,n-1);
 	
 	return 0;
}

------------------------


题目15:
题目：是否同一棵二叉搜索树 25 分难度：7-16
正文：
给定一个插入序列就可以唯一确定一棵二叉搜索树。然而，一棵给定的二叉搜索树却可以由多种不同的插入序列得到。例如分别按照序列{2, 1, 3}和{2, 3, 1}插入初始为空的二叉搜索树，都得到一样的结果。于是对于输入的各种插入序列，你需要判断它们是否能生成一样的二叉搜索树。

### 输入格式:

输入包含若干组测试数据。每组数据的第1行给出两个正整数$N$ (\le 10$)和$L$，分别是每个序列插入元素的个数和需要检查的序列个数。第2行给出$N$个以空格分隔的正整数，作为初始插入序列。最后$L$行，每行给出$N$个插入的元素，属于$L$个需要检查的序列。

简单起见，我们保证每个插入序列都是1到$N$的一个排列。当读到$N$为0时，标志输入结束，这组数据不要处理。

### 输出格式:

对每一组需要检查的序列，如果其生成的二叉搜索树跟对应的初始序列生成的一样，输出“Yes”，否则输出“No”。

### 输入样例:
```in
4 2
3 1 4 2
3 4 1 2
3 2 4 1
2 1
2 1
1 2
0
```

### 输出样例:
```out
Yes
No
No
```

**鸣谢青岛大学周强老师补充测试数据！**

答案：
#include <iostream>
using namespace std;
struct Node{
    int data;
    Node * left;
    Node * right;
};
typedef Node* Tree;
Tree insert(Tree BT,int x){//创建树
    if(!BT){
        BT=new(Node);
        BT->data=x;
        BT->left=BT->right=NULL;
    }
    else if(x<BT->data)
        BT->left=insert(BT->left,x);
    else if(x>BT->data)
        BT->right=insert(BT->right,x);
    return BT;
}
bool judgeidentical(Tree a,Tree b){//判断两棵树是否一致
    if(a==NULL&&b==NULL)
        return true;
    else if((a!=NULL&&b==NULL)||(a==NULL&&b!=NULL))
        return false;
    else if(a->data==b->data)
        return judgeidentical(a->left,b->left)&&judgeidentical(a->right,b->right);
    return false;
}
int main(){
    int n,l,x;
    while(cin>>n&&n){
        cin>>l;
        Tree BT=NULL;
        for(int i=0;i<n;i++){
            cin>>x;
            BT=insert(BT,x);
        }
        for(int i=0;i<l;i++){
            Tree temp=NULL;
            for(int i=0;i<n;i++){
                cin>>x;
                temp=insert(temp,x);
            }
            judgeidentical(temp,BT)?cout<<"Yes"<<endl:cout<<"No"<<endl;
        }
    }
    return 0;
}


------------------------


题目16:
题目：堆中的路径 25 分难度：7-17
正文：
将一系列给定数字插入一个初始为空的小顶堆`H[]`。随后对任意给定的下标`i`，打印从`H[i]`到根结点的路径。

### 输入格式:

每组测试第1行包含2个正整数$N$和$M$(\le 1000$)，分别是插入元素的个数、以及需要打印的路径条数。下一行给出区间[-10000, 10000]内的$N$个要被插入一个初始为空的小顶堆的整数。最后一行给出$M$个下标。

### 输出格式:

对输入中给出的每个下标`i`，在一行中输出从`H[i]`到根结点的路径上的数据。数字间以1个空格分隔，行末不得有多余空格。

### 输入样例:
```in
5 3
46 23 26 24 10
5 4 3
```

### 输出样例:
```out
24 23 10
46 23 10
26 10
```

答案：
#include <stdio.h>
#define MAX 1001	//堆在存储的时候根结点从1开始，于是这里是1001。 
#define MINH -10001
int nums[MAX];
int size=0;
void insert(int in){
	
	int i=++size;
	for(;in<nums[i/2];i/=2){
		nums[i]=nums[i/2];
	}
	nums[i]=in; 
}
int main(){
	 nums[0]=-10001;//哨兵 
	 int n,m,t;
	 scanf("%d %d", &n, &m);
	 
	 for(int i=0;i<n;++i){
	 	
	 	scanf("%d", &t);
	 	insert(t);
	 }

	 while(m--){
	 	scanf("%d",&t);
	 int   falg=1;
	 	while(t){
	 		if(falg){
	 			falg=0;
			 	printf("%d",nums[t]);
			 }else printf(" %d",nums[t]);
	 		t/=2;
		 }
		 printf("\n");
	 }
	return 0;
} 

------------------------


题目17:
题目：构造哈夫曼树 20 分难度：7-18
正文：
输入一些单词及其出现的频度，构造一棵哈夫曼树，输出哈夫曼编码的平均码长。

### 输入格式:

输入N，表示有N个单词，以下N行，每一行表示一个单词及其频度。

### 输出格式:

平均码长用浮点数类型表示，保留小数点后5位。

### 输入样例:

在这里给出一组输入。例如：

```in
11
The 1192
of 677
a 541
to 518
and 462
that 242
he 195
is 190
for 157
His 138
are 124
```

### 输出样例:

在这里给出相应的输出。例如：

```out
3.10437
```


答案：
import java.text.DecimalFormat;
import java.util.ArrayDeque;
import java.util.Scanner;

/**
 * JAVA中的对象类型本质上应该叫做 对象指针 类型。那么传统的对象类型呢？在JAVA里已经不见了踪影！
 * 既然没有了传统的对象类型，那么 对象指针变量 前面的*也就可以不要了。对象指针变量也就可以简称为对象变量了，
 * 反正也不会和其它概念混淆！ 所有的对象变量都是指针，没有非指针的对象变量，想不用指针都不行，这就是指针的泛化和强化。
 * 不叫指针了，就叫对象变量，这就是概念上的淡化和弱化。 没有了指针的加减运算，也没有了*、->等运算符，这是对指针的简单化。
 */
//测试时复制还是指针指向
//        Node node1=new Node();
//        Node node2=new Node();
//        node1.parent=node2;
//        if (node2.hashCode()==node1.parent.hashCode()){
//            System.out.println("是指向");
//        }else {
//            System.out.println("是复制");
//        }

    
public class Main {
    public static void main(String[] args) {
        //输入N，表示有N个单词，以下N行，每一行表示一个单词及其频度。
        Scanner scanner=new Scanner(System.in);
        int n=scanner.nextInt();
        Array array=new Array(n);
        for (int i=0;i<n;i++){
            Node node=new Node();
            node.data=scanner.next();
            node.frequency=scanner.nextInt();
            array.add(node);
        }
        System.out.println(new DecimalFormat(".00000").format(array.calculate(array.create())));

    }
    private static class Array{
        Node[] array;
        //此时数组中node的个数
        int current=0;
        public Array(int n) {
            array=new Node[2*n];
        }
        //向数组中加入结点
        public void add(Node ... nodes){
            if (nodes.length+current>array.length){
                System.out.println("数组溢出");
            }
            for (Node node:nodes){
                array[current++]=node;
            }
        }
        //找到两个最小频率的结点
        public Node[] findMin(){
            if (array.length<2){
                System.out.println("数组长度过短");
            }
            Node node1=null;
            Node node2=null;
            Node[] temp=new Node[2];
            for (int i=0;i<current;i++) {
                if (array[i].flag == false) {
                    if (node1 == null ) {
                        node1 = array[i];
                    } else if (node2 == null ) {
                        node2 = array[i];
                    } else if (node1.frequency > array[i].frequency||node2.frequency > array[i].frequency) {
                       if (node2.frequency>node1.frequency){
                           node2=array[i];
                       }else {
                           node1=array[i];
                       }
                    }
                }
            }

            temp[0]=node1;
            temp[1]=node2;
            return temp;
        }
        //建树
        public Node create(){
            for (int i=0;i<current;i++){
                Node[] temp=findMin();
                if (temp[0]==null&&temp[1]!=null){
                    return temp[1];
                }else if (temp[1]==null&&temp[0]!=null){
                    return temp[0];
                }else if (temp[1]!=null&&temp[0]!=null){
                    temp[0].flag=true;
                    temp[1].flag=true;
                    Node node=new Node(temp[0].frequency+temp[1].frequency);
                    node.lchild=temp[0];
                    node.rchild=temp[1];
                    add(node);
                }else {
                    System.out.println("数组中没数！！！");
                    return null;
                }
            }
            return null;
        }

        /**
         * 计算平均码长
         * @param root 根节点
         * @return 平均码长
         */
        public float calculate(Node root){
            float total=0;
            //总频率
            float count=0;
            ArrayDeque<Node> arrayDeque=new ArrayDeque<>();
            arrayDeque.push(root);
            root.floor=0;
            while (!arrayDeque.isEmpty()){
                Node temp=arrayDeque.poll();
                if (temp.isLeaf()){
                    total+=temp.floor*temp.frequency;
                    count+=temp.frequency;
                }
                if (temp.lchild!=null){
                    temp.lchild.floor=temp.floor+1;
                    arrayDeque.push(temp.lchild);
                }
                if (temp.rchild!=null){
                    temp.rchild.floor=temp.floor+1;
                    arrayDeque.push(temp.rchild);
                }
            }
            return total/count;

        }

    };
    //建立node结点类
    private static class Node{
        String data=null;
        int  frequency;
        Node lchild=null;
        Node rchild=null;
        //表示是否被遍历
        Boolean flag=false;
        //存储层数
        Integer floor=null;
        public Node() {
        }

        public Node(int frequency) {
            this.frequency = frequency;
        }

        /**
         * 判断是否是叶子结点
         * @return 是则返回true，不是则返回false
         */
        public boolean isLeaf(){
            if (lchild==null&&lchild==null){
                return true;
            }else return false;
        }
    }
}



------------------------


题目18:
题目：部落 25 分难度：7-19
正文：
在一个社区里，每个人都有自己的小圈子，还可能同时属于很多不同的朋友圈。我们认为朋友的朋友都算在一个部落里，于是要请你统计一下，在一个给定社区中，到底有多少个互不相交的部落？并且检查任意两个人是否属于同一个部落。

### 输入格式：

输入在第一行给出一个正整数$N$（\le 10^4$），是已知小圈子的个数。随后$N$行，每行按下列格式给出一个小圈子里的人：

$K$ $P[1] $P[2] \cdots$ $P[K]

其中$K$是小圈子里的人数，$P[i]（$i=1, \cdots , K$）是小圈子里每个人的编号。这里所有人的编号从1开始连续编号，最大编号不会超过$10^4$。

之后一行给出一个非负整数$Q$（\le 10^4$），是查询次数。随后$Q$行，每行给出一对被查询的人的编号。


### 输出格式：

首先在一行中输出这个社区的总人数、以及互不相交的部落的个数。随后对每一次查询，如果他们属于同一个部落，则在一行中输出`Y`，否则输出`N`。

### 输入样例：
```in
4
3 10 1 2
2 3 4
4 1 5 7 8
3 9 6 4
2
10 5
3 7
```

### 输出样例：
```out
10 2
Y
N
```

答案：
#include<iostream>
using namespace std;
#define MAX 10003

int size=0;
int n;
int people[MAX]={0};
int fu[MAX];

int qure(int son){
	if(son==fu[son])return son;
	
	return fu[son]=qure(fu[son]);
}
void join(int a,int b){
	int aa=qure(a);
	int bb=qure(b);
	if(aa!=bb){
		fu[aa]=bb;
		size++;
	}
}
int getpeople(){
	int res=0;
	for(int i=1;i<=MAX;++i){
		if(people[i]>0){
			res++;
		}
	}
	return res;
}
void init(){
	
	for(int i=0;i<MAX;++i){
		fu[i]=i;
	}
}

int main(){
	
	int m,t,q;
	cin>>n;
	init();
	for(int i=0;i<n;++i){
		cin>>m;
		q=-1;
		for(int j=0;j<m;++j){
			cin>>t;
			people[t]=1;
				if(q!=-1)
					join(q,t);
			q=t;
		}
	}
	cout<<getpeople()<<" ";
	int numss=0;
	for(int i=1;i<=getpeople();++i){
//		cout<<"fu["<<i<<"]="<<fu[i]<<endl;
		if(fu[i]==i){
			numss++;
		}
	}
	cout<<numss<<endl;
	cin>>n;
	int a,b;
	while(n--){
		cin>>a>>b;
		if(qure(a)==qure(b)){
			cout<<"Y\n";
		}else{
			cout<<"N\n";
		}
	}
	
	return 0;
} 

------------------------


题目19:
题目：分而治之 25 分难度：7-20
正文：
分而治之，各个击破是兵家常用的策略之一。在战争中，我们希望首先攻下敌方的部分城市，使其剩余的城市变成孤立无援，然后再分头各个击破。为此参谋部提供了若干打击方案。本题就请你编写程序，判断每个方案的可行性。

### 输入格式：

输入在第一行给出两个正整数 N 和 M（均不超过10 000），分别为敌方城市个数（于是默认城市从 1 到 N 编号）和连接两城市的通路条数。随后 M 行，每行给出一条通路所连接的两个城市的编号，其间以一个空格分隔。在城市信息之后给出参谋部的系列方案，即一个正整数 K （\le$ 100）和随后的 K 行方案，每行按以下格式给出：

```
Np v[1] v[2] ... v[Np]
```

其中 `Np` 是该方案中计划攻下的城市数量，后面的系列 `v[i]` 是计划攻下的城市编号。

### 输出格式：

对每一套方案，如果可行就输出`YES`，否则输出`NO`。

### 输入样例：
```in
10 11
8 7
6 8
4 5
8 4
8 1
1 2
1 4
9 8
9 1
1 10
2 4
5
4 10 3 8 4
6 6 1 7 5 4 9
3 1 8 4
2 2 8
7 9 8 7 6 5 4 2
```

### 输出样例：
```out
NO
YES
YES
NO
NO
```


答案：
#include<iostream>
#include<string.h>
#include<vector>
#define MAX 10000+5
using namespace std;
vector<int> map[MAX];
int du[MAX] = { 0 };
int du2[MAX] = { 0 };
int main() {
	int n, m;
	cin >> n >> m;
	int a, b;
	while (m--) {
		cin >> a >> b;
		du[a]++;
		du[b]++;
		map[a].push_back(b);
		map[b].push_back(a);
	}
	int nn;
	cin >> nn;
	int t;
	while (nn--) {
		memcpy(du2, du, sizeof(du));
		cin >> m;
		while (m--) {
			cin >> t;
			du2[t] = 0;
			int sizemap = map[t].size();
			for (int i = 0; i < sizemap; ++i)
				du2[map[t][i]]--;
		}
		int falg = 1;
		for (int i = 1; i <= n; ++i) {
			if (du2[i] > 0)
				falg = 0;
		}
		if (falg)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

------------------------


题目20:
题目：图着色问题 25 分难度：7-21
正文：
图着色问题是一个著名的NP完全问题。给定无向图$G = (V, E)，问可否用$K$种颜色为$V$中的每一个顶点分配一种颜色，使得不会有两个相邻顶点具有同一种颜色？

但本题并不是要你解决这个着色问题，而是对给定的一种颜色分配，请你判断这是否是图着色问题的一个解。


### 输入格式：

输入在第一行给出3个整数$V$（$0 < V \le 500$）、$E$（\ge 0$）和$K$（$0 < K \le V$），分别是无向图的顶点数、边数、以及颜色数。顶点和颜色都从1到$V$编号。随后$E$行，每行给出一条边的两个端点的编号。在图的信息给出之后，给出了一个正整数$N$（\le 20$），是待检查的颜色分配方案的个数。随后$N$行，每行顺次给出$V$个顶点的颜色（第$i$个数字表示第$i$个顶点的颜色），数字间以空格分隔。题目保证给定的无向图是合法的（即不存在自回路和重边）。

### 输出格式：

对每种颜色分配方案，如果是图着色问题的一个解则输出`Yes`，否则输出`No`，每句占一行。


### 输入样例：
```in
6 8 3
2 1
1 3
4 6
2 5
2 4
5 4
5 6
3 6
4
1 2 3 3 1 2
4 5 6 6 4 5
1 2 3 4 5 6
2 3 4 2 3 4
```

### 输出样例：
```out
Yes
Yes
No
No
```

答案：
#include<iostream>
#include<string.h>
#include<set>
using namespace std;
#define MAX 505
int map[MAX][MAX];
int vis[MAX];
int color[MAX];
int cnt=0;//颜色的个数

void iscan(int v){
	for(int i=0;i<v;++i){
		for(int j=0;j<v;++j){
			if(i!=j&&map[i][j]!=0&&color[i]==color[j]){
				cout<<"No\n";
				return;
				
			}
		}
	}
	cout<<"Yes\n";
}
int main(){
	int v,e,k;
	cin>>v>>e>>k;
	int a,b;
    set<int> se;
	for(int i=0;i<e;++i){
		cin>>a>>b;
		a--;
		b--;
		map[a][b]=map[b][a]=1;
	}

    int n;
	cin>>n;
	int t;
	while(n){
		n-=1;
        se.clear();//清除
		memset(vis,0,sizeof(vis));
		memset(color,0,sizeof(vis));
		
		for(int i=0;i<v;++i){
			cin>>t;
			se.insert(color[i]=t);
		}
		
		if(se.size()!=k){
            cout<<"No\n";
        }
		else{
			int falg=1;
			for(int xx=0;xx<v;++xx){
				for(int yy=0;yy<v;++yy){
					if(xx!=yy&&map[xx][yy]!=0&&color[xx]==color[yy]){
						falg=0;
						break;
					}
				}
			}
			if(falg==1){
				cout<<"Yes\n";
			}else{
                cout<<"No\n";
            }
        }
	}
	return 0;
} 

------------------------


题目21:
题目：深入虎穴 25 分难度：7-22
正文：
著名的王牌间谍 007 需要执行一次任务，获取敌方的机密情报。已知情报藏在一个地下迷宫里，迷宫只有一个入口，里面有很多条通路，每条路通向一扇门。每一扇门背后或者是一个房间，或者又有很多条路，同样是每条路通向一扇门…… 他的手里有一张表格，是其他间谍帮他收集到的情报，他们记下了每扇门的编号，以及这扇门背后的每一条通路所到达的门的编号。007 发现不存在两条路通向同一扇门。

内线告诉他，情报就藏在迷宫的最深处。但是这个迷宫太大了，他需要你的帮助 —— 请编程帮他找出距离入口最远的那扇门。

### 输入格式：

输入首先在一行中给出正整数 $N$（< 10^5$），是门的数量。最后 $N$ 行，第 $i$ 行（$1\le i \le N$）按以下格式描述编号为 $i$ 的那扇门背后能通向的门：

```
K D[1] D[2] ... D[K]
```
其中 `K` 是通道的数量，其后是每扇门的编号。

### 输出格式：

在一行中输出距离入口最远的那扇门的编号。题目保证这样的结果是唯一的。

### 输入样例：
```in
13
3 2 3 4
2 5 6
1 7
1 8
1 9
0
2 11 10
1 13
0
0
1 12
0
0
```

### 输出样例：
```out
12
```


答案：
#include<iostream>
#include<queue>
#include<string.h>
#include<vector>
using namespace std;
#define MAX 100005
int vis[MAX];
vector<int> map[MAX];

int main(){
	int n;
	cin>>n;
	//记录入口，没有人通向它 
	int m,t;
	
	for(int i=1;i<=n;++i){
		vis[i]=1;
	}
	for(int i=1;i<=n;++i){
		cin>>m;
		for(int j=0;j<m;++j){
			cin>>t;
			vis[t]=0;
			map[i].push_back(t);
		//	map[t].push_back(i);
		}
	}
	


	int max=0;
	queue<int> q;
	
	int ru=-1;
	for(int i=1;i<=n;++i){
		if(vis[i]==1){
			ru=i;
			vis[i]=0; 
			break;
		}
	}
	q.push(ru);
	vis[ru]=1;
	int temp;
	
	while(!q.empty()){
		temp=q.front();
		q.pop();
	
		for(int i=0;i<map[temp].size();++i){
			if(!vis[map[temp][i]]){
				vis[map[temp][i]]=1;
				q.push(map[temp][i]);
				
			}
		}
	}
	cout<<temp<<endl;
	
	
	return 0;
} 

------------------------


题目22:
题目：公路村村通 30 分难度：7-23
正文：
现有村落间道路的统计数据表中，列出了有可能建设成标准公路的若干条道路的成本，求使每个村落都有公路连通所需要的最低成本。

### 输入格式:

输入数据包括城镇数目正整数$N$（\le 1000$）和候选道路数目$M$（\le 3N$）；随后的$M$行对应$M$条道路，每行给出3个正整数，分别是该条道路直接连通的两个城镇的编号以及该道路改建的预算成本。为简单起见，城镇从1到$N$编号。

### 输出格式:

输出村村通需要的最低成本。如果输入数据不足以保证畅通，则输出-1$，表示需要建设更多公路。

### 输入样例:
```in
6 15
1 2 5
1 3 3
1 4 7
1 5 4
1 6 2
2 3 4
2 4 6
2 5 2
2 6 6
3 4 6
3 5 1
3 6 1
4 5 10
4 6 8
5 6 3
```

### 输出样例:
```out
12
```

答案：
#include<iostream>
using namespace std;
#define INF 0x3f3f3f3f
int n,m;
int dic[1005]={0};
int map[1005][1005]={0};
int gets(){
	int res,cont,tmin,indmin;
	res=cont=0;
	for(int i=1;i<=n;++i){
		dic[i]=map[1][i];//默认初始为1号节点 ，即默认把1号放进铺设集合 
	} 
	
	for(int i=2;i<=n;++i){//一共执行n-1次最小值 才能把所有的点加入集合 
		tmin=INF;//最小值 
		for(int j=2;j<=n;++j){
			//find min
			if(dic[j]<tmin&&dic[j]!=0){
				tmin=dic[j];
				indmin=j;//下标 
			}
		}
		// min
		if(tmin!=INF){
			dic[indmin]=0;
			res+=tmin;
			cont++; 
		//修改  dic[min][j]  集合外到集合的距离 
			for(int j=2;j<=n;++j){
				if(map[indmin][j]<dic[j])
					dic[j]=map[indmin][j];
			}
		
		}
		
	}
	return cont==n-1?res:-1;//n个节点加入集合的次数一共为n-1次 
	
}

void init()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			map[i][j]=INF;
		}
	}
}
int main(){
	cin>>n>>m;
	init();
	int a,b,val;
	for(int i=0;i<m;++i){
		cin>>a>>b>>val;
		map[a][b]=map[b][a]=val;
	}	
	
	int res=gets();
	cout<<res<<endl;
	return 0;
} 

------------------------


题目23:
题目：最短路径 20 分难度：7-24
正文：
给定一个有N个顶点和E条边的无向图，顶点从0到N?1编号。请判断给定的两个顶点之间是否有路径存在。如果存在，给出最短路径长度。
这里定义顶点到自身的最短路径长度为0。
进行搜索时，假设我们总是从编号最小的顶点出发，按编号递增的顺序访问邻接点。

### 输入格式:

输入第1行给出2个整数N(0<N≤10)和E，分别是图的顶点数和边数。
随后E行，每行给出一条边的两个顶点。每行中的数字之间用1空格分隔。
最后一行给出两个顶点编号i，j（0≤i,j<N）,i和j之间用空格分隔。

### 输出格式:

如果i和j之间存在路径，则输出"The length of the shortest path between i and j is X."，X为最短路径长度，
否则输出"There is no path between i and j."。

### 输入样例1:



```in
7 6
0 1
2 3
1 4
0 2
1 3
5 6
0 3
```

### 输出样例1:



```out
The length of the shortest path between 0 and 3 is 2.
```
### 输入样例2:



```in
7 6
0 1
2 3
1 4
0 2
1 3
5 6
0 6
```

### 输出样例2:



```out
There is no path between 0 and 6.
```


答案：
#include<iostream>
#include<vector>
#include<string.h>
#include<queue> 
using namespace std;
int n,e,b1,b2;
int vis[50]={0};
int len[50]={0};
vector<vector<int> > v;

int bfs(int bs,int be){
 	if(bs==be){
         return 0;
     }
    queue<int> q;
	
	q.push(bs);
	vis[bs]=1;
	len[bs]=0;
    int t=0;
    int size=0;
	while(!q.empty()){
		 t=q.front();q.pop();
		size=v[t].size();
		for(int i=0;i<size;++i){
			if(!vis[v[t][i]]){
				q.push(v[t][i]);
				len[v[t][i]]=len[t]+1;
				vis[v[t][i]]=1;
			}
			if(v[t][i]==be){
				return len[v[t][i]];
			}
		}
	}
	//if(vis[be]){
//		return len[be];
//	}
	
	return -1;
}

int main(){
	ios::sync_with_stdio(false);
	cin>>n>>e;
	v.resize(11);//为v 分配大小，即11个数组 
	for(int i=0;i<e;++i){
        v[i].resize(11);//为每个v[i]分配大小 
		cin>>b1>>b2;
		v[b1].push_back(b2);
		v[b2].push_back(b1);
	}
	cin>>b1>>b2;
	int len=bfs(b1,b2);
	if(len!=-1){
		cout<<"The length of the shortest path between "<<b1<<" and "<<b2<<" is "<<len<<"."<<endl;
	}else{
		cout<<"There is no path between "<<b1<<" and "<<b2<<"."<<endl;
	}
	return 0;
} 

------------------------


题目24:
题目：旅游规划 25 分难度：7-25
正文：
有了一张自驾旅游路线图，你会知道城市间的高速公路长度、以及该公路要收取的过路费。现在需要你写一个程序，帮助前来咨询的游客找一条出发地和目的地之间的最短路径。如果有若干条路径都是最短的，那么需要输出最便宜的一条路径。

### 输入格式:

输入说明：输入数据的第1行给出4个正整数$N$、$M$、$S$、$D$，其中$N$（$2\le N\le 500$）是城市的个数，顺便假设城市的编号为0~($N-1$)；$M$是高速公路的条数；$S$是出发地的城市编号；$D$是目的地的城市编号。随后的$M$行中，每行给出一条高速公路的信息，分别是：城市1、城市2、高速公路长度、收费额，中间用空格分开，数字均为整数且不超过500。输入保证解的存在。

### 输出格式:

在一行里输出路径的长度和收费总额，数字间以空格分隔，输出结尾不能有多余空格。

### 输入样例:
```in
4 5 0 3
0 1 1 20
1 3 2 30
0 3 4 10
0 2 2 20
2 3 1 20
```

### 输出样例:
```out
3 40
```

答案：
#include<iostream>
#include<queue>
 
#include<string.h>
using namespace std;
const int INF=0x3f3f3f3f;
const int N=600;

int map[N][N];
int primap[N][N];
int vis[N];
int tlen[N];
int tprice[N];
int dist[N];
int minlen,minprice;
int dijkstra(int st,int len,int map[][N],int end,int& Price){
	int vis[len];
	int dic[len];
	const int INF=0x3f3f3f3f;
	for(int i=0;i<len;++i){
		vis[i]=0;
		dic[i]=INF;
	}
	Price=INF;
	dic[st]=0;
	tprice[st]=0;
	int t;
	int tnum;
	while(1){
		t=-1;
		for(int i=0;i<len;++i){
			if(!vis[i]&&(t==-1|| ( dic[i]<dic[t] || (dic[i]==dic[t]&&tprice[i]<tprice[t])  )   )){
				t=i;
			}
		}
		//最小 t
		for(int i=0;i<len;++i){
			tnum=dic[t]+map[t][i];
			if(tnum<dic[i]&&!vis[i]){
				dic[i]=tnum;
				tprice[i]=tprice[t]+primap[t][i];
			}else if(tnum==dic[i]&&!vis[i]&&tprice[i]>tprice[t]+primap[t][i]){
				dic[i]=tnum;
				tprice[i]=tprice[t]+primap[t][i];
			}
		}
		if(t==-1){
			break;
		}
		
		vis[t]=1;
	}
	
	if(dic[end]==INF)return -1;
	
	Price=tprice[end];
	return dic[end];
}
int main(){
	ios::sync_with_stdio(false);
	memset(primap,0,sizeof(primap));
	memset(vis,0,sizeof(vis));
	memset(tlen,0,sizeof(tlen));
	memset(tprice,0,sizeof(tprice));
	int n,m,s,d;
	int st,ed,len,price;
	
	minlen=minprice=999;
	
	cin>>n>>m>>s>>d;
	
	for(int i=0;i<n;++i){
		for(int j=0;j<n;++j){
			map[i][j]=map[j][i]=INF;
		}
	} 
	for(int i=1;i<=m;++i){
		cin>>st>>ed>>len>>price;
		map[st][ed]=map[ed][st]=len;
		primap[st][ed]=primap[ed][st]=price;
	}
	
	int minlen=dijkstra(s,n,map,d,minprice);
		
	cout<<minlen<<" "<<minprice<<endl;
	return 0;
}

------------------------


题目25:
题目：冒泡法排序 20 分难度：7-116
正文：
将$N$个整数按从小到大排序的冒泡排序法是这样工作的：从头到尾比较相邻两个元素，如果前面的元素大于其紧随的后面元素，则交换它们。通过一遍扫描，则最后一个元素必定是最大的元素。然后用同样的方法对前$N-1$个元素进行第二遍扫描。依此类推，最后只需处理两个元素，就完成了对$N$个数的排序。

本题要求对任意给定的$K$（<N$），输出扫描完第$K$遍后的中间结果数列。

### 输入格式：

输入在第1行中给出$N$和$K$（$1\le K<N\le 100$），在第2行中给出$N$个待排序的整数，数字间以空格分隔。

### 输出格式：

在一行中输出冒泡排序法扫描完第$K$遍后的中间结果数列，数字间以空格分隔，但末尾不得有多余空格。

### 输入样例：
```in
6 2
2 3 5 1 6 4
```

### 输出样例：
```out
2 1 3 4 5 6
```

答案：
#include<iostream>
using namespace std;

int maopao(int list[],int n,int k){
	for(int i=0;i<k;++i){
		for(int j=0;j<n-1-i;++j){
			if(list[j]>list[j+1]){
				int t=list[j];
				list[j]=list[j+1];
				list[j+1]=t;
			}
		}
	}
		cout<<list[0];
		for(int i=1;i<n;++i){
			cout<<" "<<list[i]; 
		}
		cout<<endl;
}
int list[105];
int main(){
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;++i){
		cin>>list[i];
	}
	maopao(list,n,k);
	return 0;
} 

------------------------


题目26:
题目：英文单词排序 25 分难度：7-113
正文：
本题要求编写程序，输入若干英文单词，对这些单词按长度从小到大排序后输出。如果长度相同，按照输入的顺序不变。

### 输入格式：

输入为若干英文单词，每行一个，以`#`作为输入结束标志。其中英文单词总数不超过20个，英文单词为长度小于10的仅由小写英文字母组成的字符串。

### 输出格式：

输出为排序后的结果，每个单词后面都额外输出一个空格。

### 输入样例：
```in
blue
red
yellow
green
purple
#
```

### 输出样例：
```out
red blue green yellow purple 
```

答案：

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void maopao(string list[],int n){
	for(int i=0;i<n;++i){
		for(int j=0;j<n-1-i;++j){
			if(list[j].length()>list[j+1].length()){
				string t=list[j];
				list[j]=list[j+1];
				list[j+1]=t;
			}
		}
	}
	
	for(int i=0;i<n;++i){
		cout<<list[i]<<" "; 
	}
	cout<<endl;
}
void charu(string list[],int n){
    int i,j;
    string t;
    for(i=1;i<n;++i){
        t=list[i];//对比对象
        for( j=i;j>0&&list[j-1].length()>t.length();--j){
            list[j]=list[j-1];
        }
        list[j]=t;//相应位置插入
    }
    for(int i=0;i<n;++i){
		cout<<list[i]<<" "; 
	}
	cout<<endl;
}

template<class T>
int mycompare( T& a, T& b){
	return a.length()<=b.length();
}
int comp2(string& a,string& b){
	return a.length()<b.length();
}
template<class T>
void charu2(int n,T* src){
	int j;
	T t;
	for(int i=1;i<n;++i){
		t=src[i];
		for(j=i;j>0&&mycompare(src[j-1],t);--j){
			src[j]=src[j-1];
		}
		src[j]=t;
	} 
}
void myQuitSort(string *src,int l,int r){
	//cout<<"l="<<l<<" r="<<r<<endl;
	if(l>=r)return;
	int i=l-1;
	int j=r+1;
	string x=src[ (l+r) >> 1 ];//(i+j)/2
	string t;
	int ind=(l+r)/2;
	while(i<j){
		do {
			i++;
		}while(src[i].length()<x.length() || ( src[i].length()==x.length()&&i<ind ) );//&&x!=src[i]
		do{
			j--;
		}while(x.length()<src[j].length() || (x.length()==src[j].length()&&j>ind )  );// && x!=src[j]
		
		if(i<j){
			t=src[i];
			src[i]=src[j];
			src[j]=t;
            if(src[i]==x)x=src[j];
            if(src[j]==x)x=src[i];
            
        //    cout<<"x="<<x<<endl;
		}else{
			// cout<<"i="<<i<<" j="<<j<<endl;
			 break;
		}
	}
	myQuitSort(src,l,j);//i!=j
	myQuitSort(src,j+1,r);
} 
string list[105];
int main(){
	int i=0;
	string str;
	for(;;){
		cin>>str;
		if(str=="#")
			break;
		list[i++]=str;
		
	}
	myQuitSort(list,0,i-1);
    for(int j=0;j<i;++j){
		cout<<list[j]<<" "; 
	}
	cout<<endl;
	return 0;
} 

------------------------


题目27:
题目：学生成绩排序 20 分难度：7-30
正文：
给出一组学生名单（姓名和成绩），请输出按成绩**从大到小**排序后的结果（名次和姓名）。成绩相同的人拥有相同的名次，且按姓名的字典序**从小到大**排列。题目保证学生姓名没有重复。

### 输入格式:

第一行给出不大于10000的整数N。
接下来N行，每行给出学生姓名和成绩，以空格分隔。学生姓名不超过20个字符。

### 输出格式:

共输出N行，每行包含对应的学生排名和姓名，以空格分隔。

### 输入样例:

```in
7
KongDezhen 94
FuTaotao 93
HuYu 94
XuJiecen 94
WuSuqi 96
ChenDa 93
HuNianbo 95
```

### 输出样例:

```out
1 WuSuqi
2 HuNianbo
3 HuYu
3 KongDezhen
3 XuJiecen
6 ChenDa
6 FuTaotao
```


答案：
#include<iostream>
#include<string>
using namespace std;

void maopao(string* list,int* scores,int n){
    string t;
    int tt;
	for(int i=0;i<n;++i){
		for(int j=0;j<n-1-i;++j){
			if(scores[j]<scores[j+1]||  (scores[j]==scores[j+1]&&list[j]>list[j+1]  )){
				 t=list[j];
				list[j]=list[j+1];
				list[j+1]=t;
				
				 tt=scores[j];
				scores[j]=scores[j+1];
				scores[j+1]=tt;
			}
		}
	}
	
     tt=0;
	for(int i=0;i<n;++i){
		if(scores[i]==scores[i-1]&&i>0){
//			printf("%d  %s",tt,list+i);
			cout<<tt<<" "<<list[i]<<endl; 
		}
		else{
			tt=i+1;
		//	printf("%d  %s",i+1,list+i);
			cout<<i+1<<" "<<list[i]<<endl; 
		}
			
	}
}

void charru(string* list,int* scores,int n){
    string t;
    int tt;
    int j;
	for(int i=1;i<n;++i){
        t=list[i];
        tt=scores[i];
		for( j=i;j>0&&(scores[j-1]<tt|| (scores[j-1]==tt&&list[j-1]>t  ));--j){
            list[j]=list[j-1];
            scores[j]=scores[j-1];
		
		}
        list[j]=t;
        scores[j]=tt;
	}
	
     tt=0;
	for(int i=0;i<n;++i){
		if(scores[i]==scores[i-1]&&i>0){
//			printf("%d  %s",tt,list+i);
			cout<<tt<<" "<<list[i]<<endl; 
		}
		else{
			tt=i+1;
		//	printf("%d  %s",i+1,list+i);
			cout<<i+1<<" "<<list[i]<<endl; 
		}
			
	}
}
string lists[10005];
int sore[10005];
int main(){
	int n,sco;
	cin>>n;
//	scanf("%d",&n);
	string str;
	for(int i=0;i<n;++i){
		cin>>lists[i]>>sore[i];
//		scanf("%s %d",&lists[i],&sore[i]);
	}
	charru(lists,sore,n);
	return 0;
} 

------------------------


题目28:
题目：抢红包 25 分难度：7-114
正文：
没有人没抢过红包吧…… 这里给出$N$个人之间互相发红包、抢红包的记录，请你统计一下他们抢红包的收获。

### 输入格式：

输入第一行给出一个正整数$N$（\le 10^4$），即参与发红包和抢红包的总人数，则这些人从1到$N$编号。随后$N$行，第$i$行给出编号为$i$的人发红包的记录，格式如下：

$K\quad N_1\quad P_1\quad \cdots\quad N_K\quad P_K$

其中$K$（$0 \le K \le 20$）是发出去的红包个数，$N_i$是抢到红包的人的编号，$P_i$（>0$）是其抢到的红包金额（以分为单位）。注意：对于同一个人发出的红包，每人最多只能抢1次，不能重复抢。

### 输出格式：

按照收入金额从高到低的递减顺序输出每个人的编号和收入金额（以元为单位，输出小数点后2位）。每个人的信息占一行，两数字间有1个空格。如果收入金额有并列，则按抢到红包的个数递减输出；如果还有并列，则按个人编号递增输出。

### 输入样例：
```in
10
3 2 22 10 58 8 125
5 1 345 3 211 5 233 7 13 8 101
1 7 8800
2 1 1000 2 1000
2 4 250 10 320
6 5 11 9 22 8 33 7 44 10 55 4 2
1 3 8800
2 1 23 2 123
1 8 250
4 2 121 4 516 7 112 9 10
```

### 输出样例：
```out
1 11.63
2 3.63
8 3.63
3 2.11
7 1.69
6 -1.67
9 -2.18
10 -3.26
5 -3.26
4 -12.32
```

答案：
#include<cstdio>
#include<iostream> 
#include<cstring>
#include<algorithm>
using namespace std;
 
const int maxn=100010;
 
struct node{
	
	int id;
	int cnt;
	int money;
 	
	node(){
		
		id=0;
		cnt=0;
		money=0;
	}
}; 
 
bool cmp(node a,node b){
	
	if(a.money!=b.money)
	  return a.money>b.money;
	  
	if(a.cnt!=b.cnt)
	  return a.cnt>b.cnt;
	
	return a.id<b.id;  
	
}
 
int main(){
	
	node nodes[maxn];
     int n;
     cin>>n;
     
     for(int i=1;i<=n;i++){
	
     	int num,sum=0;
     	
     	cin>>num;
     	while(num--){
     		
     		int a,b;
     		cin>>a>>b;
     		
     		nodes[a].money+=b;
     		nodes[a].cnt++;
 			sum+=b;
		 }
		 
		 nodes[i].money-=sum;
  		 nodes[i].id=i;
	 }
     
     sort(nodes+1,nodes+n+1,cmp);
     
     for(int i=1;i<=n;i++){
     	
     	cout<<nodes[i].id<<" ";
     	
     	 double ans=nodes[i].money/100.0;
     	 
     	printf("%.2f\n",ans);
     	
	 }
  
} 

------------------------


题目29:
题目：统计工龄 20 分难度：7-115
正文：
给定公司$N$名员工的工龄，要求按工龄增序输出每个工龄段有多少员工。

### 输入格式:

输入首先给出正整数$N$（\le 10^5$），即员工总人数；随后给出$N$个整数，即每个员工的工龄，范围在[0, 50]。

### 输出格式:

按工龄的递增顺序输出每个工龄的员工个数，格式为：“工龄:人数”。每项占一行。如果人数为0则不输出该项。

### 输入样例:
```in
8
10 2 0 5 7 2 5 2
```

### 输出样例:
```out
0:1
2:3
5:2
7:1
10:1
```

答案：
#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int t=a; a=b; b=t;
}
void show_result(int A[],int N){
	int cnt=0,age=A[0];
 ? for(int i=0;i<N;i++){
? ? ? ?if(A[i]==age) cnt++;
? ? ? ?else {cout<<age<<":"<<cnt<<endl; age=A[i]; cnt=1;}
	}
	cout<<age<<":"<<cnt<<endl;
}
void Bubble_sort(int A[],int N){//冒泡排序法?
	for(int i=1;i<=N-1;i++){
		int flag=0;
		for(int j=0;j<=N-1-i;j++)
		if(A[j]>A[j+1]) {flag=1; swap(A[j],A[j+1]);}
		if(flag==0) break;	
	}
}
void Insertion_sort(int A[],int N){//插入排序法?
? ? int i,j;
	for(i=1;i<N;i++){
		int temp=A[i];
		for(j=i;j>0;j--){
			if(A[j-1]>temp) A[j]=A[j-1];
			else break;
		}
		A[j]=temp;
	}
}
void percdown(int A[],int N,int i){//最大堆下滤?
	int parent,child,temp=A[i];
	for(parent=i;2*parent+1<=N-1;parent=child){
		child=2*parent+1;?
		if(child<N-1&&A[child+1]>A[child]) child++;?
		if(temp<A[child]) A[parent]=A[child];
		else break;
	}
	A[parent]=temp;
}
void buildheap(int A[],int N){//建立最大堆
? ? ?for(int i=(N-1)/2;i>=0;i--){
? ? ?	percdown(A,N,i);
	 }?
}
void heap_sort(int A[],int N){//堆排序
? ? ?buildheap(A,N);
? ? ?int size=N;
	 for(int i=1;i<=N-1;i++){
	 	 swap(A[0],A[size-1]);
	 	 percdown(A,--size,0);
	 }
}?
void shell_sort(int A[],int N){//Sdegewick增量序列的希尔排序?
	int IncrementSequence_Sedgewick[]={0,
? ? 1,5,19,41,109,209,505,929,
? ? 2161,3905,8929,16001,36289,64769,146305,260609,
? ? 587521,1045505,2354689,4188161,9427969,16764929,37730305,67084289,
? ? 150958081,268386305,603906049,1073643521};
? ? int i=1,len,j,k;
? ? while(IncrementSequence_Sedgewick[++i]<=N){}
? ? for(i=i-1;i>=1;i--){
? ? 	len=IncrementSequence_Sedgewick[i];?
		for(j=len;j<N;j++){
? ? 	int temp=A[j];
? ? 	for(k=j;k>=len;k-=len)
		{
? ? ? ? if(temp<A[k-len]) swap(A[k],A[k-len]);
		else break;}
? ? ? ? A[k]=temp;
	}
}
}
void Merge(int A[],int l,int r,int rend,int temp[]){
	int lend=r-1,n=rend-l+1,cnt=l;
	while(l<=lend&&r<=rend){
		if(A[l]<A[r]) temp[cnt++]=A[l++];
		else temp[cnt++]=A[r++];
	}
	while(l<=lend) temp[cnt++]=A[l++];
	while(r<=rend) temp[cnt++]=A[r++];
	for(int i=0;i<n;i++)
	A[rend]=temp[rend--];
}
void Msort(int A[],int l,int rend,int temp[]){
	int center;
	if(l<rend){
	? ? center=(l+rend)/2;
		Msort(A,l,center,temp);
		Msort(A,center+1,rend,temp);
		Merge(A,l,center+1,rend,temp);
	}
}
void Merge_sort(int A[],int N){//归并排序（递归）?
	int *temp;
	temp=(int*)malloc(N*sizeof(int));
	if(temp!=NULL){
		Msort(A,0,N-1,temp);
		free(temp);
	}
	else cout<<"there is no enough space!"<<endl;
}?
void Merge1(int A[],int l,int r,int rend,int temp[]){
	int lend=r-1,n=rend-l+1,cnt=l;
	while(l<=lend&&r<=rend){
		if(A[l]<A[r]) temp[cnt++]=A[l++];
		else temp[cnt++]=A[r++];
	}
	while(l<=lend) temp[cnt++]=A[l++];
	while(r<=rend) temp[cnt++]=A[r++];
}
void Merge_pass(int A[],int N,int len,int temp[]){
	int i;
	for(i=0;i<N-1-2*len;i+=2*len)
	Merge1(A,i,i+len,i+2*len-1,temp);
	if(i+len<N) Merge1(A,i,i+len,N-1,temp);
	else?
	for(int j=i;j<N;j++) temp[j]=A[j];
}?
void Merge_sort2(int A[],int N){//（非递归）归并排序?
	int *temp;
	temp=(int*)malloc(N*sizeof(int));
	if(temp!=NULL){
	int len=1;
	while(len<N){
		Merge_pass(A,N,len,temp);
		len*=2;
		Merge_pass(temp,N,len,A);
		len*=2;?
	}
	free(temp);	
	}
	else cout<<"there is no enough space !"<<endl;
}?
int getpivot(int A[],int l,int r){//获得pivot?
	int m=(l+r)/2;
	if(A[m]<A[l]) swap(A[m],A[l]);
	if(A[r]<A[l]) swap(A[r],A[l]);
	if(A[r]<A[m]) swap(A[r],A[m]);
	swap(A[m],A[r-1]);
	return A[r-1];
}
void Qsort(int A[],int l,int r){//快速排序递归核心算法?
	int pivot,i,j,cutoff=1000;
	if(r-l>=cutoff){
		int pivot=getpivot(A,l,r);
		i=l; j=r-1;
		while(1){
			while(A[++i]<pivot) {}
			while(A[--j]>pivot) {}
			if(i<j) swap(A[i],A[j]);
			else break;
		}
		swap(A[r-1],A[i]);
		Qsort(A,l,i-1);
		Qsort(A,i+1,r);
	}
	else Insertion_sort(A+l,r-l+1);
}
void Quick_sort(int A[],int N){// 快速排序?
	Qsort(A,0,N-1);?
}?
int main(){
	int N; cin>>N;
	int A[N];
	for(int i=0;i<N;i++)
	cin>>A[i];
	//Bubble_sort(A,N);
	//Insertion_sort(A,N);
	//heap_sort(A,N);
	//shell_sort(A,N);?
	//Merge_sort2(A,N);
	Quick_sort(A,N);?
? ? show_result(A,N);
	return 0;
}?

------------------------


题目30:
题目：点赞狂魔 25 分难度：7-113
正文：
微博上有个“点赞”功能，你可以为你喜欢的博文点个赞表示支持。每篇博文都有一些刻画其特性的标签，而你点赞的博文的类型，也间接刻画了你的特性。然而有这么一种人，他们会通过给自己看到的一切内容点赞来狂刷存在感，这种人就被称为“点赞狂魔”。他们点赞的标签非常分散，无法体现出明显的特性。本题就要求你写个程序，通过统计每个人点赞的不同标签的数量，找出前3名点赞狂魔。

### 输入格式：

输入在第一行给出一个正整数$N$（\le 100$），是待统计的用户数。随后$N$行，每行列出一位用户的点赞标签。格式为“`Name` $K$ $F_1 \cdots F_K$”，其中`Name`是不超过8个英文小写字母的非空用户名，$1\le K\le 1000$，$F_i$（$i=1, \cdots , K$）是特性标签的编号，我们将所有特性标签从 1 到 $10^7$ 编号。数字间以空格分隔。

### 输出格式：

统计每个人点赞的不同标签的数量，找出数量最大的前3名，在一行中顺序输出他们的用户名,其间以1个空格分隔,且行末不得有多余空格。如果有并列，则输出标签出现次数平均值最小的那个，题目保证这样的用户没有并列。若不足3人，则用`-`补齐缺失，例如`mike jenny -`就表示只有2人。

### 输入样例：
```in
5
bob 11 101 102 103 104 105 106 107 108 108 107 107
peter 8 1 2 3 4 3 2 5 1
chris 12 1 2 3 4 5 6 7 8 9 1 2 3
john 10 8 7 6 5 4 3 2 1 7 5
jack 9 6 7 8 9 10 11 12 13 14
```

### 输出样例：
```out
jack chris john
```

答案：
#include <cstdio>
#include <string.h>
#include <string>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
const int maxen=1010;
struct edge{
    char name[30];
    int num;
    int sum;
}node[maxen];
bool cmp(edge x,edge y){
    if(x.sum==y.sum)
    return x.num<y.num;
    return x.sum>y.sum;
}
int main(void){
     int n,k,u,count=0;
     char a;
     memset(node,0,sizeof(0));
     scanf("%d",&n);
     for(int i=1;i<=n;++i)
     {
     set<int> st; 
     scanf("%s",node[i].name);
     scanf("%d",&k);
     node[i].num=k;
     for(int j=1;j<=k;++j)
       {
        scanf("%d",&u);
        st.insert(u);
       }
         node[i].sum=st.size();
      }
      sort(node+1,node+1+n,cmp);
      if(n==1){
      printf("%s - -\n",node[1].name);
      }
      else if(n==2)
      {
      printf("%s %s -\n",node[1].name,node[2].name);
      }
      else
      {
      for(int i=1;i<=3;++i){
      if(i==1)
      printf("%s",node[i].name);
      else
      printf(" %s",node[i].name);
      }
          printf("\n");
      }
    return 0;
}

------------------------


题目31:
题目：银行业务队列简单模拟 100 分难度：7-119
正文：
设某银行有A、B两个业务窗口，且处理业务的速度不一样，其中A窗口处理速度是B窗口的2倍 —— 即当A窗口每处理完2个顾客时，B窗口处理完1个顾客。给定到达银行的顾客序列，请按业务完成的顺序输出顾客序列。假定不考虑顾客先后到达的时间间隔，并且当不同窗口同时处理完2个顾客时，A窗口顾客优先输出。

### 输入格式:

输入为一行正整数，其中第1个数字N(\le$$1000)为顾客总数，后面跟着N位顾客的编号。编号为奇数的顾客需要到A窗口办理业务，为偶数的顾客则去B窗口。数字间以空格分隔。

### 输出格式:

按业务处理完成的顺序输出顾客的编号。数字间以空格分隔，但最后一个编号后不能有多余的空格。

### 输入样例:
```in
8 2 1 3 9 4 11 13 15
```

### 输出样例:
```out
1 3 2 9 11 4 13 15
```

答案：
#include<iostream>
#include<queue>
#include<cstdio>
#include<algorithm>

using namespace std;

int main() {
	queue<int> A,B;
	int N; 
	int i=0;//用于判断第一个数据，是否有空格
	cin>>N;
	if(N<0)
		return 0;
	while(N--) {
		int m;
		cin>>m;
		if(m%2==1)
			A.push(m);
		else
			B.push(m);
	}
	while(!A.empty()) {
		int cot=2;
		while(cot--&&!A.empty()) {
			if(i++)
				cout<<" ";
			cout<<A.front();
			A.pop();
		}

		if(!B.empty()) {
			if(i++)
				cout<<" ";
			cout<<B.front();
			B.pop();
		}
	}
	while(!B.empty()) {
		if(i++)
			cout<<" ";
		cout<<B.front();
		B.pop();
	}
	return 0;
}


------------------------


题目32:
题目：列出叶结点 100 分难度：7-120
正文：
对于给定的二叉树，本题要求你按从上到下、从左到右的顺序输出其所有叶节点。

### 输入格式：

首先第一行给出一个正整数 $N$（\le 10$），为树中结点总数。树中的结点从 0 到 $N-1$ 编号。随后 $N$ 行，每行给出一个对应结点左右孩子的编号。如果某个孩子不存在，则在对应位置给出 "-"。编号间以 1 个空格分隔。

### 输出格式：

在一行中按规定顺序输出叶节点的编号。编号间以 1 个空格分隔，行首尾不得有多余空格。

### 输入样例：
```in
8
1 -
- -
0 -
2 7
- -
- -
5 -
4 6
```

### 输出样例：
```out
4 1 5
```


答案：
#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>
#include<cmath>
#include<map>
#include<vector>
using namespace std;
struct node{
	char Left,Right;
}p[15];
int Root[15];
vector<int> Leaf[15];
void func(int s,int cur){
	if(p[s].Left=='-'&&p[s].Right=='-'){
		Leaf[cur].push_back(s);
		return;
	}
	if(p[s].Left!='-') func(p[s].Left-'0',cur+1);
	if(p[s].Right!='-') func(p[s].Right-'0',cur+1);
}
int main() {
	int n;
	memset(Root,0,sizeof Root);
	cin>>n;//怎么老是忘记输入n, 汗(⊙﹏⊙)b 
	for(int i=0;i<n;i++){
		cin>>p[i].Left>>p[i].Right;
		Root[p[i].Left-'0']=Root[p[i].Right-'0']=1;//能成为别人左右节点的节点必然不是根节点 
	}
	int rt;//记录根节点下标 
	for(int i=0;i<n;i++){
		if(!Root[i]){
			rt=i;
			break;
		}
	}
	func(rt,1);//将叶节点储存 
	int f=0;
	for(int i=1;i<=n;i++){ 
		for(int j=0;j<Leaf[i].size();j++){
			if(f) cout<<' ';
			else f=1;
			cout<<Leaf[i][j];
		}
	}
	cout<<endl;
	return 0;
}

------------------------


题目33:
题目：地下迷宫探索 30 分难度：7-121
正文：
地道战是在抗日战争时期，在华北平原上抗日军民利用地道打击日本侵略者的作战方式。地道网是房连房、街连街、村连村的地下工事，如下图所示。


![](~/52)

我们在回顾前辈们艰苦卓绝的战争生活的同时，真心钦佩他们的聪明才智。在现在和平发展的年代，对多数人来说，探索地下通道或许只是一种娱乐或者益智的游戏。本实验案例以探索地下通道迷宫作为内容。

假设有一个地下通道迷宫，它的通道都是直的，而通道所有交叉点（包括通道的端点）上都有一盏灯和一个开关。请问你如何从某个起点开始在迷宫中点亮所有的灯并回到起点？


![](~/53)

### 输入格式:

输入第一行给出三个正整数，分别表示地下迷宫的节点数$N$（$1<N\le 1000$，表示通道所有交叉点和端点）、边数$M$（\le 3000$，表示通道数）和探索起始节点编号$S$（节点从1到$N$编号）。随后的$M$行对应$M$条边（通道），每行给出一对正整数，分别是该条边直接连通的两个节点的编号。

### 输出格式:

若可以点亮所有节点的灯，则输出从$S$开始并以$S$结束的包含所有节点的序列，序列中相邻的节点一定有边（通道）；否则虽然不能点亮所有节点的灯，但还是输出点亮部分灯的节点序列，最后输出0，此时表示迷宫不是连通图。

由于深度优先遍历的节点序列是不唯一的，为了使得输出具有唯一的结果，我们约定以节点小编号优先的次序访问（点灯）。在点亮所有可以点亮的灯后，以原路返回的方式回到起点。

### 输入样例1:
```in
6 8 1
1 2
2 3
3 4
4 5
5 6
6 4
3 6
1 5
```

### 输出样例1:
```out
1 2 3 4 5 6 5 4 3 2 1
```

### 输入样例2:
```
6 6 6
1 2
1 3
2 3
5 4
6 5
6 4
```

### 输出样例2:
```
6 4 5 4 6 0
```

答案：
#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int a[N][N],vis[N],tot,path[N+N],n,m,s;
void dfs(int x){
    for(int i=1;i<=n;i++)
    {
        if(a[x][i]&&!vis[i])
        {
            vis[i]=1;
            path[tot++]=i;
            dfs(i);
            path[tot++]=x;
        }
    }
}
int main()
{
    cin>>n>>m>>s;
    for(int i=0,u,v;i<m;i++)
        cin>>u>>v,a[u][v]=a[v][u]=1;
    path[tot++]=s,vis[s]=1;
    dfs(s);
    printf("%d",path[0]);
    for(int i=1;i<tot;i++)
        printf(" %d",path[i]);
    int f=0;
    for(int i=1;i<=n;i++)if(!vis[i])f=1;
    if(f)printf(" 0");
}


------------------------


题目34:
题目：逆序数 15 分难度：7-34
正文：
给出一个长度为n的数列，你每一次可以随意交换其中两个相邻数字的位置。问你至少交换几次，才能使得这个数列是个单调递增数列。

### 输入格式:

第一行输入一个n，第二行输入n个数

### 输出格式:

输出逆序数

### 输入样例:

在这里给出一组输入。例如：

```in
5
9 1 0 5 4 
```

### 输出样例:

在这里给出相应的输出。例如：

```out
6
```


答案：
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num[n+4];
    for(int i=0;i<n;++i){
        cin>>num[i];
    }
    int sum=0;
    for(int i=0;i<n-1;++i){
        for(int j=i+1;j<n;++j){
            if(num[i]>=num[j])sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}

------------------------


题目35:
题目：整型关键字的散列映射 25 分难度：7-35
正文：
给定一系列整型关键字和素数$P$，用除留余数法定义的散列函数$H(Key) = Key % P$将关键字映射到长度为$P$的散列表中。用线性探测法解决冲突。

### 输入格式:

输入第一行首先给出两个正整数$N$（\le 1000$）和$P$（\ge N$的最小素数），分别为待插入的关键字总数、以及散列表的长度。第二行给出$N$个整型关键字。数字间以空格分隔。

### 输出格式:

在一行内输出每个整型关键字在散列表中的位置。数字间以空格分隔，但行末尾不得有多余空格。

### 输入样例:
```in
4 5
24 15 61 88
```

### 输出样例:
```out
4 0 1 3
```

答案：
#include<iostream>
using namespace std;
int num[10005];
int main(){
    int a,b,n;
    cin>>n>>b;
    for(int i=0;i<n;i++){
        cin>>a;
        int count=0;
        while(num[(a+count)%b]!=a&&num[(a+count)%b]!=0)count++;
        num[(a+count)%b]=a;
        if(i>0)cout<<" ";//空格格式
        cout<<(a+count)%b;
    }
    return 0;
}

------------------------



