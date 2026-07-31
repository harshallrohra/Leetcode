class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>> ans;
        f( ds ,  nums , 0, ans);
        return ans;
    }
    void f( vector<int>& ds , vector<int> &nums , int i,vector<vector<int>> &ans){
        if (i==nums.size()){
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        f(ds,nums,i+1,ans);
        ds.pop_back();
        f(ds,nums,i+1,ans);
    }
};