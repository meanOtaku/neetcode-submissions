class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for(auto a: details) {
            if(a[11] > '6') {
                count++;
            }else if(a[11] == '6' && a[12] > '0') {
                count++;
            }
        }
        return count;
    }
};