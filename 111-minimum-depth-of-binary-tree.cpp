#include "include/headers.h"

class Solution {
 public:
  int minDepth(TreeNode* root) {
    queue<TreeNode*> que;
    if (root == nullptr) {
      return 0;
    }
    que.push(root);
    int depth = 0;
    while (!que.empty()) {
      int sze = que.size();
      ++depth;
      for (int i = 0; i < sze; ++i) {
        TreeNode* node = que.front();
        que.pop();
        if (node->left) {
          que.push(node->left);
        }
        if (node->right) {
          que.push(node->right);
        }
        if (!node->left && !node->right) {
          return depth;
        }
      }
    }
    return depth;
  }
};

int main() { return 0; }