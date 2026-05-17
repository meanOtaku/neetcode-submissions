class Solution {
public:
    vector<vector<string>>  res;
    vector<vector<string>> partition(string s) {
        vector<string> vec;
        dfs(0, s, vec);
        return res;
    }

    void dfs(int start, string s, vector<string>& vec) {
        if(start >= s.size()) {
            res.push_back(vec);
            return;
        }
        string temp = "";
        for(int i = start; i < s.size(); i++) {
            temp.push_back(s[i]);
            if(isPalindrome(temp)) {
                vec.push_back(temp);
                dfs(i + 1, s, vec);
                vec.pop_back();
            }
        }

    }
    bool isPalindrome(string st) {
        if (st.empty()) return false;
        int i = 0;
        int j = st.length() - 1;
        while(i < j) {
            if(st[i] != st[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};