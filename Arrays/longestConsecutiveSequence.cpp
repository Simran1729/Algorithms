// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        int count = 1;
        int maxCount = 1;
        sort(nums.begin(), nums.end());
        if (n <= 1)
        {
            return n;
        }
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == nums[i - 1] + 1)
            {
                count = count + 1;
                maxCount = max(count, maxCount);
            }
            else if (nums[i] == nums[i - 1])
            {
                continue;
            }
            else
            {
                count = 1;
            }
        }
        return maxCount;
    }
};