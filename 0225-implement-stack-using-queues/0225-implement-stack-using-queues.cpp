class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        for(int i = 0; i < q.size(); i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        
        int c = top();
        if(!q.empty())
        {
            int l = q.size() - 1;
            for(int i = 0; i < l; i++)
            {
                q.push(q.front());
                q.pop();
            }
            q.pop();
        }
        return c;
    }
    
    
    int top() {
        int c = 0;
        for(int i = 0; i < q.size(); i++)
        {
            c = q.front();
            q.push(q.front());
            q.pop();
        }
        return c;
    }
    
    bool empty() {
        return q.empty();
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