/**/
int findGCD(int* nums, int numsSize) {
    int  min=nums[0],max=nums[0],a=numsSize,ans;
    for(int i=0;i<a;i++) {
      if(nums[i]<min) min=nums[i];
      if(nums[i]>max) max=nums[i];
    }
    for(int i=1;i<=max;i++) {
        if(min%i==0 && max%i==0) ans=i;
    }
    return ans;
}
