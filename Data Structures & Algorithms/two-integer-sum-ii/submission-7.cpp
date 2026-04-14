class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> index;
        int slow = 0;
        int fast = numbers.size() - 1; 
        while(slow < fast){
            if(numbers[slow]+numbers[fast] > target) {
                cout << numbers[slow] << " + "<<numbers[fast] << "\n";
                fast--; 
            }
            if(numbers[slow]+numbers[fast] < target){
                cout << "slow incremented " << slow << "\n";
                slow++;
            }
            if(numbers[slow]+numbers[fast] == target){
                cout << numbers[slow] << " - "<<numbers[fast] << "\n";
                index.push_back(slow+1);
                index.push_back(fast+1);
                return index;
            }     
        }
        return index;
    }
};
