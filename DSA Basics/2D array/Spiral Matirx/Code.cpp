class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int row = matrix.size();
        int col = matrix[0].size();
        int count = 0;
        int total = row * col;
        int startingRow = 0;
        int endingRow = row - 1;
        int startingColumn = 0;
        int endingColumn = col - 1;

        while (count < total) {
            for (int index = startingColumn; index <= endingColumn && count < total; index++) {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            for (int index = startingRow; index <= endingRow && count < total; index++) {
                ans.push_back(matrix[index][endingColumn]);
                count++;
            }
            endingColumn--;
            
            for (int index = endingColumn; index >= startingColumn && count < total; index--) {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            for (int index = endingRow; index >= startingRow && count < total; index--) {
                ans.push_back(matrix[index][startingColumn]);
                count++;
            }
            startingColumn++;
        }
        
        return ans;
    }
};
