class Solution {
public:
    int hammingWeight(int n) {
        int res = 0;
        for (int i = 31; i >= 0; i--) {
            res += (n >> i) & 1;
        }
        return res;
    }
};