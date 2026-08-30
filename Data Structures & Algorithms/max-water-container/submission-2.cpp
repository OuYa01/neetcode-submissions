class Solution {
public:
    int maxArea(vector<int>& heights)
    {
        int start = 0;
        int end = heights.size() - 1;

        int maxArea = 0;
        while (start < end)
        {
            int minimum= min(heights[start], heights[end]);
            int width = end - start;
            maxArea = max(maxArea, minimum * width);

            if (heights[start] < heights[end])
                start++;
            else
                end--;
    
        }

        return maxArea;
    }
};
