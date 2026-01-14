/*You are given a 0-indexed integer array nums of size 3 which can form the sides of a triangle.
A triangle is called equilateral if it has all sides of equal length.
A triangle is called isosceles if it has exactly two sides of equal length.
A triangle is called scalene if all its sides are of different lengths.
Return a string representing the type of triangle that can be formed or "none" if it cannot form a triangle.*/
char* triangleType(int* nums, int numsSize) {
   int a=nums[0],b=nums[1],c=nums[2];
   int sum1=a+b;
   int sum2=a+c;
   int sum3=b+c;

   if(a+b>c && a+c>b && b+c>a) {
   if(a==b && b==c)
 return "equilateral";
  else if(a==b ||b==c || c==a)
  return"isosceles";
   else
 return "scalene";
  
   }
   else
  return "none";
   
}
