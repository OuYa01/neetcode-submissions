class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> hash;
        string temp;
        vector<vector<string>> group_strs;

        for (string s:strs)
        {
            // sort(s.begin(), s.end());
            temp = s;
            sort(s.begin(), s.end());
            hash[s].push_back(temp);
        }

        for (const auto& [key, value]:hash)
        {
            group_strs.push_back(value);
        }

        return group_strs;
    }
};
