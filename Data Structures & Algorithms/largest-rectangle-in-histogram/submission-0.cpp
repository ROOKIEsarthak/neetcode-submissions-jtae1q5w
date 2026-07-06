class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> nse(n, n);
        vector<int> pse(n, -1);
        stack<int> st;
        // calculate NSE
        for (int i = 0; i < n; i++) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                nse[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        // clear the stack
        while (!st.empty())
            st.pop();

        // calculate PSE
        for (int i = n-1; i >= 0; i--) {
            while (!st.empty() && heights[i] < heights[st.top()]) {
                pse[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        
        // calculate the area by checking (NSE - PSE - 1) * height of the
        int area = 0 , maxArea = 0 , width = 0;
        for(int k = 0 ; k < n ;k++){
            width = nse[k] - pse[k]-1;
            area = heights[k]*width;
            maxArea = max(maxArea,area);
        }
        // element
        return maxArea;
    }
};