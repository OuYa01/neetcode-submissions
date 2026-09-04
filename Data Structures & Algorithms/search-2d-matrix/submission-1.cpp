class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m = matrix.size(); // Rows
        int n = matrix[0].size(); // Columns
        int left = 0;
        int right = (m * n) - 1;
        int mid;

        while (left <= right)
        { 
            mid =  left + (right - left)/2;

            int i = mid / n;
            int j = mid % n;

            if (target > matrix[i][j])
            {
                left = mid + 1;
            }
            else if (target < matrix[i][j])
            {
                right = mid - 1;
            }
            else
                return true;
        }

        return false;
    }
};
