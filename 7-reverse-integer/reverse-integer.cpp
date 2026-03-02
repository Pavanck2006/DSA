class Solution {
public:
    int reverse(int x) {
        int revNum = 0;

        while (x != 0) {
            int dig = x % 10;   // get last digit

            // check for overflow before multiplying by 10
            if (revNum > INT_MAX/10 || revNum < INT_MIN/10) {
                return 0;
            }

            revNum = revNum * 10 + dig; // add digit to reversed number
            x = x / 10; // remove last digit from x
        }

        return revNum;
    }
};