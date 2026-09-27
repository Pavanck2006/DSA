class Solution {
public:
    string reverseParentheses(string s) {
        stack<string>st;
        string temp ="";
    for(int i =0; i <s.length(); i++)
    {
    if(s[i]=='(')
    {
        st.push(temp);
        temp = "";
    }
    else if(s[i]==')')
    {
        reverse(temp.begin(),temp.end());
        temp = st.top() + temp;
        st.pop();

    }
    else
    {
        temp.push_back(s[i]);
    }
    }

    return temp;
    }
};