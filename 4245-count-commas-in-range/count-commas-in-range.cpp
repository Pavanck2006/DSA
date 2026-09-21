class Solution {
public:
    int countCommas(int n) {
        int ans;
        if(n<1000)
        return 0;
        if(n>=1000)
        {
            ans = abs(1000-(n+1));
        }
        return ans;
    }
};