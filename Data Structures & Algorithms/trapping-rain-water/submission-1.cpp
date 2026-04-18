class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;

        vector<int> maxPre(n);
        vector<int> maxPost(n);
 
        maxPre[0] = height[0];
        for (int i = 1; i < n; i++) {
            maxPre[i] = max(maxPre[i - 1], height[i]); 
        }
 
        maxPost[n - 1] = height[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            maxPost[i] = max(maxPost[i + 1], height[i]); 
        }
 
        int res = 0;
        for (int i = 0; i < n; i++) {
            res += min(maxPre[i], maxPost[i]) - height[i];
        }

        return res;
    }
};