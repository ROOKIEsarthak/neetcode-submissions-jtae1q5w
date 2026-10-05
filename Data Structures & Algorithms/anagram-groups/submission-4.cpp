class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ump;

        for (auto& word : strs) {
            vector<int> charArr(26, 0);
            for (char c : word) {
                charArr[c - 'a']++;
            }
            string key;
            for (int count : charArr) {
                key += to_string(count);
                key += "#";
            }
            ump[key].push_back(word);
        }

        vector<vector<string>> ans;
        for (auto pairs : ump) {
            ans.push_back(pairs.second);
        }

        return ans;
    }
};
