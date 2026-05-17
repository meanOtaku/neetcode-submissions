class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        int pointer1 = 0, pointer2 = 1;
        int count = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[pointer1] == nums[pointer2 + i]) {
            }else {
                count++;
                temp.push_back(nums[pointer1]);
                pointer1 = i + 1;
            }
        }
        nums = temp;
        return count;
    }
};