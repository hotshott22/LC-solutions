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
void pre(TreeNode* root, vector<int> &v)
{
    if(root==NULL)  return;

    
    pre(root->left,v);
    v.push_back(root->val);
    pre(root->right,v);
}

void solve(TreeNode* root, int &cnt, int &ans, int k)
{
    if(root==NULL)  return;

    solve(root->left,cnt,ans,k);
    cnt++;
    if(cnt==k){
        ans=root->val;
        return;
    }
    solve(root->right,cnt,ans,k);
}
    int kthSmallest(TreeNode* root, int k) {
        // vector<int> v;

        // pre(root,v);
        // // sort(v.begin(),v.end());
        // return v[k-1];
        int cnt=0;
        int ans;
        solve(root,cnt,ans,k);
        return ans;

    }
};