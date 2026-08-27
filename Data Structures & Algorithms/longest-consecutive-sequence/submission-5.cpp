class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int> num_set(nums.begin(), nums.end());
        int start;
        int count = 0;
        int max = 0;

        for (int i : num_set)
        {
            if (num_set.find(i - 1) == num_set.end())
            {
                start = i;
                count = 1;
                while (num_set.find(start + 1) != num_set.end()) 
                {
                    start++;
                    count++;
                }
                
                if (count > max)
                    max = count;
            }
        }

        return max;
    }
};
