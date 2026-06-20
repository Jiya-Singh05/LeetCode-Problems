# Given a valid (IPv4) IP address, return a defanged version of that IP address.

# A defanged IP address replaces every period "." with "[.]".
class Solution:
    def defangIPaddr(self, add: str) -> str:
        return add.replace('.','[.]')
        
