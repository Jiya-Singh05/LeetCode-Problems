/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
Note that you must do this in-place without making a copy of the array.*/
void moveZeroes(int* nums, int numsSize) {
    int a=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]!=0){
            nums[a]=nums[i]; a++;
        }  
    }
    while(a<numsSize){
        nums[a]=0; a++;
    }

}
