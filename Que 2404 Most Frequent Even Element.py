# Given an integer array nums, return the most frequent even element.

# If there is a tie, return the smallest one. If there is no such element, return -1.

class Solution:
    def mostFrequentEven(self, nums: List[int]) -> int:
        a=[x for x in nums if x%2==0]
        if len(a)==0:
            return -1
        maxi=ans=0
        a.sort()
        for i in a:
            if a.count(i)>maxi:
                maxi=a.count(i)
                ans=i
        return ans
