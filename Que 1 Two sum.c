/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, 
and you may not use the same element twice.
You can return the answer in any order.*/
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
  int a=numsSize;
  int* ans=(int*)malloc(2*sizeof(int));
  *returnSize=2;
  for(int i=0;i<a;i++)  {
    for(int j=i+1; j<=a-1;j++) {
        if(nums[i]+nums[j]==target) { ans[0]=i; ans[1]=j; return ans;
        } } }
  return NULL; }
