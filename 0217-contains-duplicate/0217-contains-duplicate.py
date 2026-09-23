class Solution:
    def containsDuplicate(self, nums: list[int]) -> bool:
        seen=set()
        n=len(nums)
        for i in range(n):
            if nums[i] in seen:
                return True
            seen.add(nums[i])
        return False
        