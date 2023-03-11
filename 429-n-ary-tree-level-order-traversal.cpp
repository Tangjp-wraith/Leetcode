#include <vector>

#include "include/headers.h"

class Node {
 public:
  int val;
  vector<Node*> children;

  Node() {}

  Node(int _val) { val = _val; }

  Node(int _val, vector<Node*> _children) {
    val = _val;
    children = _children;
  }
};

class Solution {
 public:
  vector<vector<int>> levelOrder(Node* root) {
    vector<vector<int>> ans;
    queue<Node*> que;
    if (root != nullptr) {
      que.push(root);
    }
    while (!que.empty()) {
      vector<int> res;
      int sze = que.size();
      for (int i = 0; i < sze; ++i) {
        Node* node = que.front();
        que.pop();
        res.push_back(node->val);
        for (int j = 0; j < node->children.size(); ++j) {
          if (node->children[j]) {
            que.push(node->children[j]);
          }
        }
      }
      ans.push_back(res);
    }
    return ans;
  }
};

int main() { return 0; }