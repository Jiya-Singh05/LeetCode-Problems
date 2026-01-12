/*Implement a function signFunc(x) that returns:         
1 if x is positive.
-1 if x is negative.
0 if x is equal to 0.
You are given an integer array nums. Let product be the product of all values in the array nums.
Return signFunc(product).*/
int arraySign(int* nums, int numsSize) {
    int a=numsSize,i,neg=0;
    for(i=0;i<a;i++)
    {
      if(nums[i]<0)
      neg++;
      else if(nums[i]==0)
      {
        return 0;
      }
    }
if(neg%2==0)
return 1;
else return -1;
   
}
