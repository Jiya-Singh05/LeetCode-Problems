#Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
class Solution:
    def thirdMax(self, n: List[int]) -> int:
        n=set(n)
        a=max(n)
        if(len(n)<3):
            return a
        n.remove(a)  
        a=max(n)
        n.remove(a)
        return max(n)  
