# A sentence is a list of words that are separated by a single space with no leading or trailing spaces.

# You are given an array of strings sentences, where each sentences[i] represents a single sentence.
# Return the maximum number of words that appear in a single sentence.

 
class Solution:
    def mostWordsFound(self, s: List[str]) -> int:
        maxi=0
        for i in range (len(s)):
            if(s[i].count(" ")>maxi):
                maxi=s[i].count(" ")
        return maxi+1        
