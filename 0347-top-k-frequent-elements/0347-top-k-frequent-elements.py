class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        count_map=Counter(nums)
        return [item for item,freq in count_map.most_common(k)]


        