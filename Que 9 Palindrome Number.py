#Given an integer x, return true if x is a palindrome, and false otherwise.
class Solution:
    def isPalindrome(self, x: int) -> bool:
        temp=str(x)
        if(temp==temp[::-1]):
            return True
        return False    
