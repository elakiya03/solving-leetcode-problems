class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        sum = 0
        totalSum = 0

        for i in range(len(nums)):
            sum ^= nums[i]

        for i in range(1, len(nums) + 1):
            totalSum ^= i

        return sum ^ totalSum
