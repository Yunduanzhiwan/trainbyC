//����n��������ƺͶ��ۣ�����Ҫ���д���򣬲��Ҳ�������ж�����ߺ���͵�������ƺͶ��ۡ�
//�����ʽ:
//
//�����һ�и���������n��<10����������n�������Ϣ��ÿ������һ���и��������������Ȳ�����30���ַ��������һ���и�����ʵ���۸���Ŀ��֤û��ͬ���۸���顣
//�����ʽ:
//
//��һ���а��ա��۸�, �������ĸ�ʽ�Ⱥ�����۸���ߺ���͵��顣�۸���2λС����
//��������:
//
//3
//Programming in C
//21.5
//Programming in VB
//18.5
//Programming in Delphi
//25.0
//
//�������:
//
//25.00, Programming in Delphi
//18.50, Programming in VB


#include<stdio.h>
#include<string.h>
struct Book{
    char name[31];
    double price;
}bs[10];
int main(void){
    int n;
    scanf("%d",&n);
    int max=0;
    int min=0;
    int num=0;
    int num1=0;
    for(int i=0;i<n;i++){
    	scanf("\n");
     gets(bs[i].name);

		scanf("%lf",&bs[i].price);
		if(i==0){
			min=bs[i].price;
		}
		
		if(bs[i].price>max){
			max=bs[i].price;
			num=i;
		}
		else if(bs[i].price<min){
			min=bs[i].price;
			num1=i;
		}
    }
    printf("%.2lf, %s\n",bs[num].price,bs[num].name);
    printf("%.2lf, %s\n",bs[num1].price,bs[num1].name);
    return 0;
}
