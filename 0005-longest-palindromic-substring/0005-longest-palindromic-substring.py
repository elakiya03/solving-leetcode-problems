class Solution:
    def longestPalindrome(self, s: str) -> str:
        n = len(s)
        dp = [[0] * n for _ in range(n)]
        start = 0
        maxl = 1

        # length 1 palindrome
        for i in range(n):
            dp[i][i] = 1

        # length 2 palindrome
        for i in range(n - 1):
            if s[i] == s[i + 1]:
                dp[i][i + 1] = 1
                if maxl == 1:
                    maxl = 2
                    start = i

        # length 3 and more palindrome
        for k in range(3, n + 1):
            for i in range(n - k + 1):
                j = i + k - 1

                if s[i] == s[j] and dp[i + 1][j - 1]:
                    dp[i][j] = 1
                    if k > maxl:
                        maxl = k
                        start = i

        return s[start : start + maxl]
