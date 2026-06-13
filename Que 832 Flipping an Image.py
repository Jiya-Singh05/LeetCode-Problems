# Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

# To flip an image horizontally means that each row of the image is reversed.

# For example, flipping [1,1,0] horizontally results in [0,1,1].
# To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

# For example, inverting [0,1,1] results in [1,0,0].
class Solution:
    def flipAndInvertImage(self, img: List[List[int]]) -> List[List[int]]:
        ans=[]
        for i in img:
            rev=i[::-1]
            for j in range(len(rev)):
                if rev[j]==1:
                    rev[j]=0
                else:
                    rev[j]=1
            ans.append(rev)
        return ans

        
