class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowLength = matrix[0].size();
        for(int i = 0; i < matrix.size(); i++) {
            cout << matrix[i][rowLength - 1];
            if(matrix[i][rowLength - 1] >= target) {
                if(matrix[i][rowLength - 1] == target) {
                    return true;
                }
                cout << matrix[i][rowLength - 1];
                auto it = find(matrix[i].begin(), matrix[i].end(), target);
                if (it != matrix[i].end())
                    return true;
            }
        }
        return false;
    }
};
