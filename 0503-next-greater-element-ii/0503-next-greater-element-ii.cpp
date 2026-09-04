class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            int greater = -1;
            for (int j = 1; j < nums.size(); j++) {
                int k = (i + j) % nums.size();
                if (nums[k] > nums[i]) {
                    greater = nums[k];
                    break;
                }
            }
            ans.push_back(greater);
        }
        return ans;
    }
};