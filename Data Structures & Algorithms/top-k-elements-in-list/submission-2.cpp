class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        int n = nums.size();
        vector<vector<int>> count(n + 1);

        for (int& i:nums)
        {
            hash[i]++;
        }

        for (const auto& [key, value]:hash)
        {
            count[value].push_back(key);
        }

        vector<int> top;
        top.reserve(k);

        for (int i = n; i >= 1; i--)
        {
            for (int j : count[i])
            {
                top.push_back(j);
                if (top.size() == k)
                    return top;
            }
        }

        return top;

    }
};
