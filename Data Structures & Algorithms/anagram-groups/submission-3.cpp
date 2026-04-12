class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) { 
        map <vector<int>,vector<string>> mp;
        for(int i = 0;i<strs.size();i++){
            vector<int>arr (26,0); 
            for(int j = 0;j<strs[i].size();j++){ 
                arr[strs[i][j] - 'a']+=1; 
            } 
            mp[arr].push_back(strs[i]);  
        }
        vector<vector<string>> result;
        for(auto &it : mp){
            result.push_back(it.second);
        }
        return result;
    }
};
