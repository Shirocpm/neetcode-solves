class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<pair<int, int > > v;
        for (int i = 0; i < n; i++) {
            v.push_back({heights[i], i + 1});
        }
        sort(v.begin(), v.end());
        vector<int > h; int j = 0;
        set<int > fs, s;
        set<int >::iterator it;
        int mx = v[0].first * n;

        fs.insert(n + 1); s.insert(0);
        for (auto i: v) {
            if (i.first != j) {
                for (auto l: h) {
                    fs.insert(l);
                    s.insert(-l);
                }
                h.clear();
            }
            int l = *s.upper_bound(-i.second);
            int r = *fs.upper_bound(i.second);

            mx = max(mx, i.first * (r + l - 1));

            h.push_back(i.second); j = i.first;
        }
        return mx;
    }
};
