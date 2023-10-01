class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int > st;
        for (auto t: tokens) {
            if (t == "+" || t == "-" || t == "*" || t == "/") {
                int x = st.top(); st.pop();
                int y = st.top(); st.pop();
                if (t == "+") y += x;
                if (t == "-") y -= x;
                if (t == "*") y *= x;
                if (t == "/") y /= x;
                st.push(y);
            }
            else {
                int x = 0, y = 1;
                for (auto i: t) {
                    if (i == '-') {y = -1; continue ;}
                    x = (x * 10) + (i - '0');
                }
                st.push(x * y);
            }
        }
        return st.top();
    }
};
