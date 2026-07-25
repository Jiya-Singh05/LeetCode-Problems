# You are given a positive integer n.

# Return the maximum product of any two digits in n.

# Note: You may use the same digit twice if it appears more than once in n.
class Solution:
    def maxProduct(self, n: int) -> int:
       n=list(map(int, str(n)))
       n.sort()
       prod=n[len(n)-2]*n[len(n)-1]
       return prod

