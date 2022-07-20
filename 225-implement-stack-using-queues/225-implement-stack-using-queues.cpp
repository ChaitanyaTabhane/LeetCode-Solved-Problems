class MyStack {
public:
    queue <int> q;
    
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        while(q.front()!=x)
        {
            int y=q.front();
            q.pop();
            q.push(y);
        }
    }
    
    int pop() {
        int x=q.front();
        q.pop();
        return x;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        if(q.empty())
            return true;
        else
            return false;
    } 
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */