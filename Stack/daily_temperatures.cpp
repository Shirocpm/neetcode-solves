class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int, int > > st;
        vector<int > ans(temperatures.size());
        
        for (int i = 0; i < temperatures.size(); i++) {
            int currday = i;
            int currtem = temperatures[i];

            while (!st.empty() && st.top().second < currtem) {
                int prevday = st.top().first;
                int prevtem = st.top().second;
                st.pop();

                ans[prevday] = currday - prevday;
            }
            st.push({currday, currtem});
        }
        return ans;
    }
};
