class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> setM;
        if(nums.size() < 0) {
            cout << nums.size();
            return false;
        }
        for(auto i = nums.begin(); i != nums.end(); i++){
            if(setM.count(*i)){
                return true;
            }else {
                setM.insert(*i);
            }
        }
        return false;
    }
};
