class Solution {
public:
    const long long MOD = 1e9 +7;
    int countGoodNumbers(long long n) {
        return power(5,(n+1)/2) * power(4,n/2) % MOD;
    }
    long long power(long long x, long long n) {
        long long ans = 1;
        long long nn = n;
        if (nn < 0)
            nn = -nn;
        while (nn > 0) {
            if (nn % 2 == 1) {
                ans = (ans * x )%MOD;
                nn--;
            } else {
                x = (x * x)%MOD;
                nn = nn / 2;
            }
        }
        
            return ans;
    }
};