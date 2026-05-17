class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        vector<string> arrayV;
        vector<string> strs_copy(strs);

        // for(auto i = strs.begin(); i != strs.end(); i++) {
        //     string str = *i;
        //     sort(str.begin(), str.end());
        //     *i = str;
        // }
        for(auto i = strs.begin(); i != strs.end(); i++) {
            arrayV.clear();
            string str1 = *i;
            sort(str1.begin(), str1.end());
            for(auto j = strs_copy.begin(); j != strs_copy.end(); j++) {
                if(*j != "-1") {
                    string str2 = *j;
                    sort(str2.begin(), str2.end());
                    if(str1 == str2 && str1.size() == str2.size()) {
                        arrayV.push_back(*j);
                        *j = "-1";
                    }
                }
            }
            if(arrayV.size())
                result.push_back(arrayV);
        }
        return result;
    }
};
