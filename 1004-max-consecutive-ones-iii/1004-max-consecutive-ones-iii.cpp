class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zeros=0;
        int l=0;
        int r=0;
        int len=0;
        int max_len=0;
        int n = nums.size();

        while(r<n){
            if (nums[r]==0){
                zeros++;
            }
            while(k<zeros){
                if(nums[l]==0) zeros--;
                l++;
            }
            if(k>=zeros){
                
            len=(r-l)+1;
            max_len= max(len,max_len);
            }
            r++;
        }
        return max_len;


        
    }
};