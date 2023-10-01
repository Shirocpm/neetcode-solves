class MinStack {
public:
    stack<int > st;
    multiset<int > s;
    int mn = -2147483648;

    void push(int a) { st.push(a); s.insert(a);}
    void pop() {
        int x = st.top();
        auto it = s.find(x);
        st.pop(); s.erase(it);
    }

    int top()    { return st.top();          }
    int getMin() { return *s.lower_bound(mn);}
};
