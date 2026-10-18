class Solution {
public:
bool isAlphaNumeric(char ch)
{
    if((ch>='A' && ch<='Z')||
    (ch>='a'&& ch<='z')||
    (ch>='0' && ch<='9'))
    {
        return true;
    }
    return false;

}
    bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j)
        {
            if(!isAlphaNumeric(s[i]))
            {
                i++;
                continue;
            }
           else if(!isAlphaNumeric(s[j]))
            {
                j--;
                continue;
            }
            else{
            if(tolower(s[i])!=tolower(s[j]))
            {
                return false;
            }
            i++;
            j--;
            }
        }
        return true;
        
    }
};