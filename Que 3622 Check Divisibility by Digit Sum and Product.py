# You are given a positive integer n. Determine whether n is divisible by the sum of the following two values:

# The digit sum of n (the sum of its digits).

# The digit product of n (the product of its digits).

# Return true if n is divisible by this sum; otherwise, return false.

class Solution:
    def checkDivisibility(self, n: int) -> bool:
        l=list(map(int,str(n)))
        prod=1
        for i in l:
            prod=prod*i
        if(n%(sum(l)+prod)==0):
            return True
        return False        
