#include<stdio.h>

int test_absVal(int x) {
  return (x < 0) ? ~x+1 : x;
}
int my_absVal(int x){
	int t = (x>>31); 
	return (x+t)^t;
}

int qufan(int x){
	return (x^1);
}
int qufan1(int x){
	int t=x>>31;
	printf("x>>31=%d\n",t);
	return (-3)^(-1);
}
int specialBits() {
    return ~(~((1<<31)>>9));
}
/// test(3)=-3 
//负数的取反+1==（负数-1）与-1异或 
//正数的取反+1==正数与-1异或 
//
//0010
//1111
//1101
 
//1101
//1100
//1011 -3  


//10000010  -2
//01111110
//
//10000001 -3
//
//11111111 -1
//01111110 补码
//
//
//01111101
//00000010
//
//10000011 -3
//10000001 -1
//00000010
//
//
//10000001  2
//00000010

int main(){
	int a=3;     
	int b=-2;
	printf("~2=%d\n",~2);
	printf("2^1=%d\n",2^1);
	printf("a=%d test_abs(a)=%d  my_abs(a)=%d\n",a,test_absVal(a),my_absVal(a));
	printf("b=%d test_abs(b)=%d  my_abs(b)=%d\n",b,test_absVal(b),my_absVal(b));
	
	
	printf("a=%d ~a=%d  ~a=%d\n",a,qufan(a),qufan1(a));
	printf("b=%d ~b=%d  ~b=%d\n",b,qufan(b),qufan1(b));
	
	printf("%x\n",specialBits()); 
	return 0;
} 
