class Solution {
public:
    string makeFancyString(string s) {
        string ans="";
        int count=1;
        int n=s.length();
         for(int i=1;i<=n;i++)
         {
            char ch=s[i-1];
            char ch2=s[i];
              if(ch==ch2)
              {
                count++;
              }
              else
              {
                count=1;
              }
              if(count<3)
              {
                ans+=s[i-1];
              }
         }
         return ans;
        
    }
};