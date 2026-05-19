class Solution:
    def getCommon(self, n1: List[int], n2: List[int]) -> int:
        n1=set(n1)
        n2=set(n2)
        ans=[]
        for i in n1:
            if i in n2:
               ans.append(i) 
        if (ans!=[]):
            return min(ans)      
        return -1        
