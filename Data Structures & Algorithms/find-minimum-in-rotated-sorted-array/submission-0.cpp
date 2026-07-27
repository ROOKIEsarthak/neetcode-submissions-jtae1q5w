class Solution {
   public:
    int findMin(vector<int>& nums) {
        int start = 0 , end = nums.size()-1 , mid = 0;
        while(start < end){
            mid = (start+end)/2;
            if(nums[mid] > nums[end]){
                start = mid+1;
            }else if(nums[mid] < nums[end]){
                end = mid;
            }
        }
        return nums[end];
    }
};
