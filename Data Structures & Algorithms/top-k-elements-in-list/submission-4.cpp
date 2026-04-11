class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        vector<vector<int>> bucket(nums.size() + 1);
        for(int i = 0 ; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        for(auto it : freq) {
            bucket[it.second].push_back(it.first);
        }
        vector<int> result;
        for(int i = bucket.size() - 1; i >= 0; i--) {
            for(int num : bucket[i]) { 
                result.push_back(num);
                if(result.size() == k) {
                    return result;
                }
            }
        }
    }
};
