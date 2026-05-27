class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        bool swapped;
    
        // Outer loop for the number of passes
        for (int i = 0; i < nums.size()-1; i++) {
            swapped = false;
            
            // Inner loop for adjacent element comparisons
            // The last i elements are already sorted after i passes
            for (int j = 0; j < nums.size()-i-1 ; j++) {
                if (nums[j] > nums[j + 1]) {
                    std::swap(nums[j], nums[j + 1]);
                    swapped = true; // Mark that a swap occurred
                }
            }
            
            // If no two elements were swapped by inner loop, then break
            if (!swapped) {
                break;
            }
        }
        return nums;
    }
};