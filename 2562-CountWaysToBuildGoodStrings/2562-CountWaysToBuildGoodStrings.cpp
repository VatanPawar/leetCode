// Last updated: 7/11/2025, 12:03:30 AM
class Solution {
public:
vector<int>t;
    int solve(int n, int zero, int one, int low, int high) {
        if (n > high) {
            return 0;
        }
        if(t[n]!=-1){
            return t[n];
        }

        int zInclude = solve(n + zero, zero, one, low, high);
        int oInclude = solve(n + one, zero, one, low, high);

        int count = 0;
        if (n >= low) count = 1;

        return t[n]=(count + zInclude + oInclude) % 1000000007;
    }

    int countGoodStrings(int low, int high, int zero, int one) {
        t=vector<int>(high+max(one,zero)+1,-1);
        return solve(0, zero, one, low, high);
    }
};
