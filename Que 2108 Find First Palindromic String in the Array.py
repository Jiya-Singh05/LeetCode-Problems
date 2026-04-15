# Given an array of strings words, return the first palindromic string in the array. If there is no such string, return an empty string "".

# A string is palindromic if it reads the same forward and backward.

class Solution:
    def firstPalindrome(self, w: List[str]) -> str:
        for i in range (0,len(w)):
            if(w[i][::-1]==w[i]):
                return w[i]
        return ""
             
