class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        int j=1;
        for(int i=0;i<s.length();i++)
        {
            ans = ans+ ((75-(s[i]-'0'))*j);
            j++;
        }
        return ans;
    }
};