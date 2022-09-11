
/*
L1-8 ����A����B (15 ��)
������������A��B��Ҫ����������ǵĳ˻�����AB����Ҫע����ǣ�
ֻ�й�ģƥ��ľ���ſ�����ˡ�����A��R
?a
?? �С�C
?a
?? �У�B��R
?b
?? �С�C
?b
?? �У���ֻ��C
?a
?? ��R
?b
?? ���ʱ���������������ˡ�

�����ʽ��
�����Ⱥ������������A��B������ÿ������������һ���и���������R������C�����R�У�ÿ�и���C����������1���ո�ָ���������βû�ж���Ŀո����뱣֤���������R��C�����������������������ľ���ֵ������100��

�����ʽ��
���������������Ĺ�ģ��ƥ��ģ���������ĸ�ʽ����˻�����AB���������Error: Ca != Rb������Ca��A��������Rb��B��������

��������1��
2 3
1 2 3
4 5 6
3 4
7 8 9 0
-1 -2 -3 -4
5 6 7 8
�������1��
2 4
20 22 24 16
53 58 63 28
��������2��
3 2
38 26
43 -5
0 17
3 2
-11 57
99 68
81 72
�������2��
Error: 2 != 3
*/ 
#include<iostream>
using namespace std;
const int MAX=101;
int map1[MAX][MAX];
int map2[MAX][MAX];
 
int main(){
	int ca,ra,cb,rb;
	cin>>ra>>ca; 
	for(int i=0;i<ra;++i){
		for(int j=0;j<ca;++j){
			cin>>map1[i][j];
		}
	}
	
	cin>>rb>>cb; 
	for(int i=0;i<rb;++i){
		for(int j=0;j<cb;++j){
			cin>>map2[i][j];
		}
	}
	//����������ֱ�ӽ��� 
	if(ca!=rb){ 
		cout<<"Error: "<<ca<<" != "<<rb<<endl;
		exit(0);
	}
	
	//�������� 
    cout<<ra<<" "<<cb<<endl;
    int sum,flag;
	for(int i=0;i<ra;++i){
        flag=1;//�����жϵ�һ�еĵ�һ��������������������пո� 
		for(int j=0;j<cb;++j){
			 sum=0;
			for(int x=0;x<ca;++x){
				sum+=map1[i][x]*map2[x][j];
			}
            if(flag){
                cout<<sum;
                flag=0;
            }else{
                cout<<" "<<sum;
            }
			
		}
		cout<<endl;
	}
	return 0;
} 
