class Solution {
public:
    bool isValid(string s) {
        deque<char> stack;
        for(auto a: s) {
            if(a == '('){
                stack.push_front(')');
                continue;
            }
            if(a == '['){
                stack.push_front(']');
                continue;
            }
            if(a == '{'){
                stack.push_front('}');
                continue;
            }
            if(a == stack[0]){
                stack.pop_front();
            }else {
                return false;
            }
        }
        if(stack.empty()) {
            return true;
        }
        return false;
    }
};
