# The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.

# For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.
# Given an integer num, return its complement.
class Solution:
    def findComplement(self, num: int) -> int:
        a=bin(num)[2:]
        b=list(a)
        for i in range(len(b)):
            if (b[i]=='1'):
                b[i]='0'
            else:
                b[i]='1'
        b=''.join(b)
        return int(b,2)
        
