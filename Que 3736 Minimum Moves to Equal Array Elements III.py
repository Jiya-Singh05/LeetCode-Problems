# You are given an integer array nums.

# In one move, you may increase the value of any single element nums[i] by 1.

# Return the minimum total number of moves required so that all elements in nums become equal.
class Solution:
    def minMoves(self, nums: List[int]) -> int:
        a=max(nums)
        ans=0
        for i in nums:
            while(i<a):
                i=i+1
                ans=ans+1
        return ans        
