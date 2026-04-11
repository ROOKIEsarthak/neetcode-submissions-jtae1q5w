class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        vector<pair<int,int>> arr;

        // Step 1: count frequency
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        // Step 2: store (element, frequency)
        for(auto it : mp){
            arr.push_back({it.first, it.second});
        }

        // Step 3: sort by frequency (descending)
        sort(arr.begin(), arr.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        // Step 4: take top k elements
        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(arr[i].first);
        }
        return result;
    }
};