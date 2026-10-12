# You are given a 1-indexed integer array nums of length n.

# An element nums[i] of nums is called special if i divides n, i.e. n % i == 0.

# Return the sum of the squares of all special elements of nums.
class Solution:
    def sumOfSquares(self, nums: List[int]) -> int:
        ans=0
        for i in range(len(nums)):
            if(len(nums)%(i+1)==0):
                ans=ans+(nums[i]**2)
        return ans        
