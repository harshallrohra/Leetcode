class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        mp = {}

        for i in range (len(nums)):
            complement = target - nums[i]

            if complement in mp :
                return [mp[complement] , i]

            mp[nums[i]]=i
        