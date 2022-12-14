class MyStack {
    queue<int>q1;
    queue<int>q2;
    int n;
public:
    MyStack() {
        n = 0;
    }
    
    void push(int x) {
        q2.push(x);
        n++;
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int>temp = q1;
        q1 = q2;
        q2 = temp;
    }
    
    int pop() {
        int ans = q1.front();
        q1.pop();
        n--;
        return ans;
    }
    
    int top() {
        return  q1.front();
    }
    
    bool empty() {
        if(n==0)
            return true;
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