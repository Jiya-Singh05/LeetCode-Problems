# You are given a 0-indexed integer array nums of size n.

# Define two arrays leftSum and rightSum where:

# leftSum[i] is the sum of elements to the left of the index i in the array nums. If there is no such element, leftSum[i] = 0.
# rightSum[i] is the sum of elements to the right of the index i in the array nums. If there is no such element, rightSum[i] = 0.
# Return an integer array answer of size n where answer[i] = |leftSum[i] - rightSum[i]|.
class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        l=[]
        r=[]
        ans=[]
        for i in range(len(nums)):
            lsum=sum(nums[:i])
            rsum=sum(nums[i+1:])
            l.append(lsum)
            r.append(rsum)
        for i in range(len(nums)):
            ans.append(abs(l[i]-r[i]))
        return ans        
