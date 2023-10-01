class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string > v;
        map<string, vector<string > > mp;
        for (auto i: strs) {
            string s = i;
            sort (s.begin(), s.end());
            if (mp[s].empty()) v.push_back(s);
            mp[s].push_back(i);
        }
        vector<vector<string > > V;
        for (auto i: v) {
            vector<string > st;
            for (auto j: mp[i]) {
                st.push_back(j);
            }
            V.push_back(st);
        }
        return V;
    }
};
