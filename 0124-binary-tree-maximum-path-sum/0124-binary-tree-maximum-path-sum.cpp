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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        f(root , maxi);
        return maxi;
    }
    int f (TreeNode* root, int &maxi){
        if (root == 0) return 0;
        int left = max(0, f(root->left,maxi));
        int right = max(0, f(root->right , maxi));
        maxi = max(left+right+root->val , maxi);
        return max(left , right)+root->val;
    }
};