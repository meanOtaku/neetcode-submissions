class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        vector<int>result;
        vector<pair<int, int>> vpair;
        for(int i = 0; i < nums.size(); i++){
            vpair.push_back({nums[i],i});
        }
        sort(vpair.begin(), vpair.end());
        while(i < j) {
            int temp = vpair[i].first + vpair[j].first;
            if( temp > target) {
                j--;
            }else if(temp < target) {
                i++;
            }else if(temp == target) {
                return {min(vpair[i].second,vpair[j].second),
                    max(vpair[i].second,vpair[j].second)};
                
            }
        }
        return {};
    }
};
