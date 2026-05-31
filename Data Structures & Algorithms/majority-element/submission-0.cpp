class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int res = 0;
        unordered_map<int, int> umap;
        for(auto a: nums) {
            umap[a]++;
            if(umap[a] > (size / 2)) {
                res = a;
            }
        }
        return res;
    }
};