#include<iostream>
using namespace std;

bool Find(int *matrix,int rows,int columns,int number){
	bool found=false;
	
	if(matrix!=NULL&& rows>0 && columns>0){
		
		int row=0;
		int column=columns-1;
		while(row<rows&& column>=0){
			cout<<"FINd="<<matrix[row*columns+column]<<endl;
			if(matrix[row*columns+column]==number){
				found=true;
				break;
			}else if(matrix[row*columns+column]>number)
				--column;
			else
				++row;
		}
		
	}
	
	return found;
	
}

int main(){
	int nums[16]={
					1,2,8,9,
					2,4,9,12,
					4,7,10,13,
					6,8,11,15
					};
	
	cout<<Find(nums,4,4,1);
//	if(res){
//		cout<<"YES"<<endl;
//	}else{
//		cout<<"NO"<<endl;
		
//	}
	return 0;
} 
