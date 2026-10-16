# Given a 0-indexed integer array nums of length n and an integer k, return the number of pairs
# (i, j) where 0 <= i < j < n, such that nums[i] == nums[j] and (i * j) is divisible by k.
class Solution:
    def countPairs(self, nums: list[int], k: int) -> int:
        ans=0
        for i in range(len(nums)):
            for j in range(i+1,len(nums)):
                if (nums[i]==nums[j] and (i*j)%k==0):
                    ans=ans+1
        return ans            
