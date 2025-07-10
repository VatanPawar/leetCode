// Last updated: 7/11/2025, 12:03:22 AM
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> bannedSet(banned.begin(), banned.end());
        int count = 0;
        long long sum = 0; // use long long to avoid overflow
        
        for (int i = 1; i <= n; i++) {
            if (bannedSet.count(i) == 0) { // not banned
                if (sum + i > maxSum) break; // stop if sum exceeded
                sum += i;
                count++;
            }
        }
        return count;
    }
};
