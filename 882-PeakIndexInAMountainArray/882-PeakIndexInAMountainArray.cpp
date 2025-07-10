// Last updated: 7/11/2025, 12:06:42 AM
class Solution {
public:

       int peakIndexInMountainArray(vector<int>& arr) {
            int s = 0, e = arr.size() - 1;
                while (s < e) {
                        int mid = s + (e - s) / 2;
                        if (arr[mid] < arr[mid + 1]) {
                            // peak is right side
                            s = mid + 1;
                        } else {
                            // peak is mid or left side
                            e = mid;
                        }
                    }
        return s;
    }
};