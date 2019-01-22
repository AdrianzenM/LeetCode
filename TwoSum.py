#Python Solution intended to perform same steps as CPP solution
class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for x in range(len(nums)):
            y = x + 1
            Range = len(nums)
            if y < Range:
                for y in range(y,len(nums)):
                     if nums[x] + nums[y] == target:
                            return [x,y]
