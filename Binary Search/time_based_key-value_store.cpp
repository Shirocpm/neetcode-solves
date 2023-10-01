class TimeMap {
public:
    map<pair<int, string > , string > mp;
    map<string, multiset<int > > mps;

    void set(string key, string value, int timestamp) {
        mp[{timestamp, key}] = max(mp[{timestamp, key}], value);
        mps[key].insert(-timestamp);
    }
    string get(string key, int timestamp) {
        int x = *mps[key].lower_bound(-timestamp); x *= -1;
        return mp[{x, key}];
    }
};
