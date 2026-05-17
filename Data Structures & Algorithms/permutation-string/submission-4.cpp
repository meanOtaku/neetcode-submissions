class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> count(26);
        vector<int> count2(26);
        int n = s1.size();
        int matches = 0;
        int left = 0;
        if(s1.size() > s2.size()) return false;
        for(int i = 0; i < s1.size(); i++) {
            count[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }
        for(int i = 0; i < count2.size(); i++) {
            if(count2[i] == count[i]) matches++;
        }
        for(int i = s1.size(); i < s2.size(); i++) {
            if(matches == 26) return true;
            count2[s2[i] - 'a']++;
            if(count2[s2[i] - 'a'] == count[s2[i] - 'a']) {
                matches++;
            }else if(count2[s2[i] - 'a'] == count[s2[i] - 'a'] + 1){
                matches--;
            }
            count2[s2[left] - 'a']--;
            if(count2[s2[left] - 'a'] == count[s2[left] - 'a']) {
                matches++;
            }else if(count2[s2[left] - 'a'] == count[s2[left] - 'a'] - 1){
                matches--;
            }
            left++;
        }
        return matches == 26;
    }
};
