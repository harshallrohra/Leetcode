class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector <vector<string>> ans;
        vector<int>lr(n,0),ud(2*n-1 , 0) , ld(2*n-1,0);
        vector<string>board (n, string(n,'.'));
        f( n ,0, ans , board , ud , ld , lr);
        return ans;
        
    }
    void f(int n ,int col, vector <vector<string>>& ans , vector<string> & board , vector<int>&ud , vector<int>&ld , vector<int> &lr){
        if (col ==n) {
            ans.push_back(board);
            return;
        }
        for (int row = 0 ; row<n ; row++){
            if (lr[row] ==0 && ud[row+col] ==0 && ld[n-1+col-row]==0){
                board[row][col]='Q';

                lr[row]=1;
                ud[row+col]=1;
                ld[n-1+col-row]=1;

                f(n,col+1,ans,board,ud ,ld , lr);

                board[row][col]='.';
                lr[row]=0;
                ud[row+col]=0;
                ld[n-1+col-row]=0;

            }
        }
    }
};