class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        map<int, vector<int>, greater<int>> omap;
        vector<int> result;
        for(auto a: nums) {
            umap[a]++;
        }
        for(auto a: umap) {
            omap[a.second].push_back(a.first);
        }
        for(auto a: omap) {
            if(k == 0) break;
            for(auto b: a.second) {
                if(k == 0) break;
                result.push_back(b);
                k--;
            }
        }
        return result;
    }
};
