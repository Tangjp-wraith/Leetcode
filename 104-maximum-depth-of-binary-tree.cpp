#include "include/btree.h"
#include "include/headers.h"

class Solution {
 public:
  int maxDepth(TreeNode* root) {
    queue<TreeNode*> que;
    if (root != nullptr) {
      que.push(root);
    }
    int depth = 0;
    while (!que.empty()) {
      int sze = que.size();
      ++depth;
      for (int i = 0; i < sze; ++i) {
        TreeNode* node = que.front();
        que.pop();
        if(node->left){
          que.push(node->left);
        }
        if(node->left) {
          que.push(node->right);
        }
      }
    }
    return depth;
  }
};

int main() { return 0; }