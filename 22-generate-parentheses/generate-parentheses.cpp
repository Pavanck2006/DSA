class Solution {
public:
    void  generate(string cur ,int n, vector<string>&ans)
    {
        if(cur.length()== 2*n)
        {
            if(isvalid(cur))
            {
               ans.push_back(cur);
                
            }
            return;
        }
       
        generate( cur +'(',n,ans);
       
        generate( cur  + ')',n,ans);

    }
    bool isvalid(string cur)
    {
        int balance =0;
        for(char index : cur)
        {
            if(index == '(')
            {
                balance++;
            }
            else
            {
                balance--;
            }
            if(balance <0)
            {
                return false;
            }
            
        }
        return balance ==0;
    }
    vector<string> generateParenthesis(int n) {
        string  cur = "";
        vector<string>ans;
        generate(cur,n,ans);
        return ans;
    }
   
};