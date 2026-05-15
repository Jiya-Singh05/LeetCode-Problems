# You are given an integer array nums. We consider an array good if it is a permutation of an array base[n].

# base[n] = [1, 2, ..., n - 1, n, n] (in other words, it is an array of length n + 1 which contains 
# 1 to n - 1 exactly once, plus two occurrences of n). For example, base[1] = [1, 1] and base[3] = [1, 2, 3, 3].

# Return true if the given array is good, otherwise return false.

# Note: A permutation of integers represents an arrangement of these numbers.
class Solution:
    def isGood(self, nums: List[int]) -> bool:
        nums.sort()
        for i in range (1,(max(nums))):
            if (nums.count(i)!=1):
                return False   
        if(nums.count(max(nums))==2):
            return True
        return False        
                  
