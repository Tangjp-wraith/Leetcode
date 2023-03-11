#include <locale>

#include "include/headers.h"

class Node {
 public:
  int val;
  Node* left;
  Node* right;
  Node* next;

  Node() : val(0), left(NULL), right(NULL), next(NULL) {}

  Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

  Node(int _val, Node* _left, Node* _right, Node* _next)
      : val(_val), left(_left), right(_right), next(_next) {}
};

class Solution {
 public:
  Node* connect(Node* root) {
    queue<Node*> que;
    if (root != nullptr) {
      que.push(root);
    }
    while (!que.empty()) {
      int sze = que.size();
      Node* node;
      Node* nodepre;
      for (int i = 0; i < sze; ++i) {
        if (i == 0) {
          nodepre = que.front();
          que.pop();
          node = nodepre;
        } else {
          node = que.front();
          que.pop();
          nodepre->next  = node;
          nodepre = nodepre->next;
        }
        if (node->left) {
          que.push(node->left);
        }
        if (node->right) {
          que.push(node->right);
        }
      }
      nodepre->next = nullptr;
    }
    return root;
  }
};

int main() { return 0; }