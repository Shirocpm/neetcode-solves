class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size(); if (!n) return 0;
        int longsub = 1, curr = 0;
        unordered_map<char, int > mp;
        int i = 0, j = 0, ans = INT_MIN;

        while (j < n) {
            mp[s[j]]++;
            if (mp.size() == j - i + 1) ans = max(ans, j - i + 1);
            while (mp.size() < j - i + 1) {
                mp[s[i]]--;
                if (mp[s[i]] == 0) mp.erase(s[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};
