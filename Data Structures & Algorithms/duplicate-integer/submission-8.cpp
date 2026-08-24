class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> Duplicated;
        for (int &i:nums)
        {
            if (Duplicated.find(i) != Duplicated.end())
                return true;
            Duplicated.insert(i);
        }
        return false;
    }
};