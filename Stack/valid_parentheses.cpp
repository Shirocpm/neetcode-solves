class Solution {
public:
    bool isValid(string s) {
        vector<int > v;
        for (auto i: s) {
            if (i == '(')      v.push_back(1);
            else if (i == ')') v.push_back(-1);
            else if (i == '[') v.push_back(2);
            else if (i == ']') v.push_back(-2);
            else if (i == '{') v.push_back(3);
            else if (i == '}') v.push_back(-3);
        }
        stack<int > st;
        for (auto i: v) {
            if (i > 0) st.push(i);
            else
            {
                if (st.empty()) return false;
                if (i + st.top() != 0) return false;
                st.pop();
            }
        }
        if (st.empty()) return true;
        return false;
    }
};
