class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // iterate through the array for each string
        // take strs[0] as tempString for comparison 
        // now compare each char of strs[0] with each string in the array
        // if characters match then increment the loop counter else pop back the extra character from tempString
        // return tempString
        string tempString = strs[0]; 
        for(int i = 1 ; i < strs.size() ; i++){
            for(int k = 0 ; k <= min(tempString.size(),strs[i].size()) ; k++){ 
                if(tempString[k] == strs[i][k]){
                    continue;
                }
                if(tempString[k] != strs[i][k]){
                    tempString = tempString.substr(0,k);
                    break;
                }
            }
        }
        return tempString;
    }
};