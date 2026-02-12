/*You are given an integer array nums.
Return the smallest index i such that the sum of the digits of nums[i] is equal to i.
If no such index exists, return -1.*/
int smallestIndex(int* nums, int numsSize) {
    for(int i=0;i<numsSize;i++){
        int dig=0;
        int j=nums[i];
        while(j!=0) {
            dig=dig+j%10;
            j=j/10;
        }
        if(dig==i){
            return i;
        }
    }
    return -1;
}
