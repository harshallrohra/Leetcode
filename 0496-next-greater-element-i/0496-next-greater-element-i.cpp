class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            int pos = 0;
            while (nums2[pos] != nums1[i]) {
                pos++;
            }
            int greater = -1;
            for (int j = pos+1; j < nums2.size(); j++) {

                if (nums1[i] < nums2[j]) {
                    greater = nums2[j];
                    break;
                }
            }
            ans.push_back(greater);
        }
        return ans;
    }
};