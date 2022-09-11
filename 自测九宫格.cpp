#include <iostream>
#include <ctime>
#include<errno.h>
using namespace std;
int rel[3][9][9],shudu[9][9],flag[9][9];
int getindex(int x,int y){
	//得到第几个九宫格
	return (3*(x/3)+(y/3)); //0-8
}

void changeshudu(int x,int y,int stary){
	int val=shudu[x][y];//-1 8
	int index=getindex(x,y);
	rel[0][x][val]=stary;
	rel[1][y][val]=stary;
	rel[2][index][val]=stary;
}
function res=getindex(x,y)
	res=(3*(x/3)+(y/3));
end
function changeshudu(x,y,stary)
	val=shudu(i)(j);
	index=getindex(x,y);
	rel[0][x][val]=stary;
	rel[1][y][val]=stary;
	rel[2][index][val]=stary;
end
function initshudu()
	for i=0:9
		for j=0:9
			shudu(i)(j)=shudu(i)(j)-1;
			flag[i][j] = ~shudu[i][j] ? 0 : 1;  //sudoku[i][j]== 0 -1 1  
            if (!flag[i][j]) changeshudu(i, j, 1);
        	end
        end
    end
end
function res=getnextval(row,col,start)
	int index=getindex(row,col);
    for i=start:9
    	if rel[2][index][i]==1
			continue;
		end
        if rel[0][row][i]==1
			 continue; // 
		end
        if rel[1][col][i]==1
		 continue;
		end
        res=i;
	res=-1;
end
function start(row,col)
	if col==9
		row++;col=0;
	end
	while row<=8&&flag(row)(col)==0
		col++;
		if col==9
			row++;
			col=0;
		end
	end
	while (shudu(row)(col)==getnextval(row,col,shudu(row,col)+1))!=-1
		changeshudu(row,col,1);
		start(row,col+1);
		changeshudu(row,col,0);
	end
end
void initshudu(){
	int a;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
        	cin>>a;
			shudu[i][j]=a-1;    //0 -1  flag=1  可用 
			
            flag[i][j] = ~shudu[i][j] ? 0 : 1;  //sudoku[i][j]== 0 -1 1  
            
            if (!flag[i][j]) changeshudu(i, j, 1);
        }
        getchar();
        
    }
}
void display(){
	cout<<"\n--------------------------\n\n";
	cout<<"---------------------\n";
    for (int i = 0; i < 9; i++) {
        string line = "";
        for (int j = 0; j < 9; j++) {
            cout<<shudu[i][j]+1<<" ";
            if((j+1)%3==0)
            	cout<<"| ";
        }
        if(((i+1)%3==0)){
        	
        	cout<<"\n---------------------";
		}
        cout << endl;
    }
}

int getnextval(int row,int col,int start){
	int index=getindex(row,col);
    for (int i = start; i < 9; i++) {
    	if (rel[2][index][i]) continue;
        if (rel[0][row][i]) continue; // 
        if (rel[1][col][i]) continue;
        return i;
    }
	return -1;
}

void start(int rowIndex,int colIndex){
    if (colIndex == 9) {rowIndex++;colIndex = 0;}
    while (rowIndex <= 8 && !flag[rowIndex][colIndex]) {
        colIndex++;if (colIndex == 9) {rowIndex++;colIndex = 0;}
    }
    if (rowIndex > 8) {display();return ;}
while((shudu[rowIndex][colIndex]=getnextval(rowIndex,colIndex,shudu[rowIndex][colIndex]+1))!=-1){
//while((shudu[rowIndex][colIndex]=getnextval(rowIndex,colIndex,shudu[rowIndex][colIndex])+1)!=-1){	
		changeshudu(rowIndex,colIndex,1);
		start(rowIndex,colIndex+1);
		changeshudu(rowIndex,colIndex,0);
	}
	if(shudu[rowIndex][colIndex]==-1){
    	return ;
	}
}

int main(){
	long t1,t2;
	initshudu();
	t1=clock();
	start(0,0);
	t2=clock();
	cout<<"\n用时间："<<t2-t1<<" ms\n";
	return 0;
}
/*
8 0 0 0 0 0 0 0 0
0 0 3 6 0 0 0 0 0
0 7 0 0 9 0 2 0 0
0 5 0 0 0 7 0 0 0
0 0 0 0 4 5 7 0 0
0 0 0 1 0 0 0 3 0
0 0 1 0 0 0 0 6 8
0 0 8 5 0 0 0 1 0
0 9 0 0 0 0 4 0 0

*/

