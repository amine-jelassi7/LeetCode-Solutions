/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void invert_tree(struct TreeNode* root)
{
    if(root==NULL) return;
    else
    {
        struct TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        invert_tree(root->left);
        invert_tree(root->right);
    }
}

bool same_tree(struct TreeNode* tree1,struct TreeNode* tree2)
{
    if (tree1==NULL && tree2 ==NULL) return true;
    else if(tree1==NULL || tree2==NULL) return false;
    
    return (tree1->val == tree2->val) && same_tree(tree1->left,tree2->left) && same_tree(tree1->right,tree2->right);
}

bool isSymmetric(struct TreeNode* root) {
    if (root==NULL) return true;

    invert_tree(root->right);

    return same_tree(root->left,root->right);
    
}