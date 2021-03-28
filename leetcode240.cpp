class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
int column = matrix.size(), row = matrix[0].size();
        int i = 0, j = row - 1;
        while(i < column && j>=0){
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] < target){
                i++;
            }
            else j--;
        }
        return false;        
    }
};
