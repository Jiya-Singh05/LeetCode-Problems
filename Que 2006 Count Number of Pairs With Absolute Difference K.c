/*Given an integer array nums and an integer k, return the number of pairs (i, j) where i < j such that |nums[i] - nums[j]| == k.
The value of |x| is defined as:
x if x >= 0.
-x if x < 0.*/
int countKDifference(int* nums, int numsSize, int k) {
    int i,j,count=0;
    for(i=0;i<numsSize;i++) { int diff=0;
        for(j=i+1;j<numsSize;j++) { diff=nums[i]-nums[j];
            if(diff==-k || diff==k) count++; }
    }
    return count;
}
