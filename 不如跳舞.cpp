#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<queue>
using namespace std;
char map[103][103];
int nums[103];
int vis[103]={0}; //�Ƿ���ʹ� 
queue<int> q;//���� 
int main(){
	ios::sync_with_stdio(false);//���������� 
	memset(nums,-1,sizeof(nums));
	int n;//�������� 
	cin>>n;
	
	for(int i=0;i<n;++i)
		for(int j=0;j<n;++j)
			cin>>map[i][j];

	q.push(0);//��A�Ž����� 
	nums[0]=-1;//A��B�ľ��� 
	vis[0]=1;//�Ѿ����ʣ����治��ѡ 
	int t;
	while(!q.empty()){
		t=q.front();//ȡ��һ���� 
		q.pop();
		
		//���������� 
		for(int i=0;i<n;++i){
			//�鿴���������Ƿ���t�����ѣ��Ƿ񱻷��ʹ� 
			if(map[t][i]=='Y'&&vis[i]==0){
				if(i==1){//ͨ���м��������������� 
					cout<<nums[t]+1<<endl;
					return 0;
				}	
				//���м����ѷŽ����� 
				q.push(i);
				vis[i]=1;//�����ѷ��ʣ������������ѣ��ٴα����������������ѭ�� 
				nums[i]=nums[t]+1;//0��������ѵ��м����Ѹ���������������� 
			}
		}
	}
	//û���м����� 
	cout<<"-1"<<endl;
	return 0;
}
