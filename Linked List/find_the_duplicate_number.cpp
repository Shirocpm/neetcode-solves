class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int > mp;
        for (auto i: nums) {
            if (mp[i]) return i;
            mp[i]++;
        }
        return 0;
    }
};
