class Solution {
public:
    int trap(vector<int>& height) 
    {
        int sumArea = 0;
        int max;
        int water;
        int n = height.size();
        vector<int> maxLeft(n);
        vector<int> maxRight(n);
        
        max = height[0];
        for (int i = 0; i < n; i++)
        {
            if (height[i] > max)
                max = height[i];
            maxLeft[i] = max;
        }

        max = height[n - 1];
        for (int i = n - 1; i >= 0; i--)
        {
            if (height[i] > max)
                max = height[i];
            maxRight[i] = max;
        }


        for (int i = 0; i < n; i++)
        {
            int water = min(maxRight[i], maxLeft[i]) - height[i];
            if (water > 0)
                sumArea += water;
        }

        return sumArea;
        
    }
};
