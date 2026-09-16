class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        string result = "";

        while (i >= 0 || j >= 0 || carry) {
            
            int bitA = 0;
            int bitB = 0;

            if (i >= 0)
                bitA = a[i] - '0';

            if (j >= 0)
                bitB = b[j] - '0';

            int sum = bitA + bitB + carry;

            result.push_back('0' + (sum % 2));

            carry = sum / 2;

            i--;
            j--;
        }

        reverse(result.begin(), result.end());

        return result;
    }
};