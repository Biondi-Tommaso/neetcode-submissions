class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        std::unordered_map<char,int> columnDict[9];
        std::unordered_map<char,int> rowDict[9];
        std::unordered_map<char,int> squareDict[3][3];
        
        for (int i = 0; i < 9; ++i){
            // row picture
            for(int j = 0; j <9; ++j){
                if (board[i][j] != '.' &&  rowDict[i].count(board[i][j])){
                    return false;
                }
                
            
                if (board[i][j] != '.' && columnDict[j].count(board[i][j])){
                    return false;
                }


                if (board[i][j] != '.' && squareDict[i/3][j/3].count(board[i][j])){
                    return false;
                }
                rowDict[i][board[i][j]]++;
                columnDict[j][board[i][j]]++;
                squareDict[i/3][j/3][board[i][j]]++;
            }
        }
        return true;
    }
};
