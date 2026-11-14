class Solution:
    def findComplement(self, num: int) -> int:
        binary = bin(num)[2:]
        complement = ""

        for bit in binary:
            complement += '1' if bit == '0' else '0'

        return int(complement, 2)