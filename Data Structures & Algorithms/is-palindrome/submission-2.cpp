class Solution {
public:
    bool isPalindrome(string s) {
        string concat;
        for(int i = 0 ; i < s.size(); i++){
           if(isalnum(s[i])){
            concat += tolower(s[i]);
           }
        }
        cout << "concat val " << concat << "\n";
        int start = 0;
        int end = concat.size()-1;
        cout << "size of string "<< end <<"\n";
        while(start < end){
            if(concat[start] == concat[end]){
                start++;
                end--;
                cout << concat[start] << " - " << concat[end] << "\n";
            }else{
                return false;
            }
        }
        // cout << concat << "\n";
        return true;
    }
};
