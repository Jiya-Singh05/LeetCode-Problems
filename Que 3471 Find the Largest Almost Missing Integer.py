# You are given an integer array nums and an integer k.

# An integer x is almost missing from nums if x appears in exactly one subarray of size k within nums.

# Return the largest almost missing integer from nums. If no such integer exists, return -1.

# A subarray is a contiguous sequence of elements within an array.

class Solution:
    def largestInteger(self, nums: List[int], k: int) -> int:
        if k==1:
            a=[]
            for i in nums:
                if nums.count(i)==1:
                    a.append(i)
            if len(a)>0:
                return max(a)
            return -1
        elif k==len(nums):
            return max(nums)
        elif 1<k<len(nums):
            if nums.count(nums[0])==1 and nums.count(nums[len(nums)-1])==1:
                return max(nums[0],nums[len(nums)-1])
            elif nums.count(nums[0])==1:
                return nums[0]
            elif nums.count(nums[len(nums)-1])==1:
                return nums[len(nums)-1]
        return -1
