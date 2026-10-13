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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;

        int leftheight = height(root->left);
        int rightheight = height(root->right);
        int diameter = leftheight + rightheight;
        int subtree = max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)); 
        return max(diameter, subtree);
    }
    int height(TreeNode* root){
        if(!root) return 0;
         return 1 + max(height(root->left), height(root->right));
    }
};
