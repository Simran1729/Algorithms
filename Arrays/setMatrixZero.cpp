// Set matrix zero problem

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int columns = matrix[0].size();
        bool firstRow = false;
        bool firstCol = false;

        // checking if first row and first Column has zero
        for (int j = 0; j < columns; j++)
        {
            if (matrix[0][j] == 0)
            {
                firstRow = true;
            }
        }
        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][0] == 0)
            {
                firstCol = true;
            }
        }

        // checking rows and columns other than the first
        for (int i = 1; i < rows; i++)
        {
            for (int j = 1; j < columns; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[0][j] = 0;
                    matrix[i][0] = 0;
                }
            }
        }

        // setting the rows and columns as zero
        for (int i = 1; i < rows; i++)
        {
            for (int j = 1; j < columns; j++)
            {
                if (matrix[0][j] == 0 || matrix[i][0] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        // setting first row and first column as zero
        for (int j = 0; j < columns; j++)
        {
            if (firstRow)
            {
                matrix[0][j] = 0;
            }
        }
        for (int i = 0; i < rows; i++)
        {
            if (firstCol)
            {
                matrix[i][0] = 0;
            }
        }
    }
};