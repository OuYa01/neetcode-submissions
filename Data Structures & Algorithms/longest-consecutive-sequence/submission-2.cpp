class Solution {
public:
    /***/

    int longestConsecutive(vector<int>& nums) 
    {
        if (nums.empty())
            return 0;
        sort(nums.begin(), nums.end());
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
        int count = 1;
        int prev = nums[0];
        int max_count = 1;;


        for (int& i:nums)
        {
            cout << i << ",";

        }
        cout << endl;

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == prev + 1)
            {
                prev = nums[i];
                count++;
            }
            else
            {
                if (count > max_count)
                    max_count = count;
                count = 1;
                prev = nums[i];
            }
        }

        if (count > max_count)
                max_count = count;

        return max_count;
    }
};
