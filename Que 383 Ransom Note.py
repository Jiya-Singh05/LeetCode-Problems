# Given two strings ransomNote and magazine, return true if
# ransomNote can be constructed by using the letters from magazine and false otherwise.
# Each letter in magazine can only be used once in ransomNote.
class Solution:
    def canConstruct(self, ran: str, mag: str) -> bool:
        for i in ran:
            if i not in mag:
                return False
            mag=mag.replace(i,"",1)
        return True
