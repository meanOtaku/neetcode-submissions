class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int result = 1;
        int countSeq = 1;
        if(nums.size() == 0) return 0;
        unordered_set<int> umap(nums.begin(), nums.end());

        for(auto a: umap) {
            if(umap.find(a-1) == umap.end()) {
               while(umap.find(a + countSeq) != umap.end()) {
                    countSeq++;
               }
            }
            result = max(countSeq, result);
            countSeq = 1;
        }
        return result;
    }
};
