class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) {
            return false;
        }
        unordered_multiset<string> set1;
        unordered_multiset<string> set2;
        for(int i = 0; i < s.size(); i++) {
            set1.insert(to_string(s[i]));
            set2.insert(to_string(t[i]));
        }
        for(auto i = set1.begin(); i != set1.end(); i++) {
            auto found_p = set2.find(*i);
            if(found_p != set2.end()) {
                set2.erase(found_p);
            }else {
                return false;
            }
        }
        return true;
    }
};
