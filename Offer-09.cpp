#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class CQueue {

    stack<int> in,out;

public:
    CQueue() {}
    
    void appendTail(int value) {
        in.push(value);
    }
    
    int deleteHead() {
        while(out.empty()){
            while(in.empty()){
                return -1;
            }
            while(!in.empty()){
                out.push(in.top());
                in.pop();
            }
        }
        int val=out.top();
        out.pop();
        return val;
    }
};

/**
 * Your CQueue object will be instantiated and called as such:
 * CQueue* obj = new CQueue();
 * obj->appendTail(value);
 * int param_2 = obj->deleteHead();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    CQueue s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout<<res<<endl;
}