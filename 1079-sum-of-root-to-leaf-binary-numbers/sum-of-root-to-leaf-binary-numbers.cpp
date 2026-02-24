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

    int dfs(TreeNode * rt,int x){
        if(rt==NULL)    return 0;
        x=x*2+rt->val;
        if(!rt->left && !rt->right) return x;
        return dfs(rt->left,x) + dfs(rt->right,x);
    }
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root,0);
    }
};