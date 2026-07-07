class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int lowerBound = 0 , upperBound = nums.size()-1;
        int mid = 0;
        while(lowerBound <= upperBound){
            mid = lowerBound + (upperBound-lowerBound)/2;
            if(target == nums[mid]){
                return mid;
            }else if(target > nums[mid]){
                lowerBound = mid+1;
            }else{
                upperBound = mid-1;
            }
        }
        return -1;
    }
};
