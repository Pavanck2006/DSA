class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
    
        for(int i=1;i<=s.length();i++)
        {
            ans = ans+ ((75-(s[i-1]-'0'))*i);
       
        }
        return ans;
    }
};