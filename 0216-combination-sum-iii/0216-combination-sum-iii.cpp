class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>ds;
        vector<vector<int>>ans;
       f(1,ds,0,ans,k,n);
       return ans;
    }
    void f(int ind , vector<int>&ds ,int sum , vector<vector<int>>&ans , int k , int n){
    if (sum==n && ds.size()==k){
        ans.push_back(ds);
        return;
    }
    for(int i=ind ; i<=9 ; i++){
        ds.push_back(i);
        f(i+1,ds,sum+i,ans,k,n);
        ds.pop_back();
    }
    }
};