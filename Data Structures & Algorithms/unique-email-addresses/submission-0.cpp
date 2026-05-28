class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string,int> umap;
        int count = 0;
        for(auto a: emails) {
            string temp = "";
            bool plus = false;
            bool at = false;
            for(auto b: a) {
                if(b == '@') {
                    at = true;
                    plus = false;
                }
                if(b == '+') {
                    plus = true;
                }
                if(plus == true) continue;
                if(b == '.' && at == false) continue;
                temp.push_back(b);
            }
            umap[temp]++;
        }
        for(auto a: umap) {
            count++;
        }
        return count;
    }
};