# Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
class Solution:
    def sortedSquares(self, n: List[int]) -> List[int]:
        for i in range (len(n)):
            n[i]=n[i]**2
        n.sort() 
        return n   
