class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> product_left(n);
        vector<int> product_right(n);
        vector<int> output(n);
        int i, j;

        product_left[0] = 1;
        product_right[n - 1] = 1;
        j = n - 2;
        i  = 1;
        while(i  < n && j >= 0)
        {
            product_left[i] = nums[i-1] * product_left[i-1];
            product_right[j] = nums[j + 1] *  product_right[j + 1];
            j--;
            i++;
        }

        for (i = 0; i < n; i++)
        {
            output[i] = product_left[i] *  product_right[i];
        }

        return output;

    }
};
