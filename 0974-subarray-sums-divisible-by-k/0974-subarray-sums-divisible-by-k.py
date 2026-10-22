
class Solution:
    def subarraysDivByK(self, nums: list[int], k: int) -> int:
        mp = {0: 1}
        prefixSum = 0
        count = 0

        for num in nums:
            prefixSum += num
            rem = prefixSum % k

            if rem in mp:
                count += mp[rem]

            mp[rem] = mp.get(rem, 0) + 1

        return count
