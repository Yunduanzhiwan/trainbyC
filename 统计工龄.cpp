//#include<bits/stdc++.h> 
//#include<vector>
//using namespace std;
//int v[100005]={0};
//int nums[100005]={0};
//int n;
//void mysort(){
//	for(int i=0;i<n-1;++i){
//		for(int j=i+1;j<n;++j){
//			if(nums[i]>nums[j]){
//				int t=nums[j];
//				nums[j]=nums[i];
//				nums[i]=t; 
//			}
//		}
//	}
//}
//int main(){
//	
//	cin>>n;
//	int num;
//	for(int i=0;i<n;++i){
//		cin>>num;
//		
//		if(v[num]==0){
//			nums[i]=num;
//		}
//		v[num]++;
//		//v.push_back(num);
//	}
////	for(int i=0;i<n;++i)cout<<nums[i]<<" ";
//	cout<<endl;
//	mysort();
////	for(int i=0;i<n;++i)cout<<nums[i]<<" ";
//	cout<<endl;
////	sort(&nums,num); 
//	for(int i=0;i<n;++i){
//		if(v[nums[i]]>0){
//			cout<<nums[i]<<":"<<v[nums[i]]<<endl;
//			v[nums[i]]=0;
//		}
//	} 
//	
//	
//	return 0;
//}


#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int t=a; a=b; b=t;
}
void show_result(int A[],int N){
	int cnt=0,age=A[0];
  for(int i=0;i<N;i++){
   if(A[i]==age) cnt++;
   else {cout<<age<<":"<<cnt<<endl; age=A[i]; cnt=1;}
	}
	cout<<age<<":"<<cnt<<endl;
}
void Bubble_sort(int A[],int N){//冒泡排序法
	for(int i=1;i<=N-1;i++){
		int flag=0;
		for(int j=0;j<=N-1-i;j++)
		if(A[j]>A[j+1]) {flag=1; swap(A[j],A[j+1]);}
		if(flag==0) break;	
	}
}
void Insertion_sort(int A[],int N){//插入排序法
  int i,j;
	for(i=1;i<N;i++){
		int temp=A[i];
		for(j=i;j>0;j--){
			if(A[j-1]>temp) A[j]=A[j-1];
			else break;
		}
		A[j]=temp;
	}
}
void percdown(int A[],int N,int i){//最大堆下滤
	int parent,child,temp=A[i];
	for(parent=i;2*parent+1<=N-1;parent=child){
		child=2*parent+1;
		if(child<N-1&&A[child+1]>A[child]) child++;
		if(temp<A[child]) A[parent]=A[child];
		else break;
	}
	A[parent]=temp;
}
void buildheap(int A[],int N){//建立最大堆
  for(int i=(N-1)/2;i>=0;i--){
  	percdown(A,N,i);
	 }
}
void heap_sort(int A[],int N){//堆排序
  buildheap(A,N);
  int size=N;
	 for(int i=1;i<=N-1;i++){
	 	 swap(A[0],A[size-1]);
	 	 percdown(A,--size,0);
	 }
}
void shell_sort(int A[],int N){//Sdegewick增量序列的希尔排序
	int IncrementSequence_Sedgewick[]={0,
 1,5,19,41,109,209,505,929,
 2161,3905,8929,16001,36289,64769,146305,260609,
 587521,1045505,2354689,4188161,9427969,16764929,37730305,67084289,
 150958081,268386305,603906049,1073643521};
 int i=1,len,j,k;
 while(IncrementSequence_Sedgewick[++i]<=N){}
 for(i=i-1;i>=1;i--){
 	len=IncrementSequence_Sedgewick[i];
		for(j=len;j<N;j++){
 	int temp=A[j];
 	for(k=j;k>=len;k-=len)
		{
 if(temp<A[k-len]) swap(A[k],A[k-len]);
		else break;}
 A[k]=temp;
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
		 center=(l+rend)/2;
		Msort(A,l,center,temp);
		Msort(A,center+1,rend,temp);
		Merge(A,l,center+1,rend,temp);
	}
}
void Merge_sort(int A[],int N){//归并排序（递归）
	int *temp;
	temp=(int*)malloc(N*sizeof(int));
	if(temp!=NULL){
		Msort(A,0,N-1,temp);
		free(temp);
	}
	else cout<<"there is no enough space!"<<endl;
}
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
	else
	for(int j=i;j<N;j++) temp[j]=A[j];
}
void Merge_sort2(int A[],int N){//（非递归）归并排序
	int *temp;
	temp=(int*)malloc(N*sizeof(int));
	if(temp!=NULL){
	int len=1;
	while(len<N){
		Merge_pass(A,N,len,temp);
		len*=2;
		Merge_pass(temp,N,len,A);
		len*=2;
	}
	free(temp);	
	}
	else cout<<"there is no enough space !"<<endl;
}
int getpivot(int A[],int l,int r){//获得pivot?
	int m=(l+r)/2;
	if(A[m]<A[l]) swap(A[m],A[l]);
	if(A[r]<A[l]) swap(A[r],A[l]);
	if(A[r]<A[m]) swap(A[r],A[m]);
	swap(A[m],A[r-1]);
	return A[r-1];
}
void Qsort(int A[],int l,int r){//快速排序递归核心算法
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
void Quick_sort(int A[],int N){// 快速排序
	Qsort(A,0,N-1);
}
int main(){
	int N; cin>>N;
	int A[N];
	for(int i=0;i<N;i++)
	cin>>A[i];
	Quick_sort(A,N);
	show_result(A,N);
	return 0;
}
