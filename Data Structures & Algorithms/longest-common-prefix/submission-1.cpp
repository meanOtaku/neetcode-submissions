class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count = 1000;
        string res = "";
        string temp = strs[0];
        for(int i = 0; i < strs.size(); i++) {
            int tempS = 0;
            for(int j = 0; j < strs[i].length(); j++) {
                if(temp[j] == strs[i][j]) {
                    tempS++;
                }else {
                    break;
                }
            }
            count = min(tempS, count);
        }
        cout << count ;
        for(int i = 0; i < count; i++){
            res.push_back(temp[i]);
        }
        return res;
    }
};