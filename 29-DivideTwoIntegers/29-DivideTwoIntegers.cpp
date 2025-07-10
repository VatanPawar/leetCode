// Last updated: 7/11/2025, 12:11:10 AM
class Solution {
public:
   int divide(int dividend, int divisor) {
    // Handle edge case: overflow
    if (dividend == INT_MIN && divisor == -1) return INT_MAX;

    // Get sign of result
    bool negative = (dividend < 0) ^ (divisor < 0);

    // Convert to long long to handle overflow and take absolute values
    long long a = abs((long long)dividend);
    long long b = abs((long long)divisor);
    long long result = 0;

    // Start from the highest bit and go down to 0
    for (int i = 31; i >= 0; i--) {
        if ((b << i) <= a) {
            a -= (b << i);
            result += (1LL << i);
        }
    }

    return negative ? -result : result;
}

};