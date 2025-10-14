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
    int dfs(TreeNode* node, bool isl)
    {
        if(node==NULL)  return 0;
        if(node->left==NULL && node->right==NULL)   return isl?node->val:0;

        int ls=dfs(node->left,true);
        int rs=dfs(node->right,false);

        return ls+rs;
    }
    int sumOfLeftLeaves(TreeNode* root) {
       return dfs(root,false);
    }
};