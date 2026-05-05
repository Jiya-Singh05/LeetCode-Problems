# Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is,
# for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

# Return the answer in an array.
class Solution:
    def smallerNumbersThanCurrent(self, n: List[int]) -> List[int]:
      ans=[]
      for i in range (len(n)):
        count=0
        for j in range(len(n)):
            if(j!=i and n[j]<n[i]):
                count=count+1
        ans.append(count)
      return ans            
