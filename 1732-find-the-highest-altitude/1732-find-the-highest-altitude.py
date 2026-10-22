class Solution:
    def largestAltitude(self, gain: list[int]) -> int:
        ans=0
        prefixSum=0
        n=len(gain)
        for i in range(n):
             prefixSum+=gain[i]
             ans=max(ans,prefixSum)
        return ans
        