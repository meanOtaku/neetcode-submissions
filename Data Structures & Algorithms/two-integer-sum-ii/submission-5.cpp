class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        // sort(numbers.begin(), numbers.end());
        for(int i = 0 ; i < numbers.size(); i++) {
            // if(numbers[i] <= target) {
            //     int temp = target - numbers[i];
            //     cout << temp;
            //     for(int j = i + 1 ; j < numbers.size(); j++) {
            //         if(numbers[j] == temp) {
            //             result.push_back(i + 1);
            //             result.push_back(j + 1);
            //             return result;
            //         }
            //     }
            // } else {
            //     break;
            // }
            int temp = target - numbers[i];
                cout << temp;
                for(int j = i + 1 ; j < numbers.size(); j++) {
                    if(numbers[j] == temp) {
                        result.push_back(i + 1);
                        result.push_back(j + 1);
                        return result;
                    }
                }
        }
    }
};
