class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(!s1.empty()){
            int tp = s1.top();
            s1.pop();
            s2.push(tp);
        }
        s1.push(x);
        while(!s2.empty()){
            int tp = s2.top();
            s2.pop();
            s1.push(tp);
        }
    }
    
    int pop() {
        int tp = s1.top();
        s1.pop();
        return tp;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        if(s1.empty()) return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */