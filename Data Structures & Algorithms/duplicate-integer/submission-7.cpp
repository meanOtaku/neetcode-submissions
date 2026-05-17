class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(auto a : nums) {
            if(umap[a] == 1) {
                return true;
            }else {
                umap[a] = 1;
            }
        }
        return false;
    }
};