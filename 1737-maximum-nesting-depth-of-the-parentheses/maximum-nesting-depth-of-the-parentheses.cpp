class Solution {
public:
    int maxDepth(string s) {
        int maxi =0;
        int temp=0;
        for(int i = 0; i<s.length();i++)
        {
            if(s[i]=='(')
            {       temp++;
                    maxi = max(maxi,temp);
            }
           if(s[i]==')')
           {
            temp--;
           }
        }
        return maxi;
    }
};