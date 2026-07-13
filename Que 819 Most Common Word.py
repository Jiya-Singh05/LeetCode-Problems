# Given a string paragraph and a string array of the banned words banned, return the most frequent word that is not banned. It is guaranteed there is at least one word that is not banned, and that the answer is unique.

# The words in paragraph are case-insensitive and the answer should be returned in lowercase.

# Note that words can not contain punctuation symbols.
class Solution:
    def mostCommonWord(self, para: str, ban: List[str]) -> str:
        for ch in ",.!?;'":
            para=para.replace(ch," ")
        maxi=0    
        a=para.lower().split()
        for i in a:
            if i in ban:
                continue
            c=a.count(i)
            if c>maxi:
                maxi=c
                b=i
        return b
