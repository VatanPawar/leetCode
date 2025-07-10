// Last updated: 7/11/2025, 12:06:33 AM
class Solution {
public:
    bool binarySearch(const vector<int>& arr, int target) {
        int left = 0, right = (int)arr.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target)
                return true;
            else if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return false;
    }

    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sumA = 0, sumB = 0;
        for (int x : aliceSizes) sumA += x;
        for (int x : bobSizes) sumB += x;

        int delta = (sumA - sumB) / 2;

        sort(bobSizes.begin(), bobSizes.end());

        for (int x : aliceSizes) {
            int y = x - delta;
            if (binarySearch(bobSizes, y)) {
                return {x, y};
            }
        }

        return {};  // Problem guarantees at least one answer
    }
};
