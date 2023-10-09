// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
// A subarray is a contiguous non - empty sequence of elements within an array.

class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {

        int n = nums.size();
        unordered_map<int, int> prefixSumCount;
        int prefixSum = 0;
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            prefixSum += nums[i];

            if (prefixSum == k)
            {
                count++;
            }

            if (prefixSumCount.find(prefixSum - k) != prefixSumCount.end())
            {
                count += prefixSumCount[prefixSum - k];
            }
            prefixSumCount[prefixSum]++;
        }
        return count;
    }
};