/*Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.*/
int missingNumber(int* nums, int numsSize) {
    int a=numsSize,i,sum=0,real=(a*(a+1))/2;
    for(i=0;i<a;i++) {
        sum=sum+nums[i];
    }
    int b=real-sum;
    return b;
}
