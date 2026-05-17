class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> charmap;
        int res = 0;
        int l = 0, maxf = 0;
        for(int j = 0; j < s.size(); j++) {
            charmap[s[j]]++;
            maxf = max(maxf, charmap[s[j]]);
            while((j - l + 1) - maxf > k) {
                charmap[s[l]]--;
                l++;
            }
            res = max(res, j - l + 1);
        }
        return res;
    }
};
