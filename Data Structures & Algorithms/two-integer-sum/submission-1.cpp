class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        unordered_map<int, int> check;
        for (int i = 0; i < size; i++)
        {
            int complement = target - nums[i];
            if (check.find(complement) != check.end())
                return {check[complement], i};
            check[nums[i]] = i;
        }
        
        return {};
    }
};
