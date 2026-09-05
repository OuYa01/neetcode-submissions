class Solution {
public:
    int trap(vector<int>& height)
    {
        int sumArea = 0;
        int leftMaxIndex = 0;
        int rightMaxIndex = height.size() - 1;

        int start = 0;
        int end = height.size() - 1;
        int water;

        while (start < end)
        {
            if (height[start] > height[leftMaxIndex])
                leftMaxIndex =start;
            if (height[end] > height[rightMaxIndex])
                rightMaxIndex = end;

            if (height[leftMaxIndex] <= height[rightMaxIndex])
            {
                water = min(height[leftMaxIndex], height[rightMaxIndex]) - height[start];
                sumArea += water;
                start++;
            }
            else
            {
                water = min(height[leftMaxIndex], height[rightMaxIndex]) - height[end];
                sumArea += water;
                end--;
            }
        }

        return sumArea;
    }
};
