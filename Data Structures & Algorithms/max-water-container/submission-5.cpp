class Solution {
public:
    int maxArea(vector<int>& heights) {
       int area = 0 , maxwater = 0 , l = 0 , r = heights.size()-1;
       while(l < r){
        area = (r-l) * min(heights[r],heights[l]);
        maxwater = max(area,maxwater);
        if(heights[l] < heights[r]){
            l++;
        }else{
            r--;
        }
       }
       return maxwater;

    }
};
