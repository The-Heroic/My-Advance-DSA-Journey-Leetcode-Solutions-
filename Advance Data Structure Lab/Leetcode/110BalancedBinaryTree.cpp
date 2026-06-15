#include <bits\stdc++.h>
using namespace std;


 struct TreeNode {
     int val;
    TreeNode *left;
    TreeNode *right;
   TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        
    }
};

/**
 * Definition for a binary tree node.
 */
class Solution {
public:
    // Helper function to find the height of a tree
    int height(TreeNode* node) {
        // Base case: an empty tree has height 0
        if (node == nullptr) {
            return 0;
        }
        // Recursive height calculation
        return 1 + max(height(node->left), height(node->right));
    }

    bool isBalanced(TreeNode* root) {
        // Base case: An empty tree is height-balanced
        if (root == nullptr) {
            return true;
        }

        // 1. Get height of left and right subtrees
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        // 2. Check current node's balance and recurse on children
        // The current node is balanced if the difference is <= 1
        bool currentBalanced = abs(leftHeight - rightHeight) <= 1;

        // The whole tree is balanced only if the current node is balanced
        // AND all children subtrees are also balanced.
        return currentBalanced && isBalanced(root->left) && isBalanced(root->right);
    }
};


int main(){


}