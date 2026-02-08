/*Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.*/
int cmp(const void* a, const void* b){
    return (*(int*)a-*(int*)b);
}
bool containsDuplicate(int* nums, int numsSize) {
      qsort(nums,numsSize,sizeof(int),cmp);
      int i;
      for(i=0;i<numsSize-1;i++) {
        if(nums[i+1]==nums[i])
        return 1;
      }
      return 0;
}
