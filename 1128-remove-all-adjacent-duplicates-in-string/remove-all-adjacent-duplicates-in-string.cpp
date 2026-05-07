class Solution {
public:
    string removeDuplicates(string s) {
        /*in this case time is exced but code is correct
        int n = s.size();
       for(int i =0;i<n;i++)
       {
        for(int j=i+1;j<n;j++)
        {
            if(s[i]==s[j] && j==i+1)
            {
                s.erase(i,2);
                i=-1;
                break;
            }
        }
       }
       return s;*/
       string ans = "";
       for(char ch : s){
        if((!ans.empty()) &&ans.back()==ch)
        {
            ans.pop_back();
        }
        else{
            ans.push_back(ch);
        }
       }
       return ans;
    }
};