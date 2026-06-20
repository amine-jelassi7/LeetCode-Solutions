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
public:
    TreeNode* bstToGst(TreeNode* root) {
        sum(root);
        return root;
    }


private:
    int total = 0;
    void sum(TreeNode* root)
    {
        if (root==NULL) return;
        sum(root->right);
        total += root->val;
        root->val = total;
        sum(root->left);
    }
};