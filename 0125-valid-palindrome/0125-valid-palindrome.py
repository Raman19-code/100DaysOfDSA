class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s=s.lower()
        n=len(s)
        l=0
        r=n-1
        while l<r:
            if not new_s[l].isalnum():
                l+=1
                continue
            elif not new_s[r].isalnum():
                r-=1
                continue
            else:
                if new_s[l]!=new_s[r]:
                    return False
                l+=1
                r-=1
        return True

            

        