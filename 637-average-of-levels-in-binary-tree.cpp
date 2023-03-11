#include <numeric>

#include "include/headers.h"

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  vector<double> averageOfLevels(TreeNode* root) {
    vector<double> ans;
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
      double p = (double)(accumulate(res.begin(), res.end(), 0.0)) / res.size();
      ans.push_back(p);
    }
    return ans;
  }
};

int main() { return 0; }