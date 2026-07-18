class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int l = k-1;
        int r= cardPoints.size()-1;
        int sum= 0;
        int leftsum=0;
        int rightsum =0;
        for (int i=0;i<k;i++){
            leftsum= leftsum+cardPoints[i];
            sum= leftsum;
        }
        while (l >= 0){
            
            rightsum=rightsum + cardPoints[r];
            r--;
            leftsum=leftsum-cardPoints[l];
            l--;
            sum= max(sum,leftsum+rightsum);
        }
        return sum;

    }
};