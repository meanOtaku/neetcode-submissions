class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int>> calc;
        vector<int> result(temperatures.size(), 0);
        int ext = 0;
        for(int i = 0; i < temperatures.size() ; i++) {
            int t = temperatures[i];
            while(!calc.empty() && (calc.top().first < t)) {
                result[calc.top().second] = i - calc.top().second;
                calc.pop();
            }
            calc.push({temperatures[i], i});
        }
        return result;
    }
};
