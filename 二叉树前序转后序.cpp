/*
https://blog.csdn.net/weixin_45755831/article/details/115422224
*/ 
#include <stdio.h>
const int MAXN=10010;
int Index;
int pre[MAXN];
int post[MAXN];

void BST_Pre2Post(int root,int tail){
	//�� root ���� tail��ʱ�� �Ͳ���һ�������ˡ�
    if(root > tail) return;
    int i = root+1, j = tail;
    while(pre[i] <= pre[root] && i <= tail) i++;
    while(pre[j] > pre[root] && j > root) j--;
	// ����i��һ������j�Ļ����Ͳ���������ǰ���֤���ˡ�
    if(i - j != 1) return;
    //�����Ƿָ������ݽ��б��棬
    //���ȱ���left��Ȼ����right��������root��
    //���Ϻ��������
    //�����left
    BST_Pre2Post(root+1,j);
    //�����right
    BST_Pre2Post(i,tail);
	//�����root
    post[Index++]=pre[root];
}

int main(){
	Index = 0;
	int n,i;
	printf("��������������ȣ�");
    scanf("%d",&n);
    printf("�����볤��Ϊ%d�Ķ�������ǰ�������\n",n);
    for(i =0;i<n;i++){
        scanf("%d",&pre[i]);
    }
    BST_Pre2Post(0,n-1);
    printf("�ö������ĺ������Ϊ��\n");
    printf("%d",post[0]);
    for(i =1;i<n;i++){
        printf(" %d",post[i]);
    }
    return 0;
}




