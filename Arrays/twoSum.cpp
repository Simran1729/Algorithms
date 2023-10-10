// optimal appraoch with map

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> numMap;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (numMap.count(complement))
            {
                ans.push_back(numMap[complement]);
                ans.push_back(i);
                break;
            }
            numMap[nums[i]] = i;
        }
        return ans;
    }
};