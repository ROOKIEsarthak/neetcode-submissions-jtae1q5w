class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int i = 0 ; i < nums.size() ; i++){
            st.insert(nums[i]);
        }
        int count = 0;
        int longest = 0;

        for(int num : st){ 
            cout << "value " << num << "\n";
            cout << "count " << st.count(num - 1) << "\n";
            if(st.count(num - 1) == 0){

                int current = num;
                int length = 1;
 
                while(st.count(current + 1)){
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};
