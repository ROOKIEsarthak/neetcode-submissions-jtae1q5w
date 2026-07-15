class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int flattenedIndex = 0, rowVal = 0, colVal = 0;
        
        for (int row = 0; row < matrix.size(); row++) {
            int cols = matrix[row].size();
            int start = 0 , end = cols , mid = 0;
            for (int col = 0; col < cols; col++) {
                mid = (start+end)/2;
                flattenedIndex = ((cols * row) + col);
                rowVal = flattenedIndex / cols;
                colVal = flattenedIndex % cols;
                if(target > matrix[rowVal][colVal]){
                    start = mid+1;
                }
                if(target < matrix[rowVal][colVal]){
                    end = mid-1;
                }
                if(target == matrix[rowVal][colVal]){
                    return true;
                }
            }
            // cout << "\n";
        }
        return false;
    }
};
