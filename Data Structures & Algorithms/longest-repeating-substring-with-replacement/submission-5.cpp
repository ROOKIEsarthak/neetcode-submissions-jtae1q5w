class Solution {
public:
    int characterReplacement(string s, int k) { 
        unordered_map<char,int>ump;
        int maxF = 0 , maxCount = 0 , l = 0 ;
        for(int r = 0 ; r < s.size() ; r++){
            ump[s[r]]++;
            maxF = max(maxF , ump[s[r]]);
            if((r-l+1) - maxF > k){
                ump[s[l]]--;
                l++;
            }
            maxCount = max(maxCount , (r-l+1));
        }
        return maxCount;
    }
};