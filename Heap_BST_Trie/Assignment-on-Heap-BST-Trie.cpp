#include <iostream>
#include <climits>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBST(root, LONG_MIN, LONG_MAX);
    }

private:
    bool isValidBST(TreeNode* root, long min_val, long max_val) {
        if (root == nullptr) {
            return true;
        }

        if (root->val <= min_val || root->val >= max_val) {
            return false;
        }

        return isValidBST(root->left, min_val, root->val) && isValidBST(root->right, root->val, max_val);
    }
};

int main() {
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    Solution solution;
    bool isValid = solution.isValidBST(root);
    if (isValid) {
        std::cout << "The tree is a valid BST." << std::endl;
    } else {
        std::cout << "The tree is not a valid BST." << std::endl;
    }

    return 0;
}
/*
Time complexity : O(N)
Space complexity : O(N) 
*/