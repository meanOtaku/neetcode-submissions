class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }
        int result = 1;
        int countSeq = 1;
        map<int, int> omap;
        for(auto a: nums) {
            omap[a]++;
        }
        for(auto a: omap) {
            if(omap.find(a.first-1) != omap.end()) {
                countSeq++;
            }else {
                countSeq = 1;
            }
            result = max(countSeq, result);
        }
        return result;
    }
};
