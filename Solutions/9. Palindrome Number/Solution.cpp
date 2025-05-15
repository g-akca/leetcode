class Solution {
public:
    bool isPalindrome(int x) {
        long y = 0;
        int x0 = x;
        while (x > 0) {
            y = (y * 10) + (x % 10);
            x /= 10;
        }

        return x0 == y;
    }
};