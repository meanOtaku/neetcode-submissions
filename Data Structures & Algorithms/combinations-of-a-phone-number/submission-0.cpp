class Solution {
public:
    vector<string> res;
    unordered_map<char, string> umap = {
        {'1', ""},
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    vector<string> letterCombinations(string digits) {
        dfs(0, digits, "");
        cout << "helo" << endl;
        for(auto a: res) {
            cout << a << endl;
        }
        return res;
    }
    void dfs(int start, string digits, string str) {
        if(start > digits.size() - 1) {
            res.push_back(str);
        }
        for(auto a: umap[digits[start]]) {
            str.push_back(a);
            dfs(start + 1, digits, str);
            str.pop_back();
        }
        return;
    }
};
