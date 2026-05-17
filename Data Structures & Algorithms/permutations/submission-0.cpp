class Solution {
private:
    void pop_front(vector<int>& nums) {
        reverse(nums.begin(), nums.end());
        nums.pop_back();
        reverse(nums.begin(), nums.end());
        return;
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() == 1){
            vector<int> temp;
            temp.push_back(nums[0]);
            res.push_back(temp);
            return res;
        }
        vector<int> newNums = nums;
        pop_front(newNums);
        int n = nums[0];
        vector<vector<int>> params = permute(newNums);
        for(int i = 0; i < params.size(); i++) {
            for(int j = 0; j < params[i].size() + 1; j++) {
                vector<int> temp = params[i];
                if(j >= params.size()) {
                    temp.push_back(n);
                }else 
                    temp.insert(temp.begin() + j, n);
                res.push_back(temp);
            }
        }
        return res;
    }
};
