class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        left = 0
        right = len(nums) - 1
        k = len(nums) - 1

        # Create the list with the required size first
        res = [0] * len(nums)
        
        while left <= right:
            l = nums[left] ** 2
            r = nums[right] ** 2
            if l < r:
                res[k] = r
                right -= 1
            else:
                res[k] = l
                left += 1
            k -= 1
        return res
