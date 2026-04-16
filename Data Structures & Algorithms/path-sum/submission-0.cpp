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
    // helper(root(1), 3, 0)
    // helper(root(2), 3, 1)

    bool hasPathSum(TreeNode* root, int targetSum) {
        return helper(root, targetSum, 0);
    }

    bool helper(TreeNode* root, int targetSum, int currentSum) {
        if (!root) return false;

        int newSum = currentSum + root->val;

        if (!root->left && !root->right)
            return newSum == targetSum;

        bool left = helper(root->left, targetSum, newSum);
        bool right = helper(root->right, targetSum, newSum);
        
        return left || right;
    }
};