/*You are given a positive integer array nums.
The element sum is the sum of all the elements in nums.
The digit sum is the sum of all the digits (not necessarily distinct) that appear in nums.
Return the absolute difference between the element sum and digit sum of nums.
Note that the absolute difference between two integers x and y is defined as |x - y|.*/
int differenceOfSum(int* nums, int numsSize) {
    int a=numsSize, sum1=0, sum2=0,rem,i,b;
    for(i=0;i<a;i++) {
        sum1=sum1+nums[i];
        if(nums[i]<10)
        sum2=sum2+nums[i];
        else
        {
            while(nums[i]!=0)
            {
                rem=nums[i]%10;
                sum2=sum2+rem;
                nums[i]=nums[i]/10;
            }
        }
    }
    return sum1-sum2;

}
