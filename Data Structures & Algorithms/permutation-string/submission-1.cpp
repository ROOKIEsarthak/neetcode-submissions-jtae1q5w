class Solution {
   public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) {
            return false;
        }
        unordered_map<char, int> ump;
        unordered_map<char, int> ump2; 
        for (auto i : s1) {
            ump[i]++;
        }
        int l = 0, r = s1.size();
        for (int j = 0; j < s1.size(); j++) {
            ump2[s2[j]]++;
        }
        if(ump2 == ump){
            return true;
        }
        while (r < s2.size()) {
            ump2[s2[l]]--;
            if(ump2[s2[l]]==0){
                ump2.erase(s2[l]);
            }
            l++;
            ump2[s2[r]]++;
            r++;
            if (ump2 == ump) {
                return true;
            }
        }
        return false;
    }
};
