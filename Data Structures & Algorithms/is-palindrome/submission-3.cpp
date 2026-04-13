class Solution {
public:
    bool isPalindrome(string s) {
        string concat;
        for(int i = 0 ; i < s.size(); i++){
           if(isalnum(s[i])){
            concat += tolower(s[i]);
           }
        } 
        int start = 0;
        int end = concat.size()-1; 
        while(start < end){
            if(concat[start] == concat[end]){
                start++;
                end--; 
            }else{
                return false;
            }
        } 
        return true;
    }
};
