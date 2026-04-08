class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int>mp1;
        map<char,int>mp2; 
        if(s.size()!= t.size()) return false;
        for(int i = 0;i<s.size();i++){
            mp1[s[i]]++; 
        } 
        for(int j = 0;j<t.size();j++){
            mp2[t[j]]++; 
        } 
        for(int k = 0;k<s.size();k++){
            if(mp1[s[k]]!=mp2[s[k]]) return false;
        }
        return true;
    }
};
