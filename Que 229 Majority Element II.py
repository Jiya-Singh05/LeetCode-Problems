# Given an integer array of size n, find all elements that appear more than ⌊n / 3⌋ times.
class Solution:
    def majorityElement(self, nums: list[int]) -> list[int]:
        ans=[]
        for i in set(nums):
            if nums.count(i)>len(nums)//3:
                ans.append(i)
        return ans
