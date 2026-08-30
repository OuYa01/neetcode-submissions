class Solution {
public:
    int maxArea(vector<int>& heights)
    {
        int start = 0;
        int end = heights.size() - 1;

        int max = 0;
        while (start < end)
        {
            int minimum= min(heights[start], heights[end]);
            int width = end - start;
            if (minimum * width >= max)
                max = minimum * width;

            if (heights[start] < heights[end])
                start++;
            else if (heights[start] > heights[end])
                end--;
            else
            {
                start++;
                end--;
            }
        }

        return max;
    }
};
