class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums.sort()
        i=0
        j=1
        while i<len(nums) and j<len(nums):
            if nums[i]==nums[j]:
                i=j+1
                j+=2 
            else:
                return nums[i]
            
        return nums[-1]
