/*Given an integer array nums, find the subarray with the largest sum, and return its sum.*/
int maxSubArray(int* nums, int numsSize) {
    int sum=nums[0], max=nums[0];
    for (int i=1;i<numsSize;i++) {
        if (sum+nums[i]>nums[i]) sum=sum+nums[i];
        else sum=nums[i];
        if (sum>max) max=sum;
    }
    return max;
}
