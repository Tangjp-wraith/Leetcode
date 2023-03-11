#include "include/btree.h"
#include "include/headers.h"

class Solution {
 public:
  TreeNode* invertTree(TreeNode* root) {
    queue<TreeNode*> que;
    if (root != nullptr) {
      que.push(root);
    }
    while (!que.empty()) {
      int sze = que.size();
      for (int i = 0; i < sze; ++i) {
        TreeNode* node = que.front();
        TreeNode* nodepos;
        que.pop();
        nodepos = node->left;
        node->left = node->right;
        node->right = nodepos;
        if (node->left) {
          que.push(node->left);
        }
        if (node->right) {
          que.push(node->right);
        }
      }
    }
    return root;
  }
};

int main() { return 0; }