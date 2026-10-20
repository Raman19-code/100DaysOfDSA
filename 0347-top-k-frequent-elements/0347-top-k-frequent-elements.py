class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        count_map={}
        for num in nums:
            if num not in count_map:
                count_map[num]=0
            count_map[num]+=1
        #step2:sort number-frequency pairs by frequency
        pairs=sorted(count_map.items(),
        key=lambda x:x[1],
        reverse=True
        )
        #step3:Extract the top k numbers
        result=[]
        for pair in pairs[:k]:
            result.append(pair[0])
        return result