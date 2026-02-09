/*Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.
You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 int cmp(const void* a, const void* b){
    return (*(int*)a-*(int*)b);
 }
int* findDuplicates(int* nums, int numsSize, int* returnSize) {
    int a=numsSize,total=0;
    int* ans=(int*)malloc((a/2)*sizeof(int));
    qsort(nums,numsSize,sizeof(int),cmp);

    for(int i=0;i<a-1;i++) {
            if(nums[i]==nums[i+1]) { ans[total]=nums[i]; total++; }
    }
    *returnSize=total;
    return ans;
}
