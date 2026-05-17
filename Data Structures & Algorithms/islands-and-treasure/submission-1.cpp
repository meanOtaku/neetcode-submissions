class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;

        for(int i = 0 ; i < rows; i++) {
            for(int j = 0 ; j < cols; j++) {
                if(grid[i][j] == 0)
                    q.push({i,j});
            }
        }
        vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()) {
            auto [i, j] = q.front();
            q.pop();

            for(auto [r, c]: dirs) {
                int nr = i + r;
                int nc = j + c;

                if(nr < 0 || nc < 0 || nr >= rows || nc >= cols) {
                    continue;
                }
                if(grid[nr][nc] == 2147483647) {
                    grid[nr][nc] = grid[i][j] + 1;
                    q.push({nr, nc});
                }
            }
        }
    }
};
