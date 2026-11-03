class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int left = 0;
        int right = matrix[0].size();
        int up = 0;
        int down = matrix.size(); 

        // cerco la riga
        while ( up < down){
            int mid = up + (down - up)/2;
            if(matrix[mid][0] <= target && matrix[mid][matrix[0].size()-1]>=target) {
                up = mid;
                break;
            }
            else if(matrix[mid][0] > target ) down = mid; 
            else if(matrix[mid][0] < target ) up = mid + 1; 
        }

        if (up == down) return false; 
        
        cout << "finito";
        int row =  up; 
        int column = 0;

        // cerco la colonna
        while (left < right){
            column  = left +( right-left)/2;
            if (matrix[row][column] == target) return true;
            else if (matrix[row][column] > target) right = column; 
            else if (matrix[row][column] < target) left = column + 1;
        }

        cout << row << " " << column;
        return false;
    }
};