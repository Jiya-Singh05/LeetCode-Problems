/*Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. 
Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.
Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.
The tests are generated such that there is exactly one solution. You may not use the same element twice.
Your solution must use only constant extra space.*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
  int cmp(const void *a,const void *b) {
    return (*(int*)a-*(int*)b);
}
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
  int a=numsSize,i=0,j=a-1;
  int* ans=(int*)malloc(2*sizeof(int));
   *returnSize=2;
qsort(nums,numsSize,sizeof(int),cmp);
 while(i<j) {
        if(nums[i]+nums[j]==target) {
            ans[0]=i+1;
            ans[1]=j+1;
            return ans;
        }
    else if(nums[i]+nums[j]<target) i++ ;
    else j-- ;
  }
  return NULL;
}
