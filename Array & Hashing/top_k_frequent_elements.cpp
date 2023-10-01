class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int > v;
        map<int, int > mp;
        for (auto i: nums) {
            if (!mp[i]) v.push_back(i);
            mp[i]++;
        }
        vector<pair<int, int > > vp;
        for (auto i: v) {
            vp.push_back({mp[i], i});
        }
        sort(vp.begin(), vp.end());
        vector<int > ks;
        int l = vp.size() - 1;
        for (int i = 1; i <= k; i++) {
            ks.push_back(vp[l].second); l--;
        }
        return ks;
    }
};
