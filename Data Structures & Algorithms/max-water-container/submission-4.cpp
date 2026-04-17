class Solution {
public:
    int maxArea(vector<int>& heights) {
        int slow = 0;
        int fast = heights.size()-1; 
        int area = 0;
        while(slow < fast){
            int curArea = (min(heights[fast],heights[slow])*(fast-slow));  
            area = max(curArea,area); 
            if(heights[slow] < heights[fast]){  
                slow++; 
            }else{
                fast--;
            }
        }
        return area;
    }
};
