// Last updated: 7/11/2025, 12:03:10 AM
class Solution {
public:

    int getBeauty(int freq[], int x) {
        int count = 0;
        for (int i = 50; i >= 0; --i) { // 50 -> -50, 0 -> -1
            count += freq[i];
            if (count >= x) {
                return -i - 1;
            }
        }
        return 0;
    }

    vector<int> getSubarrayBeauty(vector<int>& nums, int windowSize, int k) {
        vector<int> result;
        int freq[51] = {0}; // freq[0] -> -50, ..., freq[49] -> -1
        int n = nums.size();
        int i = 0, j = 0;

        // Fill initial window
        while (j < windowSize) {
            if (nums[j] < 0) {
                freq[-nums[j] - 1]++;
            }
            j++;
        }

        result.push_back(getBeauty(freq, k));

        // Slide the window
        while (j < n) {
            if (nums[i] < 0) {
                freq[-nums[i] - 1]--;
            }
            if (nums[j] < 0) {
                freq[-nums[j] - 1]++;
            }

            result.push_back(getBeauty(freq, k));
            i++;
            j++;
        }

        return result;
    }
};
