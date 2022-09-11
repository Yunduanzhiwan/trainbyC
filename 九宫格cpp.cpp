//#include <iostream>
//#include <bits/stdc++.h>
//#define N 9
///*
//3 0 0
//5 2 0 
//0 0 0 
//*/ 
//using namespace std;
// 
//vector<vector<bool> >vis(N,vector<bool>(N));
// 
//void print(vector<vector<int> >grid)
//{
//    cout<<endl;
//    for(int i = 0;i<N;i++)
//    {
//        for(int j = 0;j<N;j++)
//        {
//            cout<<grid[i][j]<<" ";
// 
//        }
//        cout<<endl;
//    }
//}
// 
//bool judge(int t_i,int t_j,vector<vector<int> >grid)
//{
//    for(int i = 0;i<N;i++)
//    {
//        if(i!=t_i && grid[t_i][t_j] == grid[i][t_j]) return false;
//    }
// 
//    for(int j = 0;j<N;j++)
//    {
//        if(j!=t_j && grid[t_i][t_j] == grid[t_i][j]) return false;
//    }
// 
//    int block_i = (t_i/3)*3;
//    int block_j = (t_j/3)*3;
// 
//    for(int i = 0;i<3;i++)
//    {
//        for(int j = 0;j<3;j++)
//        {
//            if(!(block_i+i == t_i && block_j+j == t_j) && grid[block_i+i][block_j+j] == grid[t_i][t_j]) return false;
//        }
//    }
// 
//    return true;
//}
// 
//void dfs(int n,vector<vector<int> >grid)
//{
//    if(n == N*N)
//    {
//        cout<<endl;
//        cout<<"The answer is :"<<endl;
//        for(int i = 0;i<N;i++)
//        {
//            for(int j = 0;j<N;j++)
//            {
//                cout<<grid[i][j]<<" ";
//            }
//            cout<<endl;
//        }
//        return;
//    }
//    else
//    {
//        int t_i = n/N;
//        int t_j = n%N;
//        if(vis[t_i][t_j]) dfs(n+1,grid);
//        else
//        {
//            for(int i = 1;i<=N;i++)
//            {
//                grid[t_i][t_j] = i;
// 
//                if(judge(t_i,t_j,grid))
//                {
//                    //print(grid);
//                    dfs(n+1,grid);
//                }
//            }
//        }
//    }
//}
// 
// 
//int main()
//{
//	long time1 ,time2;
//	time1=clock();
//    vector<vector<int> >grid(N,vector<int>(N));
// 	
//    for(int i = 0;i<N;i++)
//    {
//        for(int j = 0;j<N;j++)
//        {
//            cin>>grid[i][j];
//            vis[i][j] = !(!grid[i][j]);
//        }
//    }
// 
//    dfs(0,grid);
//	time2=clock();
//	cout<<"耗费时间："<<time2-time1<<" ms "<<endl; 
//    return 0;
//}
// 
// 
/**
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

#include <iostream>
#include <ctime>
#include<errno.h>
using namespace std;
 /*
00   02 03 04 05 
 
20   22 23    25   8/3   1 1 0 1 2 08 012
 */ 
int rule[3][9][9], sudoku[9][9], flag[9][9];
 
int findSmallIndex(int rowIndex, int colIndex) {
    return (3 * (rowIndex / 3) + (colIndex / 3));  //0-8  第几个9宫格    
}
 
int findNextValue(int rowIndex, int colIndex, int start) {
    int index = findSmallIndex(rowIndex, colIndex);
   // cout<<"kaishi= "<<start<<endl;
    for (int i = start; i < 9; i++) {
        if (rule[0][rowIndex][i]) continue; // 
        if (rule[1][colIndex][i]) continue;
        if (rule[2][index][i]) continue;
        return i;
    }
    return -1;
}
 
void changeRule(int rowIndex, int colIndex, int style) {
    int index = findSmallIndex(rowIndex, colIndex);
    int value = sudoku[rowIndex][colIndex];
    rule[0][rowIndex][value] = style;    
    rule[1][colIndex][value] = style;
    rule[2][index][value] = style;
}
 
void initSudoku() {
	int a;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
        	cin>>a;
			sudoku[i][j]=a-1;    //0 -1  flag=1  可用 
			
            flag[i][j] = ~sudoku[i][j] ? 0 : 1;  //sudoku[i][j]== 0 -1 1  
            
            if (!flag[i][j]) changeRule(i, j, 1);
        }
        getchar();
        
    }
}
 
void show() {
	cout<<"\n--------------------------\n\n";
	cout<<"---------------------\n";
    for (int i = 0; i < 9; i++) {
        string line = "";
        for (int j = 0; j < 9; j++) {
            cout<<sudoku[i][j]+1<<" ";
            if((j+1)%3==0)
            	cout<<"| ";
        }
        if(((i+1)%3==0)){
        	
        	cout<<"\n---------------------";
		}
        cout << endl;
    }
}
 
void solve(int rowIndex, int colIndex) {
    if (colIndex == 9) {rowIndex++;colIndex = 0;}
    while (rowIndex <= 8 && !flag[rowIndex][colIndex]) {
        colIndex++;if (colIndex == 9) {rowIndex++;colIndex = 0;}
    }
    if (rowIndex > 8) {show();return;}

    while ((sudoku[rowIndex][colIndex] = findNextValue(rowIndex, colIndex, sudoku[rowIndex][colIndex] + 1))!=-1) {//
		changeRule(rowIndex, colIndex, 1);
        solve(rowIndex, colIndex + 1);
        changeRule(rowIndex, colIndex, 0);//没有找到 
	    
    }
    if(sudoku[rowIndex][colIndex]==-1){
    //	cout<<"wu"<<endl;
    	return ;
	}
    
}
 
int main() {
    long time1, time2;
    initSudoku();
    time1 = clock();
    solve(0, 0);//从(0,0)位置开始填数
    time2 = clock();
    cout << "\n求解过程共用" << time2 - time1 << "毫秒" << endl;
    return 0;
}
