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
private:
    // Helper function that handles the boundaries of the current subarray
    TreeNode* buildBalancedBST(const vector<int>& nums, int start, int end) {
        // Base Case: If the window closes, there are no elements left to process
        if (start > end) {
            return nullptr;
        }

        // Always pick the middle element to keep left and right subtrees balanced
        int mid = start + (end - start) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        // Recursively build the left subtree from the left half of the array
        root->left = buildBalancedBST(nums, start, mid - 1);

        // Recursively build the right subtree from the right half of the array
        root->right = buildBalancedBST(nums, mid + 1, end);

        return root;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // Start the recursive builder with boundaries from 0 to n-1
        return buildBalancedBST(nums, 0, nums.size() - 1);
    }

int main(){

}