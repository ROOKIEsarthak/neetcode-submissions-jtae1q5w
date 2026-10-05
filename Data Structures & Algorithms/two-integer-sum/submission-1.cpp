class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> ump;
        for(int i=0;i<nums.size();i++){
            int compliment = target - nums[i];
            if(ump.find(compliment) != ump.end()){
                return {ump[compliment],i};
            }
            ump[nums[i]]=i; 
        }
    }
};
