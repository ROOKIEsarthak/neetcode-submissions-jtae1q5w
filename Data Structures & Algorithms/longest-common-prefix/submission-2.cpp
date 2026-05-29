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
            int k = 0;
            while(k < strs[0].size() && k < strs[i].size() && tempString[k] == strs[i][k]){
                k++;
            }
            tempString = tempString.substr(0,k);
            if(tempString.empty()){
                return "";
            }
        }
        return tempString;
    }
};