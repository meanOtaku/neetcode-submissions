class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int res = 0;
        unordered_set<char> nset;
        cout << s.length();
        for(int r = 0; r < s.size(); r++) {
            while(nset.find(s[r]) != nset.end()) {
                nset.erase(s[left]);
                left++;
            }
            nset.insert(s[r]);
            res = max(res, r - left + 1);
        }
        return res;
    }
};
