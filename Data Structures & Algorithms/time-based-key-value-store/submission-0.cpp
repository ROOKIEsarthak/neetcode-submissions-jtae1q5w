class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> store;

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        store[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (store.find(key) == store.end()) {
            return ""; // key was never set
        }

        vector<pair<int, string>>& entries = store[key];

        // binary search for the largest timestamp <= given timestamp
        int left = 0, right = entries.size() - 1;
        string result = "";

        while (left <= right) {
            int mid = (left + right) / 2;

            if (entries[mid].first <= timestamp) {
                result = entries[mid].second; // valid candidate, keep looking for a bigger one
                left = mid + 1;
            } else {
                right = mid - 1; // this entry's timestamp is too big, look earlier
            }
        }

        return result;
    }
};