# You are given an integer array nums where the largest integer is unique.

# Determine whether the largest element in the array is at least twice as much as every other number in the array. If it is, return the index of the largest element, or return -1 otherwise.

class Solution:
    def dominantIndex(self, nums: List[int]) -> int:
        maxi=max(nums)
        ans=nums.index(maxi)
        for i in nums:
            if(i!=maxi and maxi<i*2):
                ans=-1
        return ans        
