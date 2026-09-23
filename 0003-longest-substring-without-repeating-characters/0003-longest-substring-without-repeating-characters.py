class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        left=0
        ans=0
        mp={}
        for right in range(len(s)):
            mp[s[right]]=mp.get(s[right],0)+1
            while(mp[s[right]]>1):
                mp[s[left]]-=1
                left+=1
            ans=max(ans,right-left+1)
        return ans