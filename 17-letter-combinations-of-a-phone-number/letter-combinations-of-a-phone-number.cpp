class Solution {
public:
    void solve(int index, string digits, vector<string> &ans, string &temp, vector<string> &map)
    {
        if(index == digits.size())
        {
            ans.push_back(temp);
            return;
        }

        string letters = map[digits[index] - '0'];

        for(int i = 0; i < letters.size(); i++)
        {
            temp.push_back(letters[i]);
            solve(index + 1, digits, ans, temp, map);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if(digits.empty())
            return ans;

        vector<string> map = {
            "", "", "abc", "def", "ghi",
            "jkl", "mno", "pqrs", "tuv", "wxyz"
        };

        string temp = "";

        solve(0, digits, ans, temp, map);

        return ans;
    }
};