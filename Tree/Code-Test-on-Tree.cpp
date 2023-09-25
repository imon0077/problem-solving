#include <iostream>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int getHeight(TreeNode* root) {
    if (root == nullptr) {
        return 0;
    }

    int leftHeight = getHeight(root->left);
    int rightHeight = getHeight(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int main() {
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(15);

    int height = getHeight(root);
    cout << "Height of the binary tree: " << height << endl;

    return 0;
}

//Time Complexity: O(n) where n is the number of nodes in the binary tree
//Space Complexity: O(h), where h is the height of the binary tree.