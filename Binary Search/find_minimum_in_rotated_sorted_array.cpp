class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int M = (l + r) / 2;
            if (nums[M] < nums[r]) r = M;
            else l = M + 1;
        }
        return nums[r];
    }
};
