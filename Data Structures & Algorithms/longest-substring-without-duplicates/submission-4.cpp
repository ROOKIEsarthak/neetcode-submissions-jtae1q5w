class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>ump; 
        int l = 0 , r = 0, windowSize = 0 , maxWindowSize = 0;
        while(r < s.size()){
            ump[s[r]]++;
            while(ump[s[r]]>1){
                ump[s[l]]--;
                l++;
            }
            windowSize = r-l+1;
            r++;
            maxWindowSize = max(windowSize , maxWindowSize);
        }
        return maxWindowSize;
    }
};
