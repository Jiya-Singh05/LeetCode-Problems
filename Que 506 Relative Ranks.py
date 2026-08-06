# You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.

# The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:

# The 1st place athlete's rank is "Gold Medal".
# The 2nd place athlete's rank is "Silver Medal".
# The 3rd place athlete's rank is "Bronze Medal".
# For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
# Return an array answer of size n where answer[i] is the rank of the ith athlete.

class Solution:
    def findRelativeRanks(self,score:List[int])->List[str]:
        a=sorted(score,reverse=True)
        rank={}
        c=1
        for i in a:
            if c==1:
                rank[i]="Gold Medal"
            elif c==2:
                rank[i]="Silver Medal"
            elif c==3:
                rank[i]="Bronze Medal"
            else:
                rank[i]=str(c)
            c=c+1
        ans=[]
        for i in score:
            ans.append(rank[i])
        return ans
