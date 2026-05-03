# Given the array nums consisting of 2n elements in the form [x1,x2,...,xn,y1,y2,...,yn].

# Return the array in the form [x1,y1,x2,y2,...,xn,yn].

class Solution:
    def shuffle(self, nums: List[int], n: int) -> List[int]:
     new=[]
     for i in range(len(nums)//2):
        a=nums[i]
        b=nums[i+n]
        new.append(a)
        new.append(b)
     return new    
