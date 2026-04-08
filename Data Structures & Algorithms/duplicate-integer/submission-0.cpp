class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            mp[nums[i]]++;
            // cout << "numbers " << nums[i] << endl;
        }
        for (auto n: mp){
            if(n.second > 1){
                return true;
            }
            // cout << n.first << " " << n.second << endl;
        }
        return false;
    }
};