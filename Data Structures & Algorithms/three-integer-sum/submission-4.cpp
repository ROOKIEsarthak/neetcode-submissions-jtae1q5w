class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) { 
        vector<vector<int>> res;
        int l = 0 ,r = 0 , sum = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0 ; i < nums.size()-2; i++){
            l = i + 1;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            r = nums.size()-1;
            while(l < r){
                sum = nums[l] + nums[r];
                if(sum > -nums[i]){
                    r--;
                }else if (sum < -nums[i]){
                    l++;
                }else if (sum == -nums[i]){
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                    while (l<r && nums[l]==nums[l-1]) l++;
                    while (l<r && nums[r]==nums[r+1]) r--;
                }
            }
        }       
        return res;
    }
};
