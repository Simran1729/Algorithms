// Kadane's Algorithm

// Given an integer array nums, find the subarray
//  with the largest sum, and return its sum.

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            maxi = max(maxi, sum);
            if (sum < 0)
            {
                sum = 0;
            }
        }
        if (maxi == 0)
        {
            maxi = 0;
        }
        return maxi;
    }
};
