class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size(), mx = 0;
        for (int i = 0; i < n; i++)
        {
            int r = n - 1;
            while (i < r) {
                if (height[r] >= height[i]) {
                    mx = max(mx, height[i] * (r - i));
                    break ;
                }
                mx = max(mx, height[r] * (r - i));
                r--;
            }
        }
        return mx;
    }
};
// mx = max(mx, min(height[i], height[j]) * (j - i));
