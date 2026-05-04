#Given a binary array nums, return the maximum number of consecutive 1's in the array.
class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count=0
        maxcount=0
        for i in nums:
            if i==1:
                count=count+1
                maxcount=max(maxcount,count)
            else:
                count=0
        return maxcount
