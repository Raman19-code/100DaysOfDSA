class Solution(object):
    def isVowel(self,ch):
        if ch in('A','E','I','O','U','a','e','i','o','u'):
            return True
        return False

    def reverseVowels(self, s):
        """
        :type s: str
        :rtype: str
        """
        s=list(s)
        i=0
        j=len(s)-1
        while i<j:
            if not self.isVowel(s[i]):
                i+=1
            elif not self.isVowel(s[j]):
                j-=1
            else:
                s[i],s[j]=s[j],s[i]
                i+=1
                j-=1
        return ''.join(s)
        
        