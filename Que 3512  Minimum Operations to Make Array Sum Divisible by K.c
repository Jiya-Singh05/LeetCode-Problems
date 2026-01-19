/*You are given an integer array nums and an integer k. You can perform the following operation any number of times:
Select an index i and replace nums[i] with nums[i] - 1.
Return the minimum number of operations required to make the sum of the array divisible by k.*/
int minOperations(int* nums, int numsSize, int k) {
    int a,i,sum=0;
    for(i=0;i<numsSize;i++)
    {
        sum=sum+nums[i];
    }
    return (sum%k);
}
