/*Given an array of integers nums, return the number of good pairs.
A pair (i, j) is called good if nums[i] == nums[j] and i < j.*/
int numIdenticalPairs(int* nums, int numsSize) {
   int i,j,a,pairs=0;
   for(i=0;i<numsSize;i++) { 
    for(j=1+i;j<numsSize;j++) { 
        if(nums[i]==nums[j])
         pairs++;
    }  } 
   return pairs;
}
