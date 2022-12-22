#include "include/headers.h"

using namespace std;

//leetcode submit region begin(Prohibit modification and deletion)
class MinStack {
    int pos;
    stack<int> s,min_s;
public:
    /** initialize your data structure here. */
    MinStack(){
        min_s.push(INT_MAX);
    }
    
    void push(int x) {
        s.push(x);
        min_s.push(::min(min_s.top(),x));
    }
    
    void pop() {
        s.pop();
        min_s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int min() {
        return min_s.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
//leetcode submit region end(Prohibit modification and deletion)


int main()
{
    MinStack s;
    vector<int> data{7, 1, 5, 3, 6, 4};
    auto res = "Hello LeetCode";
    cout<<res<<endl;
}