class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<char, int> freq;

        for ( int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if ( board[i][j] != '.')
                {
                if ( freq.count(board[i][j]) > 0)
                {
                    return false;
                }
                else 
                {
                    freq[board[i][j]] = 1;
                }
                }
            }
            freq.clear();
        }

        map<char, int> freq2;
        for ( int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                if ( board[j][i] != '.'){
                if ( freq2.count(board[j][i]) > 0)
                {  
                    return false;
                }
                else 
                {
                    freq2[board[j][i]] = 1;
                }
                }
            }
            freq2.clear();
        }


        map<char, int> freq3;
        int counti = 0;
        int countj = 0;
        for ( int c = 0; c < 9; c++ )
        {
            if (c == 3) { counti = 3; countj = 0;}
            if ( c == 6) { counti = 6; countj = 0;}

            for (int i = counti; i < counti+3; i++)
            {
                for (int j = 3*countj; j < 3*countj + 3; j++)
                {
                    if ( board[i][j] != '.'){
                    if ( freq3.count(board[i][j]) > 0)
                    {
                        return false;
                    }
                    else 
                    {
                        freq3[board[i][j]] = 1;
                    }
                    }
                }
            }
            freq3.clear();
            countj++;
        }

        return true;
    }
};
