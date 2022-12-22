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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *l1 = headA, *l2 = headB;
        while (l1 != l2) {
            l1 = l1 ? l1->next : headB;
            l2 = l2 ? l2->next : headA;
        }
        return l1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    List l1={4,1,8,4,5};
    List l2={5,6,1,8,4,5};
    ListNode*  res =s.getIntersectionNode(l1.head,l2.head);
    cout << res << endl;
}