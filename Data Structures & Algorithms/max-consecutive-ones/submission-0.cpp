class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int result = 0;
        for(auto a: nums) {
            if(a == 1) {
                count++;
                result = max(result, count);
            }
            else {
                count = 0;
            }
        }
        return result;
    }
};