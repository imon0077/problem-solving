#include <iostream>

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root || root->val == val) {
            return root;
        }
        
        if (val < root->val) {
            return searchBST(root->left, val);
        } else {
            return searchBST(root->right, val);
        }
    }
};

// Helper function to print the subtree (for testing purposes)
void printSubtree(TreeNode* root) {
    if (!root) {
        return;
    }
    std::cout << root->val << " ";
    printSubtree(root->left);    
    printSubtree(root->right);
}

int main() {
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);

    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);
    
    /*
                 4
              /    \
             2      7
            / \    / \
           1   3  5   7
    */

    Solution solution;
    int target = 2;
    TreeNode* result = solution.searchBST(root, target);
    
    if (result) {
        printSubtree(result);
        std::cout << std::endl;
    } else {
        std::cout << " not found." << std::endl;
    }
    
    return 0;
}

/*
Time Complexity:
The time complexity is O(h), where h is the height of the BST.

Space Complexity:
The space complexity is O(h) due to the recursive function calls, where h is the height of the BST.
*/