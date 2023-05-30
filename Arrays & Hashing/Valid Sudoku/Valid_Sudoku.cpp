class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = 9;
        int col =9;

        //check row
        for (int i=0; i < row; i ++)
        {
            vector<bool> seen(9,false);
            for (int j=0; j< col; j++)
            {
                if(board[i][j] != '.')
                {
                    int num = board[i][j] -1;
                    if (seen[num] == true)
                    {
                        return false;
                    }
                    else
                        seen[num] = true;
                }
            }
        }
        // check col
        for (int j=0; j < row; j++)
        {
            vector<bool> seen(9,false);
            for (int i=0; i< col; i++)
            {
                if(board[i][j] != '.')
                {
                    int num = board[i][j] -1;
                    if (seen[num] == true)
                    {
                        return false;
                    }
                    else
                        seen[num] = true;
                }
            }
        }

        // check subgrids

        for (int k = 0; k < 9; k++) {
            vector<bool> seen(9, false);
            int startRow = (k / 3) * 3;
            int startCol = (k % 3) * 3;
            for (int i = startRow; i < startRow + 3; i++) {
                for (int j = startCol; j < startCol + 3; j++) {
                    if (board[i][j] != '.') {
                        int num = board[i][j] - '0' - 1;
                        if (seen[num] == true) {
                            return false;
                        }
                        seen[num] = true;
                    }
                }
            }
        }
        return true;
    }
};