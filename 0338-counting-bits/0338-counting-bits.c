/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int n, int* returnSize) {
    int* dp = (int*)malloc((n + 1)* sizeof(int));

    dp[0] = 0;

    for (int i = 1; i < n + 1; i++) {
        dp[i] = dp[i / 2] + (i % 2);
    }

    *returnSize = n + 1;
    return dp;
}