#include<iostream>
using namespace std;
int main(){
	char str[12];
	printf("input your studentId:");
	scanf("%s",&str);
	printf("you strId:%s\n",str);
	
	printf("input yourStartId:");
	int youStart=26;
	scanf("%d",&youStart); 
	int youStemp=32;
	printf("input yourStemp:");
	scanf("%d",&youStemp); 
	
	char charArrayName[50];
	int arraySize=256;
	printf("input your charArrayName:");
	scanf("%s",&charArrayName);
	printf("input your arraySize:");
	scanf("%d",&arraySize);

	int res=0;
	printf("you answord is \n");
	printf("char %s[%d]={",&charArrayName,arraySize);
	for(int i=0;i<youStart;++i){
		if(i!=0)printf(",");
		printf("\'%c\'",'0');
	}
	for(int i=0;i<11;++i){
		str[i]=str[i]-((youStart+i)%youStemp);
		char t=str[i]+(youStart+i)%youStemp;
		printf(",%d",str[i]);
	}
	res-=(youStart+11)%youStemp;
	printf(",%d};\n",res);
	return 0;
} 
