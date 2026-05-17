#include<string>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> postFix;
        int result;
        for(auto& a: tokens) {
            if(a != "/" && a != "*" && a != "+" && a != "-") {
                cout << stoi(a) << " ";
                postFix.push(stoi(a));
            } else {
                int y = postFix.top();
                postFix.pop();
                int x = postFix.top();
                postFix.pop();
                if( a == "/") result = static_cast<int>(static_cast<double>(x) / y);
                if( a == "*") result = x * y;
                if( a == "+") result = x + y;
                if( a == "-") result = x - y;
                postFix.push(result);
            }
        }
        return postFix.top();
    }
};
