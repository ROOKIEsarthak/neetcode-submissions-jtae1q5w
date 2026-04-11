class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>prefixArr;
        vector<int>postfixArr;
        vector<int>resultArr;
        // calculate prefixArr values
        int prefixVal = 1;
        int postfixVal = 1;
        for(int i=0;i<nums.size();i++){
            if(i==0){
                prefixArr.push_back(1);
            }else{
                prefixVal = prefixVal * nums[i-1];
                prefixArr.push_back(prefixVal); 
                cout << " prefixVal Val " << prefixVal << "\n";

            }
        }
        // calculate postfix values
        for(int k = nums.size() - 1; k >= 0; k--){
            if(k == nums.size() - 1){
                postfixArr.push_back(1);
            }else{
                postfixVal = postfixVal * nums[k+1];
                postfixArr.push_back(postfixVal);
            }
        }

        reverse(postfixArr.begin(), postfixArr.end());

        // result
        for(int z = 0; z < nums.size(); z++){
            resultArr.push_back(prefixArr[z] * postfixArr[z]);
        }

        return resultArr;
    }
};
