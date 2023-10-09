// Print the elements of the given matrix in a spiral manner

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {

        // taking four pointers for topmost element , bottom element , right and left element matrix
        // dir is for direction of traversal
        // 0 --> left to right
        // 1 --> top to bottom
        // 2 --> right to left
        // 3 --> bottom to up
        // dir = (dir+1)%4 will set the direction right after each while loop iteration
        // as (n % 4) = n ( for n = 0, 1, 2 and 3) so it handles the logic of changing the direction

        vector<int> ans;
        int top = 0;
        int left = 0;
        int bottom = matrix.size() - 1;
        int right = matrix[0].size() - 1;
        int dir = 0;

        while (top <= bottom && left <= right)
        {
            if (dir == 0)
            {
                for (int i = left; i <= right; i++)
                {
                    ans.push_back(matrix[top][i]);
                    // push all the top elements from left to right
                }
                top++;
            }

            else if (dir == 1)
            {
                for (int i = top; i <= bottom; i++)
                {
                    ans.push_back(matrix[i][right]);
                    // push all the right elements from top to bottom
                }
                right--;
            }

            else if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(matrix[bottom][i]);
                    // push all the bottom elements from right to left
                }
                bottom--;
            }

            else if (dir == 3)
            {
                for (int i = bottom; i >= top; i--)
                {
                    ans.push_back(matrix[i][left]);
                    // push all the left elements from bottom to top
                }
                left++;
            }

            dir = (dir + 1) % 4;
        }

        return ans;
    }
};