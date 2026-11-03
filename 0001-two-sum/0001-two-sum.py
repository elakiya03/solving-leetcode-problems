class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map = {}  # dictionary

        for i in range(len(nums)):
            res = target - nums[i]
            if res in map:
                return [map[res], i]
            map[nums[i]] = i
        return []
