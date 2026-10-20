class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        mp={}
        for i ,num in enumerate(nums):
            more=target-num
            if more in mp:
                return [mp[more],i]
            mp[num]=i
        return []
        