class Solution {
public:
    int minAddToMakeValid(string s) {
        vector<char> ans;
        for(int i=0;i<s.length();i++)
        {
            if(!ans.empty() && (s[i]==')' && ans[ans.size()-1]=='('))
            {
                ans.pop_back();
            }
            else
            {
                ans.push_back(s[i]);
            }
        }
        return ans.size();
      
    }
};