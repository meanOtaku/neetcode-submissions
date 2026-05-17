class Solution {
private:
    bool dfs(vector<vector<char>>& board, string word, int i, int j, int m, int n, int index) {
        if(i >= m || j >= n || i < 0 || j < 0 || board[i][j] != word[index]) {
            return false;
        }
        if(index == word.size() - 1) {
            return true;
        }

        board[i][j] = '#';
        if(dfs(board, word, i - 1, j, m, n, index + 1)||
            dfs(board, word, i + 1, j, m, n, index + 1) ||
            dfs(board, word, i, j - 1, m, n, index + 1) ||
            dfs(board, word, i, j + 1, m, n, index + 1)
        ) {
            return true;
        }
        board[i][j] = word[index];
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(dfs(board, word, i, j, m, n, 0)) {
                    return true;
                }
            }
        }
        return false;
    }
};
