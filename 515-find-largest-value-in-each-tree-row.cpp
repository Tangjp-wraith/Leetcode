#include "include/headers.h"

class Solution {
 public:
  vector<int> largestValues(TreeNode* root) {
    vector<int> ans;
    queue<TreeNode*> que;
    if (root != nullptr) {
      que.push(root);
    }
    while (!que.empty()) {
      vector<int> res;
      int sze = que.size();
      for (int i = 0; i < sze; ++i) {
        auto node = que.front();
        que.pop();
        res.push_back(node->val);
        if (node->left) {
          que.push(node->left);
        }
        if (node->right) {
          que.push(node->right);
        }
      }
      int maxn = res[0];
      for (auto i : res) {
        maxn = max(maxn, i);
      }
      ans.push_back(maxn);
    }
    return ans;
  }
};

int main() { return 0; }