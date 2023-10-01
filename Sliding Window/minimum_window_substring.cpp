class Solution {
public:
    string minWindow(string s, string t) {
        vector<int > mp(128, 0);
        for (char c: t) mp[c]++;
        
        int i = 0, j = 0, l = 0, c = t.size(), d = INT_MAX;
        while (j < s.size()) {
            if (mp[s[j++]]-- > 0) c--;

            while (c == 0) {
                if (j - i < d) {l = i; d = j - l;}
                if (mp[s[i++]]++ == 0) c++;
            }
        }
        return d == INT_MAX ? "" : s.substr(l, d);
    }
};
