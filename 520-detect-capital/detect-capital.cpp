#include <cctype>
class Solution {
public:

    bool detectCapitalUse(string word) {
        int n=word.size()-1;
        int countu=0;
        int countl=0;
        for(char x: word)
        {
          if(isupper(x))
             countu++;
             else
             countl++;
        }
        if(isupper(word[0]) && countu==1)
        return true; // First letter uppercase, rest lowercase
        if(countu==word.size()|| countl==word.size())
        return true;
        return false;//fffffffffffffffF occurs only like this string
        
    }
};