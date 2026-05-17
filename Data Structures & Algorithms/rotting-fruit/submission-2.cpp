class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int countL = 0;
        int fresh = 0;
        int minutes = 0;
        queue<pair<int, int>> q;
        for(int i = 0; i < rows; i++) {
            for(int j = 0; j < cols; j++) {
                if(grid[i][j] == 2) {
                    q.push({i,j});
                }
                if(grid[i][j] == 1) {
                    fresh++;
                }
            }
        }
        if(fresh==0) return 0;
        vector<pair<int,int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};
        while(!q.empty()) {
            auto size = q.size();
            while(size--) {
                auto [r, c] = q.front();
                q.pop();
                bool flag = true;
                for(auto [dr,dc]: dirs) {
                    int nr = r + dr;
                    int nc = c + dc;

                    if(nc < 0 || nr < 0 || nr >= rows || nc >= cols) {
                        continue;
                    }
                    if(grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        fresh--;
                        q.push({nr, nc});
                    }
                }
            }
            countL++;
        }
        return fresh==0? countL-1:-1;
    }
};
