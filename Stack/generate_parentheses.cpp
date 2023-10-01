class Solution {
public:
    vector<string > v;
    void get(int n, int l, int r, string sr) {
        if (l == n && r == n) {v.push_back(sr); return ;}
        if (l < n) get(n, l + 1, r, sr + '(');
        if (r < l) get(n, l, r + 1, sr + ')');
    }
    vector<string> generateParenthesis(int n) {
        get(n, 0, 0, "");
        return v;
    }
};
