/*Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).*/
int maxProduct(int* nums, int numsSize) {
    int i,j,ans=0;
    for(i=0;i<numsSize;i++) {
        for(j=i+1;j<numsSize;j++) {
       if((nums[i]-1)*(nums[j]-1)>ans)
       ans=(nums[i]-1)*(nums[j]-1);
        }
    }
    return ans;
}
