class Solution:
    def romannumeral(self, c) -> int:
        if c == "I":
            return 1
        elif c == "V":
            return 5
        elif c == "X":
            return 10
        elif c == "L":
            return 50
        elif c == "C":
            return 100
        elif c == "D":
            return 500
        elif c == "M":
            return 1000
        else:
            return 0

    def romanToInt(self, s: str) -> int:
        n = 0
        for i in range(len(s)):
            if i + 1 < len(s) and self.romannumeral(s[i + 1]) > self.romannumeral(s[i]):
                n -= self.romannumeral(s[i])
            else:
                n += self.romannumeral(s[i])
        return n
