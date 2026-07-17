class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int lowerBound = 0, mid = 0;
        int upperBound = (m * n) - 1;
        while (lowerBound <= upperBound) {
            mid = (lowerBound + upperBound) / 2;
            int row = mid / n;
            int col = mid % n;
            if (matrix[row][col] == target) {
                return true;
            } else if (matrix[row][col] > target) {
                upperBound = mid - 1;
            } else {
                lowerBound = mid + 1;
            }
        }
        return false;
    }
};
