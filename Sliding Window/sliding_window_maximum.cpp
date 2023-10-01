class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        priority_queue<int > q;
        vector<int > ans;
        map<int, int > mp;

        for (int i = 0; i < k; i++) q.push(nums[i]);
        ans.push_back(q.top());

        for (int i = 0; i < nums.size() - k; i++) {
            mp[nums[i]]++;
            while (mp[q.top()] > 0) {
                mp[q.top()]--; q.pop();
            }
            q.push(nums[i+k]);
            ans.push_back(q.top());
        }
        return ans;
    }
};
