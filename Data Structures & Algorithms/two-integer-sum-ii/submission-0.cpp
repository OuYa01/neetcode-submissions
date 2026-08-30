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
                return {++start, ++end};
        }

        return {};
        
    }
};
