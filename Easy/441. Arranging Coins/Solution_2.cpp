class Solution {
public:
    int arrangeCoins(int n) {
        int left = 0, right = n;
        while (left <= right) {
            long pivot = left + (right - left) / 2;
            long coins = pivot * (pivot + 1) / 2;

            if (coins == n || (n > coins && n - coins < pivot + 1)) return pivot;
            else if (coins > n) right = pivot - 1;
            else left = pivot + 1;
        }
        return right;
    }
};