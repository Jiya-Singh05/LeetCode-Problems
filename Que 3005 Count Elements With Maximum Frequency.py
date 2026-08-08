# You are given an array nums consisting of positive integers.

# Return the total frequencies of elements in nums such that those elements all have the maximum frequency.

# The frequency of an element is the number of occurrences of that element in the array.
class Solution:
    def maxFrequencyElements(self, nums: List[int]) -> int:
        maxi=0
        for i in nums:
            if nums.count(i)>maxi:
                maxi=nums.count(i)
        count=0
        for i in nums:
            if nums.count(i)==maxi:
                count=count+1
        return count
