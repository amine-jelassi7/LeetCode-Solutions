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
    int max = 0;
    int ans = 0;

    void dfs(TreeNode* node, int depth) {
        if (!node) return;
        if (depth > max) {
            max = depth;
            ans = node->val;          
        } else if (depth == max) {
            ans += node->val;         
        }
        dfs(node->left, depth + 1);
        dfs(node->right, depth + 1);
    }

public:
    int deepestLeavesSum(TreeNode* root) {
        dfs(root, 0);
        return ans;
    }
};