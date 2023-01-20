#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)

// Definition for a Node.
class Node {
public:
    int val;
    Node *next;
    Node *random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};

class Solution {
public:
    Node *copyRandomList(Node *head) {
        if (head == nullptr) {
            return nullptr;
        }
        for (Node *node = head; node; node = node->next->next) {
            Node *Newhead = new Node(node->val);
            Newhead->next = node->next;
            node->next = Newhead;
        }
        for (Node *node = head; node; node = node->next->next) {
            Node *Newhead = node->next;
            Newhead->random = (node->random) ? node->random->next : nullptr;
        }
        Node *Newhead = head->next;
        for (Node *node = head; node; node = node->next) {
            Node *Nextnode = node->next;
            node->next = node->next->next;
            Nextnode->next = (Nextnode->next) ? Nextnode->next->next : nullptr;
        }
        return Newhead;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}