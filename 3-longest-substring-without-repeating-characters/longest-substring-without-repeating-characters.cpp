class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        string a = "";
        int count=0;
        for(char ch:s)
        {
            while(a.find(ch) != string::npos)
            {
                a.erase(0,1);
            }
            a.push_back(ch);
            count=max(count,(int)a.size());    
            }
    return count;
    }
};