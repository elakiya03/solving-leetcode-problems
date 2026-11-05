class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n - 1)) == 0 && // power of 2
               (n & 0x55555555);              // even bit position check
    }

}
;