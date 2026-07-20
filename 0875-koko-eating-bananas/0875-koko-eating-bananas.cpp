class Solution {
public:
long long  f(vector<int>& piles, int k) {
        long long div = 0;
        for (int i = 0; i < piles.size() ; i++) {
            div = div + ceil((double)piles[i] / k);
        }
        return div;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        
        int l = 1;
        int r = *max_element (piles.begin() , piles.end());

        while (l <= r) {
            int mid = l + (r - l) / 2;
            long long  hours = f(piles, mid);

            if (hours<=h) {
                r = mid - 1;
            } else  {
                l = mid + 1;
            }
        }
        return l;
    }
};