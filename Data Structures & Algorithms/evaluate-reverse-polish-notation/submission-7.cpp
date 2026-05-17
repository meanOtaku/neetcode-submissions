class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        unordered_set<string> opSet = {"+", "-", "*", "/"};
        stack<float> operands;
        float result;
        for(int i = 0; i < tokens.size(); i++) {
            string temp = tokens[i];
            if(opSet.find(temp) != opSet.end()) {
                int b = operands.top();
                operands.pop();
                int a = operands.top();
                operands.pop();
                if(temp == "*") {
                    result = a * b;
                    operands.push(result);
                }
                if(temp == "/") {
                    result = a / b;
                    operands.push(result);
                }
                if(temp == "+") {
                    result = a + b;
                    operands.push(result);
                }
                if(temp == "-") {
                    result = a - b;
                    operands.push(result);
                }
            } else {
                result = stoi(temp);
                operands.push(stoi(temp));
            }
        }
        return int(result);
    }
};
