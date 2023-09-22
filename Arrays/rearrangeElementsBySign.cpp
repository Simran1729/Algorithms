// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should rearrange the elements of nums such that the modified array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer

#include <bits/stdc++.h>
using namespace std;

vector<int> replace(vector<int> &nums)
{
    int n = nums.size();
    vector<int> pos;
    vector<int> neg;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] <= 0)
        {
            neg.push_back(nums[i]);
        }
        else
        {
            pos.push_back(nums[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            ans.push_back(pos[i / 2]);
        }
        else
        {
            ans.push_back(neg[i / 2]);
        }
    }
    for (auto it : pos)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : neg)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : ans)
    {
        cout << it << " ";
    }
}

int main()
{
    vector<int> a = {1, 2, -4, -1, -6, 9, -2, 8, 9};
    replace(a);
}

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> ans(n, 0);
        int indexpos = 0;
        int indexneg = 1;
        for (auto num : nums)
        {
            if (num > 0)
            {
                ans[indexpos] = num;
                indexpos += 2;
            }
            if (num < 0)
            {
                ans[indexneg] = num;
                indexneg += 2;
            }
        }

        return ans;
    }
};