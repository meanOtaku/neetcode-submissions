class Solution {
public:
    int counter = 0;
    int rangeX = 0;
    int rangeY = 0;
    int res = 0;
    unordered_map<int, int> outSet;
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max = 0;
        rangeY = grid.size();        // rows
        rangeX = grid[0].size();    // cols

        for(int i = 0; i < rangeY; i++){
            for(int j = 0; j < rangeX; j++){
                if(grid[i][j] == 1){
                    counter++;
                    dfs(i, j, grid);
                }
            }
        }
        for(auto a: outSet) {
            if(a.second > max) {
                max = a.second;
            }
        }
        return max;
    }
    void dfs(int i, int j , vector<vector<int>>& grid) {
        if(!inRange(i,j) || grid[i][j] == 0 || grid[i][j] == 2){
            return;
        }
        if(grid[i][j] == 1) {
            outSet[counter]++;
        }
        grid[i][j] = 2;
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j-1,grid);
        dfs(i,j+1,grid);
    }

    bool inRange(int i, int j) {
        if(i < 0 || j < 0) return false;
        if(i >= rangeY || j >= rangeX) return false; // ✅ FIXED
        return true;
    }
};
