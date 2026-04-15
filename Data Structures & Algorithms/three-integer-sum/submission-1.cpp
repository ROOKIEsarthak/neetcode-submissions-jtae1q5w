class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) { 
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int jp = i + 1;
            int kp = nums.size() - 1;
            int target = -nums[i];
            while (jp < kp) {
                int sum = nums[jp] + nums[kp];
                if (sum > target) {
                    kp--;
                } else if (sum < target) {
                    jp++;
                } else if (sum == target) {
                    res.push_back({nums[jp], nums[kp], nums[i]});
                    jp++;
                    kp--;
                    while (jp < kp && nums[jp] == nums[jp - 1])
                        jp++;
                    while (jp < kp && nums[kp] == nums[kp + 1])
                        kp--;
                }
            }
        }
        return res;
    }
};
