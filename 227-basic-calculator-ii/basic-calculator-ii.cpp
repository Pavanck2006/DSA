class Solution {
public:
    int calculate(string s) {
          while (s.back() == ' ')
            s.pop_back();

         int ans = 0;
        int last=0;
        char op='+';
        int num = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            continue;
            if(isdigit(s[i]))
            {
                int digit = s[i]-'0';
                num = num*10 +digit;

            }
          
           if((!isdigit(s[i]) && s[i] != ' ') || i == s.length() - 1)
            {
                if(op == '+')
                {
                    ans += last;
                     last= num ;
                }
                else if(op == '-')
                {
                    ans += last;
                    last = -num;
                }
                else if(op == '*')
                {
                    last = last*num;
                }
                else if(op == '/')
                {
                    last = last/num;
                }
                num = 0;
                op = s[i];
            }
        }
        return ans + last;
    }
};