class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int result = 0;
        vector<int> count(26);
        for(int right = 0; right < s.size(); right++) {
            cout << s[right] - 'A';
            count[s[right] - 'A']++;
            while( (right - left + 1 - *max_element(count.begin(), count.end())) > k) {
                count[s[left] - 'A']--;
                left++;
            }
            result = max(result, right - left + 1);
        }
        return result;
    }
};
