class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        if len(nums) < 2:
            return len(nums)
        
        nums.sort()
        cnt = 1
        res = 1
        
        for i in range(1, len(nums)):
            if nums[i] != nums[i-1]:
                if nums[i] - nums[i-1] == 1:
                    cnt += 1
                else:
                    res = max(res, cnt)
                    cnt = 1
        
        return max(res, cnt)
