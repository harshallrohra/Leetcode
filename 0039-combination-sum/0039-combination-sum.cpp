class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ds;
        vector<vector<int>>ans;
        f(ds,target,candidates,ans,0);
        return ans;
    }
    void f(vector<int>&ds  , int target , vector <int> candidates ,vector<vector<int>>&ans , int i){
        if(i==candidates.size()){
        if(target ==0){
            ans.push_back (ds);
            
        }
        return;
        }
        if (candidates[i]<=target){
            ds.push_back(candidates[i]);
            f(ds, target - candidates[i],candidates , ans , i);
            ds.pop_back();
        }
      
        f(ds, target ,candidates , ans , i+1);
        
    }
};