class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hash;
        vector<int> top(k);

        for (int& i:nums)
        {
            if (hash.find(i) == hash.end())
                hash[i] = 1;
            else
                hash[i]++;
        }
        
        int max = 1;
        int key_max;
        for (int i = 0; i < k; i++)
        {
            for (const auto& [key, value]:hash)
            {
                if (value >= max)
                {
                    max = value;
                    key_max = key;
                }
            }
            hash.erase(key_max);
            top[i] = key_max;
            max = 1;
        }

        return top;

    }
};
