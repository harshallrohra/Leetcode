class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int n = image.size();
        int m = image[0].size();
        int initialcolor = image[sr][sc];

        vector<vector<int>>&ans = image;
        queue<pair<int, int>> q;
        if (initialcolor == color) {
            return ans;
        }
        q.push({sr,sc});
        ans[sr][sc]=color;

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for (int i = 0; i < 4; i++) {
                int nrow = drow[i] + r;
                int ncol = dcol[i] + c;
                if (nrow < n && ncol < m && nrow >= 0 && ncol >= 0 &&
                    image[nrow][ncol] == initialcolor) {
                    ans[nrow][ncol] = color;
                    q.push({nrow, ncol});
                }
            }
        }
        return ans;
    }
};