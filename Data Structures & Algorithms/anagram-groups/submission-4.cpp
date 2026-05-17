class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> result;
        for(auto a: strs){
            int count = 0;
            string stt = "00000000000000000000000000";
            for(auto b: a){
                count += int(b);
                stt[int(b) - 97] = stt[int(b) - 97] + 1;
            }
            cout << stt << endl;
            umap[stt].push_back(a);
        }
        for(auto a: umap) {
            result.push_back(a.second);
        }
        return result;
    }
};
