class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        while (l <= r) {
            int M = (l + r) / 2;

            if (nums[M] == target) return M;
            if (nums[M] < target) l = M + 1;
            if (nums[M] > target) r = M - 1;
        }
        return -1;
    }
};
