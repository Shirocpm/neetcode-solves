class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int M = (l + r) / 2;

            if (nums[M] == target) return M;
            if (nums[l] == target) return l;
            if (nums[r] == target) return r;

            if (nums[M] > target && nums[l] < target) r = M - 1;
            else if (nums[M] > target && nums[l] > nums[M]) r = M - 1;
            else if (nums[M] < target && nums[l] > nums[M] && 
                     nums[r] > nums[M] && nums[r] < target) r = M - 1;
            else l = M + 1;
        }
        return -1;
    }
};
