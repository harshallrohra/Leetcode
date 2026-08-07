class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == word[0] && find(board, 0, i, j, word))
                    return true;
            }
        }
        return false;
    }

    bool find(vector<vector<char>>& board, int ind, int i, int j,
              string& word) {
        int n = board.size();
        int m = board[0].size();
        if (ind == word.size())
            return true;

        if (i < 0 || j < 0 || i >= n || j >= m || board[i][j] != word[ind])
            return false;

        char temp = board[i][j];
        board[i][j] = '$';
        if (find(board, ind + 1, i + 1, j, word))
            return true;
        if (find(board, ind + 1, i - 1, j, word))
            return true;
        if (find(board, ind + 1, i, j + 1, word))
            return true;
        if (find(board, ind + 1, i, j - 1, word))
            return true;

        board[i][j] = temp;
        return false;
    }
};