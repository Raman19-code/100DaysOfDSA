from typing import List

class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        mp = {0: 1}
        count = 0
        p_sum = 0

        for num in nums:
            p_sum += num

            if p_sum - k in mp:
                count += mp[p_sum - k]

            mp[p_sum] = mp.get(p_sum, 0) + 1

        return count