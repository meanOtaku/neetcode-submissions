class Solution {
public:
    vector<vector<int>> result = {};
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int k = 0; k < nums.size(); k++){
            if(k > 0 && nums[k] == nums[k-1]){
                continue;
            }
            cout << k << endl;
            twoSum(nums, nums[k], k + 1, nums.size() - 1);
        }
        return result;
    }
    void twoSum(vector<int>& numbers, int target, int i , int j) {
        while(i < j) {
            if(numbers[i] + numbers[j] == (target * -1)){
                result.push_back({target,numbers[i],numbers[j]});
            }
            if(numbers[i] + numbers[j] > (target * -1)) {
                do{
                    j--;
                }while(numbers[j]==numbers[j+1] && i < j);
            }else {
                do{
                    i++;
                }while(numbers[i]==numbers[i-1] && i < j);
            }
        }
        return;
    }
};
