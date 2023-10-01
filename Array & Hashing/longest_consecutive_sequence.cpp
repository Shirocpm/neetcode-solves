class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        sort(nums.begin(), nums.end());
        int c = 1, mx = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i-1]) continue ;
            if (nums[i] == nums[i-1] + 1) c++;
            else {
                mx = max(mx, c);
                c = 1;
            }
        }
        mx = max(mx, c);
        return mx;
    }
};
