/* https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3292/ */

/* it is solved using two stack, it can also be solved using 1 stack by modifying values */

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> s1;
    stack<int> s2;
    MinStack() {
          while(!s1.empty())
              s1.pop();
          while(!s2.empty())
              s2.pop();
    }
    
    void push(int x) {
        s1.push(x);
        if(!s2.empty() && s2.top() >= x)
            s2.push(x);
        else if(s2.empty())
            s2.push(x);
    }
    
    void pop() {
        if(!s1.empty() && !s2.empty())
        {
            if(s1.top() == s2.top())
                s2.pop();
        }
        if(!s1.empty())
            s1.pop();
    }
    
    int top() {
        if(!s1.empty())
            return s1.top();
        return -1;
    }
    
    int getMin() {
        if(!s2.empty())
            return s2.top();
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
