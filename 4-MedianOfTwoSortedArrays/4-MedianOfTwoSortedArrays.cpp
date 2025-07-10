// Last updated: 7/11/2025, 12:11:28 AM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        if (arr1.size() > arr2.size()) return findMedianSortedArrays(arr2, arr1); // always binary search on smaller array

        int n1 = arr1.size();
        int n2 = arr2.size();
        int total = n1 + n2;

        int s = 0;
        int e = n1;

        while (s <= e) {
            int cut1 = (s + e) / 2;
            int cut2 = (total + 1) / 2 - cut1;

            int l1 = (cut1 == 0) ? INT_MIN : arr1[cut1 - 1];
            int l2 = (cut2 == 0) ? INT_MIN : arr2[cut2 - 1];
            int r1 = (cut1 == n1) ? INT_MAX : arr1[cut1];
            int r2 = (cut2 == n2) ? INT_MAX : arr2[cut2];

            if (l1 <= r2 && l2 <= r1) {
                if (total % 2 == 0) {
                    return (max(l1, l2) + min(r1, r2)) / 2.0;
                } else {
                    return max(l1, l2);
                }
            }
            else if (l1 > r2) {
                e = cut1 - 1;
            }
            else {
                s = cut1 + 1;
            }
        }

        return 0.0; // should never reach here
    }
};
