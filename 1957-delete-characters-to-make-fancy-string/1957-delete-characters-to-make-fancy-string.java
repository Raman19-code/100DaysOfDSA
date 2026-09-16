class Solution {
    public String makeFancyString(String s) {
       
      int count=1;
      StringBuilder sb=new StringBuilder();
      sb.append(s.charAt(0));
      for(int i=1;i<s.length();i++)
      {
        char ch=s.charAt(i);
        char ch2=s.charAt(i-1);
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
            sb.append(ch);
        }
      }
      return sb.toString();
        
    }
}