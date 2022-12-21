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
    ListNode *reverseList(ListNode *head) {
        ListNode *prev = nullptr;
        ListNode *Next;
        while (head) {
            Next = head->next;
            head->next = prev;
            prev = head;
            head = Next;
        }
        return prev;
    }

//   递归版本
//    ListNode *reverseList(ListNode *head, ListNode *prev = nullptr) {
//        if(!head){
//            return prev;
//        }
//        ListNode* next=head->next;
//        head->next=prev;
//        return reverseList(next,head);
//    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout<<res<<endl;
}