# You are given an integer array nums. You may rearrange the elements in any order.

# The alternating score of an array arr is defined as:

# score = arr[0]2 - arr[1]2 + arr[2]2 - arr[3]2 + ...
# Return an integer denoting the maximum possible alternating score of nums after rearranging its elements.

class Solution:
    def maxAlternatingSum(self, nums: List[int]) -> int:
        l=[]
        for i in nums:
            l.append(abs(i))
        l.sort()
        ans=[]
        for i in range(len(l)//2):
            ans.append(l[i]**2)
        for i in range(len(l)//2,len(l)):
            ans.append(-(l[i]**2))     
        return -(sum(ans))    
