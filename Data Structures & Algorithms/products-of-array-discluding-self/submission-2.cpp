class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int is_zero_present = 0;
        for(auto a: nums) {
            if(a != 0)
                product = product * a;
            else 
                is_zero_present++;
        }
        vector<int> result;
        for(auto a: nums) {
            int temp;
            if(!is_zero_present) {
                temp = product / a;
                cout << temp << " ";
            }else {
                if(a == 0) {
                    if(is_zero_present > 1)
                        temp = 0;
                    else
                        temp = product;
                }else {
                    temp = 0;
                }
            }
            
            result.push_back(temp);
        }
        return result;
    }
};
