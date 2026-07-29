class Solution {
   public:
    int binarySearch(vector<int>& nums, int target , int left , int right){
        int midPos = 0;
        while(left <= right){
            midPos = (left+right)/2;
            if(target == nums[midPos]){
                return midPos;
            }else if(target > nums[midPos]){
                left = midPos+1;
            }else{
                right = midPos-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1, mid = 0, pivot = 0;
        while (start < end) {
            mid = (start + end) / 2;
            if (nums[mid] > nums[end]) {
                start = mid + 1;
            }
            if (nums[mid] < nums[end]) {
                end = mid;
            }
        }
        pivot = start;
        int pivotPos = pivot , val = 0; 
        start = 0 ; end = nums.size()-1 , mid = 0;
        if(pivotPos == 0){
            val = binarySearch(nums,target,start,end);
        }else if(target >= nums[0]){
            // check in the left half of the array
            // from start to pivot-1;
            val = binarySearch(nums,target,start,pivotPos-1);
        }else{
            // check in the right half of the array
            // from pivot to end 
            val = binarySearch(nums,target,pivotPos,end);
        }
        return val;
    }
};