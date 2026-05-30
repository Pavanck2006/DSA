class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int len= s.size();
        int i=len-2;
/*if (!next_permutation(s.begin(), s.end()))built in function
            return -1;

        long long ans = stoll(s);

        return (ans > INT_MAX) ? -1 : ans;*/
     while(i>=0 && s[i]>=s[i+1])
     { // Find pivot
     i--;
     }
     if(i<0)
     {
     return -1;
     }
     int j= len-1;
     while(s[j]<=s[i]) {
            // Find just larger element
     j--;
     }
     swap(s[j],s[i]);
      reverse(s.begin() + i + 1, s.end());

        long long ans = stoll(s);//convert agin integer

        if (ans > INT_MAX)
            return -1;

        return (int)ans;
    }
};