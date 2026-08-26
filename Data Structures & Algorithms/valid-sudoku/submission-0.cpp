class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        unordered_map<char, int> hash_Row; // <value, counter>
        unordered_map<char, int> hash_Column; // <value, counter>
        unordered_map<char, int> hash_sub_box; // <value, counter> - sub_box : 3x3
        int num;
        for (int i = 0; i < 9; i++)
        {
            hash_Column.clear();
            hash_Row.clear();
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.')
                {
                    hash_Row[board[i][j]]++;
                    num = board[i][j] - '0';
                    if (num > 9 || num < 1  || hash_Row[board[i][j]] > 1)
                        return false;
                }

                if (board[j][i] != '.')
                {
                    hash_Column[board[j][i]]++;
                    num = board[j][i] - '0';
                    if ( num > 9 || num < 1  || hash_Column[board[j][i]] > 1)
                        return false;
                }
            }

        }

        int c = 0;
        int k = 0;
        int i = 0;
        int j = 0;
        int box_count = 0;
        int l_count = 0;
        int count_all_boxs = 0;
        int box_start_c = 0;
        while (i < 9)
        {
            j = 0;
            c = box_start_c;
            while (j < 3)
            {
                k = c + j;
                if (board[i][k] != '.')
                {
                    hash_sub_box[board[i][k]]++;
                    num = board[i][k] - '0';
                    if ((num > 9 || num < 1) || hash_sub_box[board[i][k]] > 1)
                        return false;
                }
                j++;
            }

            i++;
            l_count++;

            if (l_count == 3)
            {
                l_count = 0;
                box_count++;
                count_all_boxs++;
                hash_sub_box.clear();

                if (count_all_boxs == 9)
                    break;
                    
                if (box_count < 3)
                {
                    i -= 3; 
                    box_start_c += 3; 
                }
                else 
                {
                    
                    box_count = 0;
                    box_start_c = 0;
                }
            }

        }

        return true;


    }
};
