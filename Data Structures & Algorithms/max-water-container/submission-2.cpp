class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() - 1;
        int result = 0;
        while(i < j) {
            result = max((j - i) * min(heights[i],heights[j]),result);
            if(heights[i] < heights[j]) {
                i++;
            }else {
                j--;
            }
            cout << result << endl;
        }
        return result;
    }
};
