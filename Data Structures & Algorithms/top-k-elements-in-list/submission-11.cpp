class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        multimap<int, int, greater<int>> map;
        vector<int> result;
        for(auto a: nums) {
            umap[a]++;
        }
        for(auto a: umap){
            map.insert({a.second, a.first});
        }
        for(auto a: map) {
            if(k == 0) break;
            result.push_back(a.second);
            k--;
        }
        
        return result;
    }
};