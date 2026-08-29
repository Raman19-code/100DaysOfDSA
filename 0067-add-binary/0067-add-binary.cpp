class Solution {
public:
    string addBinary(string a, string b) {
        int i =a.size()-1;
        int j=b.size()-1;
        int carry=0;
        string result="";
        while(i>=0 || j>=0 || carry)
        {
            int digit1=0;
            int digit2=0;
            if(i>=0)
            {
                digit1=a[i]-'0';   
            }
            if(j>=0)
            {
                digit2=b[j]-'0';
            }
           int  sum=digit1+digit2+carry;
            int digit=sum%2;
            carry=sum/2;
            result+=(digit+'0');
            i--;
            j--;
        }
        reverse(result.begin(),result.end());
        return result;
        
    }
};