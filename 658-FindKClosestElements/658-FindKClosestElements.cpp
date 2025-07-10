// Last updated: 7/11/2025, 12:07:26 AM
class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int left = 0;
        int right = arr.size() - k;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (x - arr[mid] > arr[mid + k] - x) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        // From the best left index, return the k elements
        return vector<int>(arr.begin() + left, arr.begin() + left + k);
    }
};
