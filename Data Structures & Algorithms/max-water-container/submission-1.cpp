class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector<int> result;
        int i = 0;
        int j = heights.size() - 1;
        for(int a = 0; i < j ; a++) {
            int temp;
            temp = heights[i] > heights[j] ? (heights[j] * (j - i)) : (heights[i] * (j - i));
            if(heights[i] < heights[j]) {
                i++;
            } else {
                j--;
            }
            result.push_back(temp);
            cout << temp << " ";
        }
        int res = *max_element(result.begin(), result.end());
        return res;
    }
};
