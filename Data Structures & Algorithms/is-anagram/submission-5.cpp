class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap;
        int count = 0;
        for(auto a: s){
            umap[a]++;
        }
        for(auto a: t){
            umap[a]--;
        }
        for(auto a: umap) {
            if(a.second < 0) {
                cout << a.first << " " << a.second << endl;
                return false;
            }
            count = count + a.second;
        }
        if(count > 0) {
            return false;
        }
        return true;
    }
};
