class Solution {
    bool areVectorEqual(vector<int > a, vector<int > b) {
        for (int i = 0; i < 26; i++) if (a[i] != b[i]) return false;
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        if (s2.size() < s1.size()) return false;
        
        vector<int > frq1(26, 0);
        for (char c: s1) frq1[c-'a']++;

        vector<int > frq2(26, 0);
        int i = 0, j = 0;

        while (j < s2.size()) {
            frq2[s2[j]-'a']++;

            if (j - i + 1 == s1.size()) {
                if (areVectorEqual(frq1, frq2)) return true;
            }

            if (j - i + 1 >= s1.size()) {frq2[s2[i]-'a']--; i++;}
            j++;
        }
        return false;
    }
};
