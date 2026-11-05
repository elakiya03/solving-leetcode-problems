class Solution {
public:
    int reverseBits(int n) {
        int res = 0;

        for (int i = 0; i < 32; i++) {
            res <<= 1;      // make space for next bit
            res |= (n & 1); // take last bit of n
            n >>= 1;        // shift n right
        }

        return res;
    }
};