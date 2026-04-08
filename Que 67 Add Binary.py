##Given two binary strings a and b, return their sum as a binary string.
class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a=int(a,2)
        b=int(b,2)
        sum=a+b
        ans=bin(sum)[2:]
        return ans
