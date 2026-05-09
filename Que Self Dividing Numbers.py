# A self-dividing number is a number that is divisible by every digit it contains.

# For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.
# A self-dividing number is not allowed to contain the digit zero.

# Given two integers left and right, return a list of all the self-dividing numbers in the range [left, right] (both inclusive).
class Solution:
    def selfDividingNumbers(self, left: int, right: int):
        ans=[]
        for i in range(left,right+1):
            temp=i
            valid=1
            while temp>0:
                dig=temp%10
                if dig==0 or i%dig!=0:
                    valid=0
                    break
                temp//=10
            if (valid==1):
                ans.append(i)
        return ans
