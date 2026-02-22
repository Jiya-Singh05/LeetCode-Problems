/*Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
You must write an algorithm that runs in O(n) time and without using the division operation.*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *ans=(int*)malloc(sizeof(int)*numsSize);
    long long prod=1;
    int count=0,index=-1;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0){
            count++;
            index=i;
        }
        else prod=prod*nums[i];
    }
    if(count>1){
        for(int i=0;i<numsSize;i++) ans[i]=0;
    }
    else if(count==1){
        for(int i=0;i<numsSize;i++){
            ans[i]=0;
            ans[index]=prod;
        }
    }
    else{
        for(int i=0;i<numsSize;i++) ans[i]=prod/nums[i];
    }
    *returnSize=numsSize;
    return ans;
    return 0;
}
