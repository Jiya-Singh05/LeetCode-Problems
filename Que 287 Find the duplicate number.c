/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and using only constant extra space.*/
int comp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}
int findDuplicate(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(nums[0]), comp);
for(int i=0;i<numsSize-1;i++) {
    if(nums[i]==nums[i+1]) return nums[i];
}
return 0;
}
