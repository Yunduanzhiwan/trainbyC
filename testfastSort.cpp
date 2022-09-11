#include<iostream>
using namespace std;
template<class T>
int cmp1(T a,T b){
	return a<b;
}
template<class T> 
void quick_sort(T *q, int l, int r)
{
    if (l>=r) return;
    int i = l - 1;
	int j = r + 1;
	T  x=q[(l + r)/2] ;
	T t;
    while (i < j)
    {
       
        do {
        	i ++ ;
		} while (cmp1(q[i] , x));
        do{
        	 j -- ;
		} while (cmp1( x,q[j] ));
        if (i < j) 
        {
        	
        	t=q[i];
        	q[i]=q[j]; 
        	q[j]=t;
		}

        else break;
    }
   
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}
void quick_sort2(string *src,int l,int r){
	
	if(l>=r)return;
	int i=l-1;
	int j=r+1;
	string x=src[ (l+r) >> 1 ];//(i+j)/2
	string t;
	
	while(i<j){
		do {
			i++;
		}while(cmp1(src[i] , x));
		do{
			j--;
		}while(cmp1(x,src[j]));
		
		if(i<j){
			t=src[i];
			src[i]=src[j];
			src[j]=t;
		}else{
			 //cout<<"i="<<i<<" j="<<j<<endl;
			 break;
		}
	}
	quick_sort2(src,l,j);//i!=j
	quick_sort2(src,j+1,r);
} 
int main(){
//	string src[5]={"blue",
//"red",
//"yellow", 
//"green",
//"purple"};
	int src[5]={1,2,2,0,4};
	quick_sort(src,0,5);
	for(int i=0;i<5;++i){
		cout<<src[i]<<" ";
	}
	
	
	
	return 0;
}
