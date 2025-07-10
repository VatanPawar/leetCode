// Last updated: 7/11/2025, 12:06:36 AM
class Solution {
public:
    bool check(int maxAllowed, int h, vector<int> arr) {
        long long hours = 0;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] <= maxAllowed) {
                hours++;
            } else {
                int fullHours = arr[i] / maxAllowed;
                int rem = arr[i] % maxAllowed;
                hours += fullHours;
                if (rem > 0) hours++;
            }
        }
        return hours <= h;
    }

    int minEatingSpeed(vector<int>& arr, int h) {
        long long sum = 0;
        int maxi = arr[0];
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            maxi = max(maxi, arr[i]);
        }

        int s = 1;
        int e = maxi;
        int res = -1;

        while (s <= e) {
            int mid = s + (e - s) / 2;
            if (check(mid, h, arr)) {
                res = mid;
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }

        return res;
    }
};
