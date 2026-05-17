class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        map<int,int> omap;
        int value = 0;
        int count = 0;
        int result = 0;
        for(int i = 0; i < n; i++) {
            omap[nums[i]]++;
        }
        for(auto a: omap) {
            if(a.first == value) {
                value++;
                count++;
                
            } else {
                value = a.first + 1;
                count = 1;
            }
            result = max(result, count);
            cout << a.first << " " << count << " " << endl;
        }
        return result;
    }
};
