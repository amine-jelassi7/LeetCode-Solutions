/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void traversal (TreeNode* root, int* sum,int low,int high)
    {
        if(root== NULL) return;
        if(root->val > low && root->val >high) traversal(root->left,sum,low,high);
        else if(root->val < low && root->val <high) traversal(root->right,sum,low,high);
        else 
        {
            traversal(root->left,sum,low,high);
            (*sum)+=root->val;
            traversal(root->right,sum,low,high);
        }
    }
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum = 0;
        traversal(root,&sum,low,high);
        return sum;
    }
};