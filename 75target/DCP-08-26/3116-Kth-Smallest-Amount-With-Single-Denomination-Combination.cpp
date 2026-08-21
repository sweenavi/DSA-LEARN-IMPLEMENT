class Solution {
public:

    long long countWays(long long x, vector<int>& coins) {
        int n = coins.size();
        long long total = 0;

        // Every non-empty subset
        for (int mask = 1; mask < (1 << n); mask++) {

            long long l = 1;
            bool tooLarge = false;

            for (int i = 0; i < n; i++) {
                if (mask & (1 << i)) {

                    long long g = gcd(l, (long long)coins[i]);

                    // Calculate LCM safely
                    __int128 newL =
                        (__int128)(l / g) * coins[i];

                    if (newL > x) {
                        tooLarge = true;
                        break;
                    }

                    l = (long long)newL;
                }
            }

            // If LCM > x, this subset contributes 0
            if (tooLarge) {
                continue;
            }

            long long contribution = x / l;

            // Odd number of elements -> add
            // Even number of elements -> subtract
            if (__builtin_popcount(mask) % 2 == 1) {
                total += contribution;
            } else {
                total -= contribution;
            }
        }

        return total;
    }

    long long findKthSmallest(vector<int>& coins, int k) {

        long long low = 1;

        long long minCoin = *min_element(coins.begin(), coins.end());

        long long high = minCoin * (long long)k;

        while (low < high) {

            long long mid = low + (high - low) / 2;

            long long cnt = countWays(mid, coins);

            if (cnt >= k) {
                // Answer could be mid
                high = mid;
            } else {
                // Need a larger value
                low = mid + 1;
            }
        }

        return low;
    }
};