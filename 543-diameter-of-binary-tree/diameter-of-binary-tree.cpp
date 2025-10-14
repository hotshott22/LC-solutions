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
    int ht(TreeNode* root, int& dia){

        if(!root)   return 0;

        int l=ht(root->left,dia);
        int r=ht(root->right,dia);

        dia=max(dia,l+r);

        return max(l,r)+1; 
    }
    int diameterOfBinaryTree(TreeNode* root) {

        int dia=0;
        ht(root,dia);

        return dia;
        
    }

private:
// int ht(TreeNode* root, int& dia){

//         if(!root)   return 0;

//         int l=ht(root->left,dia);
//         int r=ht(root->right,dia);

//         dia=max(dia,l+r);

//         return max(l,r)+1; 
//     }
};