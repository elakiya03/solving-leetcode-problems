class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        result = 0

        for i in range(32):
            sum = 0
            for num in nums:
                if num & (1 << i):
                    sum += 1
            if sum % 3 != 0:
                result |= 1 << i
        
        # Handle negative numbers
        if result >= (1 << 31):
            result -= (1 << 32)
        return result
