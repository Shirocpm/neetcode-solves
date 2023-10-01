class Solution {
public:
    bool isPalindrome(string s) {
        string st = "";
        for (auto i: s) {
            if (i < '0' || i > 'z') continue ;
            if (i < 'a' && i > 'Z') continue ;
            if (i < 'A' && i > '9') continue ;

            if (i < 'a') st.push_back(i+32);
            else st.push_back(i);
        }
        int n = st.size();
        for (int i = 0; i < n/2; i++) {
            if (st[i] != st[n-i-1]) return false;
        }
        return true;
    }
};
