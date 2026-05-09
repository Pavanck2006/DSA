class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>fre(26,0);
        int maxfre =0;
        int left=0; 
        int ans=0;
        for(int right=0;right<s.size();right++)
        {
            fre[s[right]-'A']++;
            maxfre= max(maxfre,fre[s[right]-'A']);
            while((right-left+1)-maxfre>k)
            {
               fre[s[left]-'A']--;
               left++;  
            }
            ans = max(ans,(right-left+1));
        }
        return ans;
    }
};