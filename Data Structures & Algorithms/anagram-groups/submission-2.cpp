class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string, vector<string>> hash;
        string temp;
        vector<vector<string>> group_strs;

        for (string& s:strs)
        {
            temp = s;
            sort(temp.begin(), temp.end());
            hash[temp].push_back(s);
        }

        for (const auto& [key, value]:hash)
        {
            group_strs.push_back(move(value));
        }

        return group_strs;
    }
};
