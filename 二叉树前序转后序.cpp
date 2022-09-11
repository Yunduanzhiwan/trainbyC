/*
https://blog.csdn.net/weixin_45755831/article/details/115422224
*/ 
#include <stdio.h>
const int MAXN=10010;
int Index;
int pre[MAXN];
int post[MAXN];

void BST_Pre2Post(int root,int tail){
	//当 root 大于 tail的时候 就不是一个区间了。
    if(root > tail) return;
    int i = root+1, j = tail;
    while(pre[i] <= pre[root] && i <= tail) i++;
    while(pre[j] > pre[root] && j > root) j--;
	// 这里i加一不等于j的话，就不符合我们前面的证明了。
    if(i - j != 1) return;
    //下面是分隔成三份进行保存，
    //首先保存left，然后是right，最后才是root。
    //符合后序遍历。
    //这个是left
    BST_Pre2Post(root+1,j);
    //这个是right
    BST_Pre2Post(i,tail);
	//这个是root
    post[Index++]=pre[root];
}

int main(){
	Index = 0;
	int n,i;
	printf("请输入二叉树长度：");
    scanf("%d",&n);
    printf("请输入长度为%d的二叉树的前序遍历：\n",n);
    for(i =0;i<n;i++){
        scanf("%d",&pre[i]);
    }
    BST_Pre2Post(0,n-1);
    printf("该二叉树的后序遍历为：\n");
    printf("%d",post[0]);
    for(i =1;i<n;i++){
        printf(" %d",post[i]);
    }
    return 0;
}




