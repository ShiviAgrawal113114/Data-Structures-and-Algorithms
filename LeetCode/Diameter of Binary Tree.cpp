/* https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3293/ */

/* try to solve it again */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* node) 
    { 
     
        if(node == NULL) 
            return 0; 
        if(node->left == NULL && node->right == NULL)
            return 0;
        return 1 + max(height(node->left), height(node->right)); 
    } 
    int diameterOfBinaryTree(TreeNode* root) {
          if (root == NULL) 
                return 0; 
          int lheight = height(root->left); 
          int rheight = height(root->right); 
 
          int ldiameter = diameterOfBinaryTree(root->left); 
          int rdiameter = diameterOfBinaryTree(root->right); 
          
          if(root->left && root->right)
             return max(lheight + rheight + 2, max(ldiameter, rdiameter)); 
          else if(root->left || root->right)
             return max(lheight + rheight + 1, max(ldiameter, rdiameter));
          else
             return max(lheight + rheight , max(ldiameter, rdiameter)); 
    }
};
