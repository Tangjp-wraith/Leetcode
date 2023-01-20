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

//    非递归版本
//    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
//        ListNode *ans = new ListNode(0), *node = ans;
//        while (list1 && list2) {
//            if (list1->val <= list2->val) {
//                node->next = list1;
//                list1 = list1->next;
//            } else {
//                node->next = list2;
//                list2 = list2->next;
//            }
//            node = node->next;
//        }
//        node->next = list1 ? list1 : list2;
//        return ans->next;
//    }

//  递归版本
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        if (!list1) {
            return list2;
        }
        if (!list2) {
            return list1;
        }
        if (list1->val > list2->val) {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;

    List list1 = {1, 2, 4};
    List list2 = {1, 3, 4};
    ListNode *res;
    res = s.mergeTwoLists(list1.head, list2.head);
    print_list(res);
}