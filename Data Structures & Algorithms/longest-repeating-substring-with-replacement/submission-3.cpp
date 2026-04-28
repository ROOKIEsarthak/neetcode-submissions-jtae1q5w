class Solution {
public:
    int characterReplacement(string s, int k) { 
        int l = 0 , r = 0 , maxLen = 0 , maxFreq = 0;
        unordered_map<char,int>ump;
        for( r=0 ; r<s.size() ; r++){
            ump[s[r]]++;
            maxFreq = max(maxFreq,ump[s[r]]);
            while((r-l+1) - maxFreq > k){
                ump[s[l]]--;
                l++;
            }
            maxLen = max(maxLen,r-l+1);
        }
        return maxLen;
    }
};