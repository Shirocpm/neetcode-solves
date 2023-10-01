class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int ans = 0;
        int lmx = height[0], rmx = height[n-1];
        int l = 1, r = n - 2;
        while (l <= r) {
            if (height[l] >= lmx) {
                lmx = height[l]; l++;
                continue ;
            }
            if (height[r] >= rmx) {
                rmx = height[r]; r--;
                continue ;
            }
            if (lmx <= rmx) {
                ans += lmx - height[l]; l++;
                continue ;
            }
            ans += rmx - height[r]; r--;
        }
        return ans;
    }
};
