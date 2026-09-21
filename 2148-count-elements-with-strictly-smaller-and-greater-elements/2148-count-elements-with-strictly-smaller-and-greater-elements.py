class Solution:
    def countElements(self, nums: list[int]) -> int:
        min_value=min(nums)
        max_value=max(nums)
        n=len(nums)
        count=0
        for i in range(n):
            if min_value<nums[i]<max_value:
                count+=1
        return count

        