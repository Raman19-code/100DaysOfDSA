class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        mp={}
        for word in strs:
            key=tuple(sorted(word))
            if key not in mp:
                mp[key]=[]
            mp[key].append(word)
        return list(mp.values())
        