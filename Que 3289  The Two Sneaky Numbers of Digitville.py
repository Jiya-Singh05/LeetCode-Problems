# In the town of Digitville, there was a list of numbers called nums containing integers from 0 to n - 1. Each number was supposed to appear exactly once in the list, however, two mischievous numbers sneaked in an additional time, making the list longer than usual.

# As the town detective, your task is to find these two sneaky numbers. Return an array of size two containing the two numbers (in any order), so peace can return to Digitville.

class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        ans=[]
        for i in nums:
            if nums.count(i)>=2:
                ans.append(i)
        ans=list(set(ans))
        return ans        
