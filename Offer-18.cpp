#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *deleteNode(ListNode *head, int val) {
        if (head->val == val) {
            return head->next;
        }
        ListNode *prev = head, *node = head->next;
        while (node != nullptr && node->val != val) {
            prev = node;
            node = node->next;
        }
        if (node != nullptr) {
            prev->next = prev->next->next;
        }
        return head;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}