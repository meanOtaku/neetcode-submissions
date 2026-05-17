class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backTrack(result, n, 0, 0, "");
        return result;
    }
private:
    void backTrack(vector<string>& res, int n, int close, int open, string str) {
        if(open == close && open == n) {
            res.push_back(str);
            return;
        }
        if(open < n) {
            backTrack(res, n, close, open + 1, str + "(");
        }
        if(close < open) {
            backTrack(res, n, close + 1, open, str + ")");
        }
    }
};
