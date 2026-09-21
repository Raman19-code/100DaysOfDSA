class Solution:
    def moveZeroes(self, nums: list[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        non_zero=0
        n=len(nums)
        for i in range(n):
            if nums[i]!=0:
                nums[non_zero],nums[i]=nums[i],nums[non_zero]
                non_zero+=1
        