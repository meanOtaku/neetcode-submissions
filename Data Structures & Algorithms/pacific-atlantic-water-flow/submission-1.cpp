class Solution {
public:
    int rows, cols;
    vector<vector<int>> dir = {{-1,0}, {1,0}, {0,1}, {0,-1}};
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        rows = heights.size();
        cols = heights[0].size();
        vector<vector<int>> res;
        vector<vector<int>> pacific(rows, vector<int>(cols, 0));
        vector<vector<int>> atlantic(rows, vector<int>(cols, 0));
        for(int i = 0; i < cols; i++) {
            dfs(0, i, heights, pacific);
        }
        for(int i = 0; i < rows; i++) {
            dfs(i, 0, heights, pacific);
        }
        for(int i = 0; i < cols; i++) {
            dfs(rows - 1, i, heights, atlantic);
        }
        for(int i = 0; i < rows; i++) {
            dfs(i, cols - 1, heights, atlantic);
        }
        for(int i = 0 ; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(pacific[i][j] && atlantic[i][j]) {
                    res.push_back({i, j});
                }
            }
        }
        return res;
    }

    void dfs(int i, int j, vector<vector<int>>& heights, vector<vector<int>>& visited) {
        visited[i][j] = 1;

        for (auto &d : dir) {
            int ni = i + d[0];
            int nj = j + d[1];

            if (isValidLocation(ni, nj) &&
                !visited[ni][nj] &&
                heights[ni][nj] >= heights[i][j]) {
                dfs(ni, nj, heights, visited);
            }
        }
    }

    bool isValidLocation(int i, int j) {
        return i >= 0 && i < rows && j >= 0 && j < cols;
    }

};
