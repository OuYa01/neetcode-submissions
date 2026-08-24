class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::map<int, int> Duplicated;
        for (int &i:nums)
        {
            if (Duplicated.find(i) != Duplicated.end())
                return true;
            Duplicated[i] = 0;
        }
        return false;
    }
};