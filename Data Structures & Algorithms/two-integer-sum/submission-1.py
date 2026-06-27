class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for fIndex in range(len(nums)):
            for sIndex in range(len(nums)-fIndex-1):
                sIndex += fIndex + 1
                if nums[fIndex]+ nums[sIndex] == target:
                    return [fIndex, sIndex]
        