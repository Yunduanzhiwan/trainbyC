#include<stdio.h>
struct s{
	float a;
	short b;
	char c;

}*p;
int main(){
	float a;
	short b;
	printf("%d,%d,%d",sizeof(a),sizeof(b),sizeof(*p)); 

	
	return 0;
}
