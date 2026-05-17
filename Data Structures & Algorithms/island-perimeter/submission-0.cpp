class Solution {
public:
    int res = 0;
    int sizeX;
    int sizeY;
    unordered_map<string, int> umap;
    int islandPerimeter(vector<vector<int>>& grid) {
        sizeX = grid.size() - 1;
        sizeY = grid[0].size() - 1;
        cout << sizeX << sizeY;
        dfs(0, 0, grid);
        return res;
    }
    void dfs(int x, int y, vector<vector<int>>& grid) {
        if(x > sizeX || y > sizeY) {
            return;
        }
        if(grid[x][y] == 1) {
            if(x + 1 > sizeX || grid[x + 1][y] == 0) {
                res++;
            }
            if(x - 1 < 0 || grid[x - 1][y] == 0) {
                res++;
            }
            if(y + 1 > sizeY || grid[x][y + 1] == 0) {
                res++;
            }
            if(y - 1 < 0 || grid[x][y - 1] == 0) {
                res++;
            }
            grid[x][y] = 2;
        }
        dfs(x + 1, y, grid);
        dfs(x, y + 1, grid);
        return;
    }
};