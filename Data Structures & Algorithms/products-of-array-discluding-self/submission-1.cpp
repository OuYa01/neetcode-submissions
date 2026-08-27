class Solution {
public:
    
    // Optimizing to O(1) extra space because my first solution allocated two extra vectors of size n.
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> output(n);
        int i, j;

        i  = 1;
        output[0] = 1;
        while(i  < n)
        {
            output[i] = nums[i-1] * output[i-1];
            i++;
        }

        int s = 1;
        for (i =  n - 1; i >= 0; i--)
        {
            output[i] *= s;
            s *= nums[i];
        }

        return output;

    }
};
