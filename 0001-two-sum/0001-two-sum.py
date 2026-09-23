class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        seen = {}

        for i in range(len(nums)):
            more = target - nums[i]

            if more in seen:
                return [seen[more], i]

            seen[nums[i]] = i

        return []