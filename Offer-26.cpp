#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasSubStructure(TreeNode *A, TreeNode *B) {
        if (!B) {
            return true;
        }
        if (!A || A->val != B->val) {
            return false;
        }
        return hasSubStructure(A->left, B->left) && hasSubStructure(A->right, B->right);
    }

    bool isSubStructure(TreeNode *A, TreeNode *B) {
        if (!A || !B) {
            return false;
        }
        return hasSubStructure(A, B) || isSubStructure(A->left, B) || isSubStructure(A->right, B);
    }
};
//leetcode submit region end(Prohibit modification and deletion)


int main() {
    Solution s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout << res << endl;
}