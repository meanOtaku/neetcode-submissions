class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result;
        result.push_back(-1);
        int max = 0;
        for(int i = arr.size() - 1 ; i > 0; i--) {
            if(max < arr[i]) {
                max = arr[i];
            }
            result.insert(result.begin(), max);
        }
        return result;
    }
};