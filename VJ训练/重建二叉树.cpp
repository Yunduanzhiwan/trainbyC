#include<iostream>
#include<vector>
using namespace std;


/*
��Ŀ����
����ĳ��������ǰ���������������Ľ����
���ؽ����ö����������������ǰ���������������Ľ���ж������ظ������֡�
��������ǰ���������{1,2,4,7,3,5,6,8}�������������{4,7,2,1,5,3,8,6}��
���ؽ������������ء�
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

        int mid = 0;//�ҵ��м������
        for (mid = 0; mid < vinLen; ++mid) {
            if (pre[0] == vin[mid]) {
                break;
            }
        }
        TreeNode* root = new TreeNode(pre[0]);

        //��������������
        vector<int> leftPre, leftVin;
        vector<int> rightPre, rightVin;

        //��
        int i = 0;
        for (i = 0; i < mid; ++i) {
            leftPre.push_back(pre[i + 1]);
            leftVin.push_back(vin[i]);
        }

        //��
        for (i = mid + 1; i < vinLen; ++i) {
            rightPre.push_back(pre[i]);
            rightVin.push_back(vin[i]);
        }

        //�ݹ鹹����������
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
    cout << "����ڵ�����";
    cin >> n;
    cout << "����ǰ������" << endl;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        pre.push_back(num);
    }

    cout << "������������" << endl;

    for (int i = 0; i < n; ++i) {
        cin >> num;
        vin.push_back(num);
    }
    
    TreeNode* root = ss.reConstructBinaryTree(pre, vin);
    ss.printTree(root);
    return 0;
}



