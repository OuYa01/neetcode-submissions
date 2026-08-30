class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        vector<int> indexs(2);

        int start = 0;
        int end = numbers.size() - 1;

        while (start < end)
        {
            if (numbers[start] + numbers[end] > target)
                end--;
            else if (numbers[start] + numbers[end] < target)
                start++;
            else
                return {start + 1, end + 1}; // in last solution {++start, ++end} caused undefined behavior in old compilers
        }

        return {};
        
    }
};
