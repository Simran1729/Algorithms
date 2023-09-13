// Moore's Voting Algorithm

// The majority element is the element that appears more
// than ⌊n / 2⌋ times. You may assume that the majority element
// always exists in the array.

#include <bits/stdc++.h>
class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int count = 0;
        int candidate = 0;
        for (auto num : nums)
        {
            if (count == 0)
            {
                candidate = num;
            }
            if (num == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return candidate;
    }
};