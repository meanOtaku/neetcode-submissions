class Solution {
public:
    vector<string> res;
    unordered_set<string> res_set;
    vector<string> restoreIpAddresses(string s) {
        string str = "";
        dfs(0, s, 3, str);
        for(auto a: res_set) {
            res.push_back(a);
        }
        return res;
    }
    void dfs(int start, string s, int dots, string str) {
        //cout << "Start: " << start << ", S: " << s << ", dots: " << dots << ", str: " << str << endl;
        int siz  = s.size();
        int ss = start + 3;
        if(dots <= 0) {
            for(int i = start; i < s.size(); i++) {
                str.push_back(s[i]);
            }
            if(isValidIP(str)) {
                res_set.insert(str);
            }
            return;
        }
        if(str.size() && dots > 0) {
            str.push_back('.');
            --dots;
        }

        for(int i = start; i < (min(siz, ss)) ; i++) {
            str.push_back(s[i]);
            dfs(i + 1, s, dots, str);
        }
        return;
    }
    bool isValidIP(string str) {
        int countDot = 0;
        string s = "";
        for(int i = 0; i <= str.size(); i++) {
            if(str[i] == '.' || i == str.size()){
                if(s.front() == '0' && s.size() > 1){
                    return false;
                }
                if(s.size() < 1 || s.size() > 3) {
                    return false;
                }
                if(stoi(s) > 255) {
                    return false;
                }
                s = "";
            }else {
                s.push_back(str[i]);
            }
        }
        return true;
    }
};