/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3322/ */

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
    /* concept is x & y should not be of same parent and must have same height */
    int fun(TreeNode* root, int x, int y, int* p, int* h1, int* h2, int h)
    {
        if(root == NULL)
            return -1;
        int l = fun(root->left, x, y, p, h1, h2, h+1);
        int r = fun(root->right, x, y, p, h1, h2, h+1);
        if((l == x && r == y) || (l == y && r == x))
        {   
             *p = -1;
             return -1;
        }
        else
        { 
            if(l == x || r == x)
            {   
               *h1 = h;
            }
            else if(l == y || r == y)
            {    
               *h2 = h;
            }
        }
        return root->val;   
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL)
            return false;
        int p = 0, h1 = 0, h2 = 0, h = 1;
        int r = fun(root, x, y, &p, &h1, &h2, h);
        if(p == -1)
            return false;
        if(h1 != h2)
            return false;
        return true;
    }
};
