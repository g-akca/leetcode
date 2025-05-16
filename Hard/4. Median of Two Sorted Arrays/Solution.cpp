#include <vector>
using namespace std;

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int N1 = nums1.size(), N2 = nums2.size(), i = 0, j = 0, mid1 = 0, mid2 = 0;
        int N3 = N1 + N2;
        
        for (int k = 0; k <= N3 / 2; k++) {
            mid2 = mid1;
            if (j < N2 && (i >= N1 || nums1[i] > nums2[j])) {
                mid1 = nums2[j];
                j++;
            }
            else if (i < N1 && (j >= N2 || nums1[i] <= nums2[j])) {
                mid1 = nums1[i];
                i++;
            }
        }
        
        return (N3 % 2 == 0) ? ((mid2 + mid1) / 2.0) : mid1;
    }
};