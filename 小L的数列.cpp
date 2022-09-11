//#include<bits/stdc++.h>
//#include<algorithm>
//using namespace std;
//const int N=100002;
//int t,n;
//int num[N];
//int l=0;
//void quickSort(int *array, int left, int right)
//{
//	if(left < right)
//	{
//		int pivot = array[left];
//		int low = left, high = right;
//		while(low < high)
//		{
//			while(array[high] >= pivot && low < high)
//				high--;
//			array[low] = array[high];
//			
//			while(array[low] <= pivot && low < high)
//				low++;
//			array[high] = array[low];
//		}
//		array[low] = pivot;
//		
//		quickSort(array, left, low - 1);
//		quickSort(array, low + 1, right);
//	}
//}
//int solve(int l,int r){
//	if(l>=n||r>=n)return 1;
//	if(__gcd(num[l],num[r])>1){
//		return 1+solve(r,r+1);
//	}else{
//		return max(solve(l,r+1),solve(r,r+1));
//	}
//} 
//int main(){
//	scanf("%d",&t);
//	while(t--){
//		int l=0;
//		memset(num,0,sizeof(int)*N);
//		scanf("%d",&n);
//		for(int i=0;i<n;++i){
//			scanf("%d",&num[i]);
//		}
//		quickSort(num,0,n-1);
//	//	cout<<solve(0,1)<<endl;
//		printf("%d\n",solve(0,1));
//	}	
//	
//	return 0;
//} 
//


#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
const int N=100002;
int t,n;

int l=0;
void quickSort(int *array, int left, int right)
{
	if(left < right)
	{
		int pivot = array[left];
		int low = left, high = right;
		while(low < high)
		{
			while(array[high] >= pivot && low < high)
				high--;
			array[low] = array[high];
			
			while(array[low] <= pivot && low < high)
				low++;
			array[high] = array[low];
		}
		array[low] = pivot;
		
		quickSort(array, left, low - 1);
		quickSort(array, low + 1, right);
	}
}

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
void Merge(int arr[], int l, int q, int r){
    int n=r-l+1;//临时数组存合并后的有序序列
    int* tmp=new int[n];
    int i=0;
    int left=l;
    int right=q+1;
    while(left<=q && right<=r)
        tmp[i++] = arr[left]<= arr[right]?arr[left++]:arr[right++];
    while(left<=q)
        tmp[i++]=arr[left++];
    while(right<=r)
        tmp[i++]=arr[right++];
    for(int j=0;j<n;++j)
        arr[l+j]=tmp[j];
    delete [] tmp;//删掉堆区的内存
}
 
void MergeSort(int arr[], int l, int r){
    if(l==r)
        return;  //递归基是让数组中的每个数单独成为长度为1的区间
    int q = (l + r)/2;
    MergeSort(arr, l, q);
    MergeSort(arr, q + 1, r);
    Merge(arr, l, q, r);
    
}
int solve(int *arr,int l,int r){
	if(l>=n||r>=n)return 1;
	if(__gcd(arr[l],arr[r])>1){
		return 1+solve(arr,r,r+1);
	}else{
		return max(solve(arr,l,r+1),solve(arr,r,r+1));
	}
}
void solve(int *arr,int l){
	int maxnum=0;
	int t=0;
	int* nums=new int[n];
	for(int i=0;i<n;++i){
		nums[i]=0;
	}
//	cout<<endl;
	for(int i=0;i<n-1;++i){
		t=i;
		while(!nums[i]&&t<n-1){
			if(__gcd(arr[i],arr[++t])>1){
				nums[i]=t;
				break; 
			}
		}
	}
	
	for(int i=0;i<n;++i){
		cout<<nums[i]<<" ";
	}
	
	int sum=0;
	for(int i=0;i<n-1;++i){
		sum=0;
		t=i;
		if(nums[t]){
			sum++;
		}
		while(nums[t]){
			sum++;
			t=nums[t];
		}
		if(sum>maxnum)maxnum=sum;
	}
	cout<<maxnum<<endl;
	free(nums);
}
int main(){
	
	scanf("%d",&t);
    int i;
	while(t--){
		
        scanf("%d",&n);
	//	memset(num,0,sizeof(int)*n);
		int num[n];
		for(i=0;i<n;++i){
			scanf("%d",&num[i]);
		}
		MergeSort(num,0,n-1);
		solve(num,0);
	//	cout<<solve(0,1)<<endl;
//		printf("%d\n",solve(num,0));
	}	
	
	return 0;
} 