//
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include<ctime>
//using namespace std ;
//
//int id[10][10] , Cid[10][10] , Rid[10][10] , Mid[10][10] , bel[10][10] ;
//int Rcnt , Rmean[1000] ;
//struct Node{
//    Node *lf , *rg , *up , *dn , *col ;
//    int Rnum , Cnum , Ccnt ;//行列  标号(第几号下标) 
//}w[5005] , *C[350], *R[1000]  ,*Head , *tw = w ;
////w[5005] , *C[350] , *R[1000] , *Head , *tw = w ; 
//int ttt;
//void Insert( int r_ , int c_ ){//插入一个元素 在列号为c_的最下面 
//
//    Node *nd = ++tw ;
//    C[c_]->Ccnt ++ ;//ccnt行号 
//    nd->Rnum = r_ ,//个数号 
//	 nd->Cnum = c_ , //列号 
//	 nd->col = C[c_] ;//标号 
//    nd->up = C[c_]->up ; nd->dn = C[c_] ;
//    C[c_]->up->dn = nd ; C[c_]->up = nd ;
//	
////	9*9*8+1
//	
//    if( !R[r_] ){
//    	printf("w %d\n",++ttt);
//        R[r_] = nd ;
//        R[r_]->lf = R[r_]->rg = R[r_] ;
//    } else {
//    	printf("h %d\n",++ttt);
//        nd->lf = R[r_], nd->rg = R[r_]->rg ;
//        R[r_]->rg->lf = nd , R[r_]->rg = nd ;
//    }
//}
//
//void insertLine( int i , int j , int x ){
//    Rcnt ++ ; //个数号 
//	Rmean[Rcnt] = x ;
//    Insert( Rcnt , id[i][j] ) ;//格子 -列 
//    Insert( Rcnt , Rid[i][x] ) ;//行 -列 
//    Insert( Rcnt , Cid[j][x] ) ;//列 v-列 
//    Insert( Rcnt , Mid[ bel[i][j] ][x] ) ;//宫 -列 
//}
//
//void init(){
//    int tmp = 0 ;
//    for( int i = 1 ; i <= 9 ; i ++ )
//        for( int j = 1 ; j <= 9 ; j ++ )
//            id[i][j] = ++tmp ,//id号 
//			 Rid[i][j] = id[i][j] + 81 ,//列 
//             Cid[i][j] = Rid[i][j] + 81 ,//行 
//			 Mid[i][j] = Cid[i][j] + 81 ;//宫 
//    for( int i = 1 ; i <= 9 ; i ++ ){
//        for( int j = 1 ; j <= 9 ; j ++ )
//            bel[i][j] = ( i - 1 ) / 3 * 3 + ( j + 2 ) / 3 ;//记录第几个九宫格 
//    }
//
//    Head = ++tw ;
//    for( int i = 1 ; i <= 324 ; i ++ )
//        C[i] = ++tw , C[i]->Ccnt = 0 , C[i]->Cnum = i ;
//    for( int i = 1 ; i <= 324 ; i ++ ){
//        C[i]->up = C[i]->dn = C[i] ;
//        C[i]->rg = C[i+1] , C[i]->lf = C[i-1] ;
//    }
//   C[0] = R[0] = Head ;
// //  C[0] = Head ;
//    C[1]->lf = Head , Head->rg = C[1] ;
//    C[324]->rg = Head , Head->lf = C[324] ;
//}
//
//void remove( Node *nd ){
//    nd->lf->rg = nd->rg ;
//    nd->rg->lf = nd->lf ;
//    for( Node *i = nd->dn ; i != nd ; i = i->dn ){
//        for( Node *j = i->rg ; j != i ; j = j->rg ){
//            j->col->Ccnt -- ;
//            j->up->dn = j->dn , j->dn->up = j->up ;
//        }
//    }
//}
//
//void resume( Node *nd ){
//    for( Node *i = nd->up ; i != nd ; i = i->up ){
//        for( Node *j = i->lf ; j != i ; j = j->lf ){
//            j->col->Ccnt ++ ;
//            j->up->dn = j , j->dn->up = j ;
//        }
//    }
//    nd->lf->rg = nd ;
//    nd->rg->lf = nd ;
//}
//
//int sta[10005] , topp , ans[10][10] ;
//
//void print(){
//	printf("\n--------------------------\n");
//    sort( sta + 1 , sta + topp + 1 ) ;
//    for( int i = 1 , tmp = 0 ; i <= 9 ; i ++ ){
//        for( int j = 1 ; j <= 9 ; j ++ ){
//        	tmp ++ , printf( "%d " , Rmean[ sta[tmp] ] ) ;
//            if(j%3==0){
//            	printf("|");
//			}
//		}
//
//	    if(i%3==0){
//        	
//        	printf("\n---------------------");
//		}
//        puts( "" ) ;
//    }
//}
//
//bool solve(){
//    if( Head->rg == Head ){
//        print() ; return true ;
//    }
//    Node *now = Head->rg ;
//    for( Node *tmp = now->rg ; tmp != Head ; tmp = tmp->rg )
//        if( tmp->Ccnt < now->Ccnt ) now = tmp ;
//
//    remove( now );
//    for( Node *i = now->dn ; i != now ; i = i->dn ){//当前选第i行 
//        for( Node *j = i->rg ; j != i ; j = j->rg )//所有i行有的元素,其他行都不能有
//            remove( j->col ) ;
//
//        sta[++topp] = i->Rnum ;//存的是下标 
//        if( solve() ) return true ;
//        topp -- ;
//
//        for( Node *j = i->lf ; j != i ; j = j->lf )
//            resume( j->col ) ;
//    }
//    resume( now ) ;
//    return false ;
//}
//
//int main(){
//    init() ;
//    for( int i = 1 , x ; i <= 9 ; i ++ ){
//        for( int j = 1 ; j <= 9 ; j ++ ){
//            scanf( "%d" , &x ) ;
//            if( !x ){
//                for( int k = 1 ; k <= 9 ; k ++ )
//                    insertLine( i , j , k ) ;
//            } else insertLine( i , j , x ) ;
//        }
//    }
//    printf("\n-------------------\n"); 
//    long t1,t2;
//    t1=clock();
//    solve() ;
//    t2=clock();
//   // cout<<"\ntime ="<<t2-t1<<"ms\n"; 
//    printf("\ntime = %ld ms",t2-t1);
//}
/*
8 0 0 0 0 0 0 0 0
0 0 3 6 0 0 0 0 0
0 7 0 0 9 0 2 0 0
0 5 0 0 0 7 0 0 0
0 0 0 0 4 5 7 0 0
0 0 0 1 0 0 0 3 0
0 0 1 0 0 0 0 6 8
0 0 8 5 0 0 0 1 0
0 9 0 0 0 0 4 0 0
*/


