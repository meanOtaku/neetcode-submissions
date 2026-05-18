class Solution {
   public:
    int lengthOfLastWord(string s) {
        string temp = "";
        stack<string> st;
        for (int i = 0; i <= s.length(); i++) {
            if (s[i] != ' ' && s[i] != '\0') {
                temp.push_back(s[i]);
            } else {
                if(temp.length() > 0)
                    st.push(temp);
                    temp = "";
            }
        }
        return st.top().length();
    }
};