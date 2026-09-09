class Solution {
public:
    int findMin(vector<int> &nums) 
    {
        int min = nums[0];

        for (int& n : nums)
        {
            if (n < min)
                min = n;
        }   

        return  min;
    }
};
