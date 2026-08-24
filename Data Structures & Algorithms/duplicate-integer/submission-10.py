class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        myhashset = set()

        for i in nums:
            if i in myhashset:
                return True
            myhashset.add(i)
        return False
        