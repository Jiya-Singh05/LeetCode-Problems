# You are given a 0-indexed array of distinct integers nums.

# There is an element in nums that has the lowest value and an element that has the highest value. We call them the minimum and maximum respectively. Your goal is to remove both these elements from the array.

# A deletion is defined as either removing an element from the front of the array or removing an element from the back of the array.

# Return the minimum number of deletions it would take to remove both the minimum and maximum element from the array.

class Solution:
    def minimumDeletions(self, nums: List[int]) -> int:
        s1=s2=s3=0
        a=max(nums)
        b=min(nums)
        s1=max(nums.index(a),nums.index(b))+1
        s2=len(nums)-min(nums.index(a),nums.index(b))
        s3=min(nums.index(a),nums.index(b))+1+len(nums)-max(nums.index(a),nums.index(b))
        return min(s1,s2,s3)