//
//#include <cstdio>
//#include <cstring>
//#include <algorithm>
//#include<ctime>
//using namespace std;
////1 1 1
////1 1 1
////0 0 0  
//struct node
//{
// node *L, *R, *U, *D, *col;
// int x;
// node(node *a = 0, node *b = 0, node *c = 0, node *d = 0,
//  node *e = 0, int f = 0)
// :L(a), R(b), U(c), D(d), col(e), x(f) {};
//}*head, *tail[100005];
//int n, m;
//
//bool remove(node *c)
//{
// c->L->R = c->R, c->R->L = c->L;
// if (c->D == c) return false;
// 
// for (node *i = c->D; i != c; i = i->D)
//  for (node *j = i->R; j != i; j = j->R)
//  {
//   j->U->D = j->D;
//   j->D->U = j->U;
//  }
// return true;
//}
////1 1 0
////0 2 1
////0 0 0 
//void recover(node *c)
//{
// for (node *i = c->D; i != c; i = i->D)
//  for (node *j = i->R; j != i; j = j->R)   
//   j->U->D = j->D->U = j;
// c->L->R = c->R->L = c;
//}
//bool DLX()
//{
// node *c = head->R;
// if (c == head) return true;
// if (!remove(c)) return false;
//
// for (node *i = c->D; i != c; i = i->D)
// {
//  for (node *j = i->R; j != i; j = j->R)
//   remove(j->col);
//  if (DLX())
//  {
//   printf ("%d ", i->x);
//   return true;
//  }
//  for (node *j = i->R; j != i; j = j->R)
//   recover(j->col);
// }
// return false;
//}
//int main()
//{
// head = new node();
// scanf ("%d%d", &n, &m);
// for (int i = 1; i <= m; i++)
//  tail[i] = new node();
// for (int i = 2; i < m; i++)
//  tail[i]->L = tail[i - 1], tail[i]->R = tail[i + 1];
// for (int i = 1; i <= m; i++)
//  tail[i]->U = tail[i]->D = tail[i];
// head->L = tail[m], head->R = tail[1], head->D = head->U = head;
// tail[m]->L = tail[m - 1], tail[m]->R = head;
// tail[1]->R = tail[2], tail[1]->L = head;
// for (int i = 1; i <= n; i++)
// {
//  node *last = NULL;
//  for (int j = 1; j <= m; j++)
//  {
//   int a;
//   scanf ("%d", &a);
//   if (a)
//   {
//    node *newnode = new node(NULL, NULL, tail[j], tail[j]->D, tail[j]->D, i);//左右上下 标号 值 
//    tail[j]->D = tail[j]->D->U = newnode;
//    tail[j] = newnode;
//    if (!last) newnode->L = newnode->R = newnode;
//    else
//    {
//     newnode->L = last, newnode->R = last->R;
//     last->R = last->R->L = newnode;
//    }
//    last = newnode;
//   }
//  }
// }
// long t1,t2;
// t1=clock();
// if (!DLX())
//  printf ("No solution!\n");
//t2=clock();
//printf("\n%d ms",t2-t1);
// return 0;
//}
