#Reverse bits of a given 32 bits signed integer
class Solution:
    def reverseBits(self, n: int) -> int:
        binary1=bin(n)[2:].zfill(32)
        binary2=binary1[::-1]
        return int(binary2,2)
