class Solution:
    def isPalindrome(self, s: str) -> bool:
        new_s=s.lower()
        i=0
        j=len(new_s)-1
        while i<j:
            if not new_s[i].isalnum():
                i+=1
                continue
            elif not new_s[j].isalnum():
                j-=1
                continue
            else:
                if new_s[i]!=new_s[j]:
                    return False
                i+=1
                j-=1
                
        return True   
        