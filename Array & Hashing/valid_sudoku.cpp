class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        map<pair<int, char >, int > row, col;
        map<pair<pair<int, int >, char >, int > box;

        for (int i = 1; i <= 9; i++)
        for (int j = 1; j <= 9; j++)
        {
            char c = board[i-1][j-1];
            if (c == '.') continue ;

            if (row[{i, c}]) return false ;
            if (col[{j, c}]) return false ;
            row[{i, c}]++; col[{j, c}]++;

            int x = (i - 1) / 3;
            int y = (j - 1) / 3;
            if (box[{{x, y}, c}]) return false ;
            box[{{x, y}, c}]++;
        }
        return true ;
    }
};
