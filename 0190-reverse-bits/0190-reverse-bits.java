class Solution {
    public int reverseBits(int n) {
        int rev = 0;

    for (int i = 0; i < 32; i++) {
        rev <<= 1;      // make space for next bit
        rev |= (n & 1); // take last bit of n
        n >>= 1;        // shift n right
    }

    return rev;
    }
}