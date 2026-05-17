class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        vector<int> result;
        for(auto num = nums.begin(); num != nums.end(); num++) {
            int temp = target - *num;
            auto j = find(num + 1, nums.end(), temp);
            if(j != nums.end() && j != num) {
                result.push_back(i);
                int fj = j - nums.begin();
                result.push_back(fj);
                return result;
            }
            i++; 

        }
    }
};
