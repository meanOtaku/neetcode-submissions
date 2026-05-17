class Solution {
public:

    string encode(vector<string>& strs) {
        string encodedString = "";
        for(auto a: strs) {
            encodedString = encodedString + a + "\\en";
        }
        return encodedString;
    }

    vector<string> decode(string s) {
        string key = "\\en";
        string temp2 = "";
        vector<string> result;
        for(int i = 0; i < s.length(); i++) {
            string check = "";
            check = check + s[i] + s[i+1] + s[i + 2];
            string firstElement = "";
            firstElement = s[i];
            // cout << check << " " << firstElement;
            if(firstElement != "\\") {
                temp2 = temp2 + s[i];
            } else {
                if(check == key) {
                    result.push_back(temp2);
                    i = i + 2;
                    temp2 = "";
                }
                else {
                    temp2 = temp2 + s[i];
                }
            }
            // cout << s[i];
        }
        return result;
    }
};
