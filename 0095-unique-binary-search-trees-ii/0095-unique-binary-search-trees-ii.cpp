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
    vector<vector<vector<TreeNode*>>> memo;

    vector<TreeNode*> helper(int start, int end){
        vector<TreeNode*> ans;
        if(start>end){
            ans.push_back(NULL);
            return ans;
        }
        if(!memo[start][end].empty()) return memo[start][end];

        for(int i=start;i<=end;i++){
            vector<TreeNode*> leftSub= helper(start,i-1);
            vector<TreeNode*> rightSub= helper(i+1,end);
            for(auto lt:leftSub){
                for(auto rt:rightSub){
                    TreeNode* root= new TreeNode(i);

                    root->left=lt;
                    root->right= rt;
                    ans.push_back(root);
                }
            }

        }
        memo[start][end] = ans;
        return ans;
    }
    vector<TreeNode*> generateTrees(int n) {

        memo = vector<vector<vector<TreeNode*>>>(n + 1, vector<vector<TreeNode*>>(n + 1));

        vector<TreeNode*> res= helper(1,n);
        memo.clear();
        return res;

        
    }
};