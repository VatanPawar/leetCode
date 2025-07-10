// Last updated: 7/11/2025, 12:08:21 AM
class Solution {
public:
    void solve(string &num1, int p1, string &num2, int p2, string &ans, int carry) {
        // Base case
        if (p1 < 0 && p2 < 0) {
            if (carry > 0) {
                ans.push_back(carry + '0');
            }
            return;
        }

        // Extract digits or assume 0 if index is out of bounds
        int n1 = (p1 >= 0 ? num1[p1] - '0' : 0);
        int n2 = (p2 >= 0 ? num2[p2] - '0' : 0);

        // Calculate current digit and new carry
        int csum = n1 + n2 + carry;
        ans.push_back((csum % 10) + '0');
        carry = csum / 10;

        // Recursive call
        solve(num1, p1 - 1, num2, p2 - 1, ans, carry);
    }

    string addStrings(string num1, string num2) {
        string ans = "";
        solve(num1, num1.length() - 1, num2, num2.length() - 1, ans, 0);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
