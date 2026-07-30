class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string >ans;
        f("",0,0, n , ans);
        return ans;
    }
    void f(string curr , int open , int close , int n , vector <string> &ans){
        if (curr.size()==2*n){
            ans.push_back(curr);
            return ;
        }

        if(open<n) f(curr + '(' , open+1 , close , n , ans);
        if (close<open)f(curr +')',open , close+1 , n , ans);
    }
};