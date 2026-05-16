class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       /*solution:- 1
        string a = "";
        int count=0;
        for(char ch:s)
        {
            while(a.find(ch) != string::npos)//charcter is found meaning
            {
                a.erase(0,1);
            }
            a.push_back(ch);
            count=max(count,(int)a.size());    
            }
    return count;

    solution :-2
    optimal solution in n time complexity
     vector<int> vec(256, -1);

        int left = 0;
        int ans = 0;

        for(int right = 0; right < s.size(); right++)
        {
            char ch = s[right];

            if(vec[ch] >= left)
            {
                left = vec[ch] + 1;
            }

            vec[ch] = right;

            ans = max(ans, right - left + 1);
        }

        return ans;*/
        unordered_set<char> st;

int left = 0;
int count = 0;

for(int right = 0; right < s.size(); right++)
{
    while(st.find(s[right]) != st.end())
    {
        st.erase(s[left]);
        left++;
    }

    st.insert(s[right]);

    count = max(count, right - left + 1);
}

return count;
    }
};