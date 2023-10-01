class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int t = 0, b = m - 1,  l = 0, r = n - 1;
        while (t <= b) {
            int M = (t + b) / 2;
            if (matrix[M][0] == target) return true;
            if (matrix[M][0] > target) b = M - 1;
            if (matrix[M][0] < target) t = M + 1;
        }
        int x = max(0, t - 1);
        while (l <= r) {
            int M = (l + r) / 2;
            if (matrix[x][M] == target) return true;
            if (matrix[x][M] > target) r = M - 1;
            if (matrix[x][M] < target) l = M + 1;
        }
        return false;
    }
};
