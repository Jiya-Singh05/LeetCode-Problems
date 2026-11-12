# You are given an array of integers nums. Return the length of the longest subarray of nums which is either strictly increasing or strictly decreasing.
class Solution:
    def longestMonotonicSubarray(self, nums: List[int]) -> int:
        ans=1
        for i in range(len(nums)):
            count=1
            for j in range(i+1,len(nums)):
                if nums[j]>nums[j-1]:
                    count=count+1
                else:
                    break
            ans=max(ans,count)

        for i in range(len(nums)):
            count=1
            for j in range(i+1,len(nums)):
                if nums[j]<nums[j-1]:
                    count=count+1
                else:
                    break
            ans=max(ans,count)
        return ans
