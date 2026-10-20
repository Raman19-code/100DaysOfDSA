class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        mp={}
        for i ,num in enumerate(nums):
            if num in mp:
                return True
            mp[num]=i
        return False

        