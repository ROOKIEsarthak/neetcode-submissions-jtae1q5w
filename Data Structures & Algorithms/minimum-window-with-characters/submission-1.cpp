class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>ump; 
        for(auto& it : t){
            ump[it]++;
        }
        int l = 0, r = 0 ,startIndex = -1 ,minLength = INT_MAX , count = 0;
        while(r < s.size()){
            if(ump.find(s[r])!= ump.end()){
                if(ump[s[r]] > 0){
                    count+=1;
                }
                ump[s[r]]--;
            }
            while(count == t.size()){
                if(r-l+1 < minLength){
                    minLength = r-l+1;
                    startIndex = l;
                }
                if(ump.find(s[l])!= ump.end()){
                    ump[s[l]]++;
                    if(ump[s[l]] > 0){
                        count-=1;
                    }
                }
                l++;
            }
            r++;
        }
        return startIndex == -1 ? "" : s.substr(startIndex,minLength);
    }
};
