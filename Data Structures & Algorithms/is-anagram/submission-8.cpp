class Solution {
   public:
    bool isAnagram(string s, string t) {
        vector<int>chars(26, 0);
        if(s.size()!=t.size()) return false;
        for (int i = 0 ; i < s.size() ; i++) { 
            chars[s[i] - 'a']++;
            chars[t[i] - 'a']--;
        }
        for(int j = 0 ; j < chars.size();j++){
            if(chars[j] >= 1){
                return false;
            }
        }
        return true;
    }
};
