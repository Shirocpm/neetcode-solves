class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int ans = 0, l = 0, mxf = 0;
        map<int, int > mp;

        for (int i = 0; i < n; i++) {
            mp[s[i]]++;
            mxf = max(mxf, mp[s[i]]);

            while (i - l + 1 - mxf > k) {mp[s[l]]--; l++;}

            ans = max(ans, i - l + 1);
        }

        return ans;
    }
};
