class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int n = n1 + n2;

        if (n1 > n2) return findMedianSortedArrays(nums2, nums1);

        int partition = (n + 1) / 2;

        if (n1 == 0) return n2 % 2 ? nums2[n2/2] : (nums2[n2/2] + nums2[n2/2-1]) / 2.0;
        if (n2 == 0) return n1 % 2 ? nums1[n1/2] : (nums1[n1/2] + nums1[n1/2-1]) / 2.0;

        int left = 0, right = n1;
        int c1, c2, l1, l2, r1, r2;

        while (left <= right) {
            c1 = (left + right) / 2;
            c2 = partition - c1;

            l1 = c1 == 0 ? INT_MIN : nums1[c1-1];
            l2 = c2 == 0 ? INT_MIN : nums2[c2-1];

            r1 = c1 >= n1 ? INT_MAX : nums1[c1];
            r2 = c2 >= n2 ? INT_MAX : nums2[c2];

            if (l1 <= r2 && r1 >= l2) return n%2?max(l1,l2):(max(l1,l2)+min(r1,r2))/2.0;
            else if (l1 > r2) right = c1 - 1;
            else left = c1 + 1;
        }
        return 0.0;
    }
};
