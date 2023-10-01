class Solution {
public:
    int time(vector<int > piles, int k) {
        if (k == 0) return INT_MAX;
        int h = 0;
        for (auto i: piles) {
            if (i % k != 0) h++;
            h += i / k;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        long long sum;
        int mx = 0;
        for (auto i: piles) {
            sum += i;
            mx = max(mx, i);
        }
        int l = sum / h, r = mx, k;
        while (l < r) {
            int M = (l + r) / 2;
            int k = time(piles, M);
            
            if (k > h) l = M + 1;
            else r = M;
        }
        return r;
    }
};
