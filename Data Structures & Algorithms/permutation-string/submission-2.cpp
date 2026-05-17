class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        map<char,int> count;
        map<char,int> count2;
        int n = s1.size();
        int j = 0;
        map<char,int> count3 = count;
        if(s1.size() > s2.size()) return false;
        for(int i = 0; i < s1.size(); i++) {
            count[s1[i]]++;
        }
        int matched = 0;
        for(int i = 0; i < s2.size(); i++) {
            count3 = count;
            matched = 0;
            j = 0;
            while(j < n) {
                count3[s2[i + j]]--;
                if(count3[s2[i + j]] < 0) break;
                if(count3[s2[i + j]] == 0) matched++;
                j++;
            }
            // if(matched < 10) {
            //     cout << matched << " " << n << endl;
            // }
            // if(j + 1 == n) {
            //     for(int k = 0; k < count3.size(); k++) {
                    
            //     }
            // }
            if(matched == count.size()) {
                return true;
            }
        }
        return false;
    }
};
