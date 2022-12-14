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
    int Check(TreeNode* left, TreeNode* right)
    {
        if(left==NULL && right==NULL) return true;
        
        if(left && right && left->val==right->val)
            return Check(left->left, right->right) && Check(left->right, right->left);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        if (root==NULL)
            return true;
        return Check(root->left, root->right);
    }
};