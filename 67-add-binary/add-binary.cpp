class Solution {
public:
    string addBinary(string a, string b) {
       reverse(a.begin(),a.end()); 
        reverse(b.begin(),b.end()); 
        int sum,carry=0;
        string c="";
        int n=max(a.length(),b.length());
        for(int i=0;i<n;i++){
            int z=0;
            int x=0;
            if(i < a.length())
                z = a[i] - '0';

            if(i < b.length())
                x = b[i] - '0';
            sum = z + x + carry; 
            c += (sum % 2) + '0';
            carry = sum / 2;
            
            }
            if(carry == 1)
            c += '1';

        reverse(c.begin(), c.end());

        return c;
        }
};