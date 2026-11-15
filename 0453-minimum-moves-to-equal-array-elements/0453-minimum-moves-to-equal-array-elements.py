class Solution:
    def minMoves(self, nums: list[int]) -> int:
        sums = sum(nums)
        mins = min(nums)

        return sums - (len(nums) * mins)
