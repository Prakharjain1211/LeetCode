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
    void Inorder(vector<int>&io,TreeNode* a)
    {
        if(a==NULL)
        {
            io.push_back(10000);
        }
        else
        {
            io.push_back(a->val);
            Inorder(io,a->left);
            Inorder(io,a->right);
        }
    }
    
        void Preorder(vector<int>&io,TreeNode* a)
    {
        if(a==NULL)
        {
            io.push_back(10000);
        }
        else
        {
            io.push_back(a->val);
            Preorder(io,a->left);
            Preorder(io,a->right);
        }
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
    vector<int>io1,io2,po1,po2;
    Inorder(io1,p);
    Inorder(io2,q);
        
    Preorder(po1,p);
    Preorder(po2,q);
        
        if(io1==io2 && po1==po2)
        {
            return true;
        }
        return false;
    }
};