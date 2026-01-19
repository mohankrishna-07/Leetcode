class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int k = primes.size();
        
        vector<long long> dp(n);
        vector<int> idx(k, 0);
        
        dp[0] = 1;
        
        for (int i = 1; i < n; i++) {
            long long nextUgly = LLONG_MAX;
            
            // Find next minimum
            for (int j = 0; j < k; j++) {
                nextUgly = min(nextUgly, dp[idx[j]] * primes[j]);
            }
            
            dp[i] = nextUgly;
            
            // Increment all indices that match
            for (int j = 0; j < k; j++) {
                if (dp[idx[j]] * primes[j] == nextUgly) {
                    idx[j]++;
                }
            }
        }
        
        return (int)dp[n - 1];
    }
};
