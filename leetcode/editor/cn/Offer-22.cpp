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
    ListNode* getKthFromEnd(ListNode* head, int k) {
        int count=0;
        ListNode* node=head;
        while(node){
            count++;
            node=node->next;
        }
        if(count==k){
            return head;
        }
        ListNode* prev=head;
        while(prev){
            count--;
            if(count==k){
                return prev->next;
            }
            else{
                prev=prev->next;
            }
        }
        return nullptr;
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout<<res<<endl;
}