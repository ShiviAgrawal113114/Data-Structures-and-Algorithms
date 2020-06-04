/* https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/532/week-5/3314/ */

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

/* Nice question try again */
class Solution {
public:
    int max(int a, int b)
    {
        if(a > b)
            return a;
        else
            return b;
    }
    int maxPath(TreeNode* root, int& a)
    {
        if(root == NULL)
            return 0;
        int left = maxPath(root->left, a);
        int right = maxPath(root->right, a);
        int case1 = max((left + right + root->val), root->val);
        int case2 = max(case1, (left + root->val));
        int case3 = max(case2, (right + root->val));
        a = max(a, case3);
        
        int temp = max(left, right) + root->val;
        temp = max(temp, root->val);
        return temp;
    }
    int maxPathSum(TreeNode* root) {
        if(root == NULL)
            return 0;
        int a = INT_MIN;
        int r = maxPath(root, a);
        return a;
    }
};
