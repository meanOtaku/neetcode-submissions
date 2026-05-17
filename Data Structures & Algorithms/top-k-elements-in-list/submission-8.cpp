class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // vector<int> result;
        // int number, countVal = 0;
        // sort(nums.begin(), nums.end());
        // for(auto a: nums) {
        //     if(a != number) {
        //         number = a;
        //         countVal = 0;
        //     }
        //     countVal++;
        //     auto found = count(result.begin(), result.end(), a);
        //     if(countVal > k && found < 1) {
        //         result.push_back(a);
        //         countVal = 0;
        //     }
        // }
        // if(result.size()) {
        //     return result;
        // }
        // return nums;
        map<int, int> count_map;
        map<int, vector<int>> frequent_map;
        vector<int> result;
        for(auto a: nums) {
            count_map[a]++;
        }
        for(auto i = count_map.begin(); i != count_map.end(); i++) {
            frequent_map[i->second].push_back(i->first);
        }
        for(auto i = frequent_map.rbegin(); i != frequent_map.rend(); i++) {
            for(auto a: i->second) {
                result.push_back(a);
                cout << a << " size: " << result.size();
                if(result.size() == k) {
                    break;
                }
            }
            if(result.size() == k) {
                break;
            }
        }
        return result;
    }
};
