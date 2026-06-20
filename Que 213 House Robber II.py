# You are a professional robber planning to rob houses along a street. Each 
# house has a certain amount of money stashed. All houses at this place are arranged in a circle. 
# That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, 
# and it will automatically contact the police if two adjacent houses were broken into on the same night.
# Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.
class Solution:
    def rob(self, nums):
        n=len(nums)
        if n==1:
            return nums[0]
        p1=p2=0
        for i in range(n-1):
            curr=max(p1,p2+nums[i])
            p2=p1
            p1=curr
        ans1=p1

        p1=p2=0
        for i in range(1,n):
            curr=max(p1,p2+nums[i])
            p2=p1
            p1=curr
        ans2=p1
        
        return max(ans1, ans2)
