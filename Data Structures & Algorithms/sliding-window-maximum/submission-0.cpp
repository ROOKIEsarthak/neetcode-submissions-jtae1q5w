class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        // step1 -  iterate through the array maintaining the window size
        // step2 - compare the elements in the window to find the maximum element
        // keep moving the window and repeating step 1 and step 2

        // another way of doing is to keep the maximum value of a window 
        // while increasing the window size check if the maximum value is still in the window
        // if maxvalue is present then compare it with the new element and recalculate maxValue
        // else calculate the maximum value in the new window 
        deque <int>dq;
        vector<int> resList;
        int l = 0 , r = 0 ;
        for(r = 0 ; r < nums.size() ; r++){
            while(!dq.empty() && nums[dq.back()] < nums[r]){
                dq.pop_back();
            }
            dq.push_back(r);

            if(dq.front() < l){
                dq.pop_front();
            }
            
            if(r-l+1 == k){
                resList.push_back(nums[dq.front()]);
                l++;
            }
        }
        return resList;
    }
};
