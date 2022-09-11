#include<iostream>
using namespace std;
int main(){
	int lun[5];
	int ya,cha;
	
	int max=0;
	for(int i=1;i<=4;++i){
		cin>>lun[i];
		if(lun[i]>max){
			max=lun[i];
		}
	}
	
	
	cin>>ya>>cha;
	
	int falg1,falg2;
	int indx=0;
	falg1=falg2=0;
	for(int i=1;i<=4;++i){
		if((max-lun[i])>cha||lun[i]<ya){
			indx=i;
			if(falg1==0){
				falg1=1;
			}else{
				falg2=1;
			}
		}
	}
	if(!falg2&&falg1){
		cout<<"Warning: please check #"<<indx<<"!";
	}else if(falg2){
		cout<<"Warning: please check all the tires!"<<endl;
	}else{
		cout<<"Normal"<<endl;
	}
	
	
	
	
	return 0;
}
