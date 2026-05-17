class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        while(i < j) {
            cout << s[i] << "--" << s[j] << endl;
            if(!isalnum(s[i])) {
                i++;
                continue;
            }
            if(!isalnum(s[j])) {
                j--;
                continue;
            }
            if(s[i] >= 65 && s[i] <= 90) {
                s[i] = tolower(s[i]);
            }
            if(s[j] >= 65 && s[j] <= 90) {
                s[j] = tolower(s[j]);
            }
            if((s[i] != s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
