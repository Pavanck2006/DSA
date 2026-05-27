#include <cctype>
class Solution {
public:

    bool detectCapitalUse(string word) {
        int countu = 0;
        int countl = 0;

        for(char x : word)
        {
            if(isupper(x))
                countu++;
            else
                countl++;
        }

        // ALL uppercase
        if(countu == word.size())
            return true;

        // ALL lowercase
        if(countl == word.size())
            return true;

        // First letter uppercase, rest lowercase
        if(isupper(word[0]) && countu == 1)
            return true;

        return false;
    }
};