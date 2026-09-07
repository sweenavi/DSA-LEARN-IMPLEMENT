class Solution {
public:
    int distinctSubseqII(string s) {
        const long long MOD = 1e9 + 7;

        long long dp = 1;

        vector<long long> last(26, 0);

        for (char c : s) {
            int x = c - 'a';

            long long newDp = (2 * dp - last[x] + MOD) % MOD;

            last[x] = dp;
            dp = newDp;
        }
        return (dp - 1 + MOD) % MOD;
    }
};
