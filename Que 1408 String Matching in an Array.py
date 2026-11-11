# Given an array of string words, return all strings in words that are a substring of another word. You can return the answer in any order.
class Solution:
    def stringMatching(self, words: list[str]) -> list[str]:
        a=[]
        for i in words:
            for j in words:
                if i!=j and i in j:
                    a.append(i)
        return list(set(a))

        
