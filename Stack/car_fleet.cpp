class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, int > > v;
        int n = position.size();
        for (int i = 0; i < n; i++) {
            v.push_back({-position[i], speed[i]});
        }
        sort(v.begin(), v.end());
        stack <float > st;
        for (auto i: v) {
            float t = (float)(target + i.first) / (float)(i.second);
            if (st.empty() || t > st.top()) st.push(t);
        }
        return st.size();
    }
};
