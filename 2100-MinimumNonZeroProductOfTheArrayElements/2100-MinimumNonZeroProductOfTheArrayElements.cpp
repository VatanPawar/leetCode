// Last updated: 7/11/2025, 12:04:09 AM
class Solution {
public:
    const int MOD = 1e9 + 7;

    // Fast modular exponentiation
    long long modPow(long long base, long long exp, int mod) {
        long long result = 1;
        long long curr = base % mod;
        while (exp > 0) {
            if (exp & 1) {
                result = (result * curr) % mod;
            }
            curr = (curr * curr) % mod;
            exp >>= 1;
        }
        return result;
    }

    int minNonZeroProduct(int p) {
        long long maxNum = (1LL << p) - 1;
        long long power = (1LL << (p - 1)) - 1;

        long long part1 = maxNum % MOD;
        long long part2 = modPow(maxNum - 1, power, MOD);

        long long ans = (part1 * part2) % MOD;
        return (int)ans;
    }
};
