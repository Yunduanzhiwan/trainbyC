#include<iostream>
#include<vector>
using namespace std;


/*
题目描述
输入某二叉树的前序遍历和中序遍历的结果，
请重建出该二叉树。假设输入的前序遍历和中序遍历的结果中都不含重复的数字。
例如输入前序遍历序列{1,2,4,7,3,5,6,8}和中序遍历序列{4,7,2,1,5,3,8,6}，
则重建二叉树并返回。
*/

 
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {

public:
    Solution() {};
    TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
        int vinLen = vin.size();
        if (vinLen == 0)return NULL;

        int mid = 0;//找到中间根坐标
        for (mid = 0; mid < vinLen; ++mid) {
            if (pre[0] == vin[mid]) {
                break;
            }
        }
        TreeNode* root = new TreeNode(pre[0]);

        //左右子树的数组
        vector<int> leftPre, leftVin;
        vector<int> rightPre, rightVin;

        //左
        int i = 0;
        for (i = 0; i < mid; ++i) {
            leftPre.push_back(pre[i + 1]);
            leftVin.push_back(vin[i]);
        }

        //右
        for (i = mid + 1; i < vinLen; ++i) {
            rightPre.push_back(pre[i]);
            rightVin.push_back(vin[i]);
        }

        //递归构建左右子树
        root->left = reConstructBinaryTree(leftPre, leftVin);
        root->right = reConstructBinaryTree(rightPre, rightVin);

        return root;
    }
    void printTree(TreeNode* root) {
        if (root == NULL)return;
        printTree(root->left);
        printTree(root->right);
        cout << root->val << " ";
    }
};
int main() {
	Solution ss; 
    ios::sync_with_stdio(false);
    vector<int> pre, vin;
    int n, num;
    cout << "输入节点数：";
    cin >> n;
    cout << "输入前序数组" << endl;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        pre.push_back(num);
    }

    cout << "输入中序数组" << endl;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        vin.push_back(num);
    }
    
    TreeNode* root = ss.reConstructBinaryTree(pre, vin);
    ss.printTree(root);
    return 0;
}



