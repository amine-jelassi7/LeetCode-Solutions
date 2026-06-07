/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) {
    if (root==NULL) return 0;

    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    
    if(right< left) return left+1;
    else return right+1;


}