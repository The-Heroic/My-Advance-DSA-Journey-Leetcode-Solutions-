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
    TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int, TreeNode*> nodeMap;
        unordered_set<int> childrenSet;

        // Step 1 & 2: Build nodes and assign relationships
        for (const auto& desc : descriptions) {
            int parentVal = desc[0];
            int childVal = desc[1];
            int isLeft = desc[2];

            // Instantiate parent node if it doesn't exist yet
            if (nodeMap.find(parentVal) == nodeMap.end()) {
                nodeMap[parentVal] = new TreeNode(parentVal);
            }
            
            // Instantiate child node if it doesn't exist yet
            if (nodeMap.find(childVal) == nodeMap.end()) {
                nodeMap[childVal] = new TreeNode(childVal);
            }

            // Link the pointers securely
            if (isLeft == 1) {
                nodeMap[parentVal]->left = nodeMap[childVal];
            } else {
                nodeMap[parentVal]->right = nodeMap[childVal];
            }

            // Mark this node value as a child
            childrenSet.insert(childVal);
        }

        // Step 3: Find the absolute root node
        for (const auto& desc : descriptions) {
            int parentVal = desc[0];
            
            // If a parent is never recorded as anyone's child, it's the root
            if (childrenSet.find(parentVal) == childrenSet.end()) {
                return nodeMap[parentVal];
            }
        }

        return nullptr;
    }
};

int main(){

}