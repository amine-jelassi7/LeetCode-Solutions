/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int depth(struct TreeNode* root)
{
    if (root==NULL) return 0;
    int right = depth(root->right);
    int left = depth(root->left);

    if(right<left) return left+1;
    return right +1;
}
bool isBalanced(struct TreeNode* root) {
    if(root==NULL) return true;
    return (abs(depth(root->right)-depth(root->left))<=1)&& isBalanced(root->right) &&isBalanced(root->left) ;
}