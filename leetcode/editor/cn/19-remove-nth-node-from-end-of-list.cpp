#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *node = head;
        int count = 0;
        while (node) {
            count++;
            node = node->next;
        }
        ListNode *dummy = new ListNode(0, head);
        ListNode *cur = dummy;
        for (int i = 1; i < count - n + 1; ++i) {
            cur = cur->next;
        }
        cur->next = cur->next->next;
        return dummy->next;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    List list = {1, 2};
    auto res = s.removeNthFromEnd(list.head, 2);
    cout << res << endl;
}