class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size()-1;
        if (n == 0) return 0;
        int l = 0 , r = n , totalH = 0;
        int maxL = height[0] , maxR = height[n];
        while(l <= r){
            if(height[l] < height[r]){
                maxL = max(height[l],maxL);
                totalH += maxL - height[l];
                l+=1;
            }else {
                maxR = max(height[r],maxR);
                totalH += maxR - height[r];
                r-=1;
            }
            
        }
        return totalH;
    }
};