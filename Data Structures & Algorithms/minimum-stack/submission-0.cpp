class MinStack {
public:
    stack<int> stac;
    stack<int> minStac;
    MinStack() {}
    
    void push(int val) {
        stac.push(val);
        val = min(val, minStac.empty() ? val : minStac.top());
        minStac.push(val);
    }
    
    void pop() {
        minStac.pop();
        stac.pop();
    }
    
    int top() {
        return stac.top();
    }
    
    int getMin() {
        return minStac.top();
    }
};
