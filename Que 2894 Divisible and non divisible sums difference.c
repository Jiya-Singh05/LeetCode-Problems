/*You are given positive integers n and m.
Define two integers as follows:
num1: The sum of all integers in the range [1, n] (both inclusive) that are not divisible by m.
num2: The sum of all integers in the range [1, n] (both inclusive) that are divisible by m.
Return the integer num1 - num2.*/

int differenceOfSums(int n, int m) {
    int yes=0, no=0, i;
    for(i=1;i<=n;i++)
    {
if(i%m==0)
yes=yes+i;
else
no=no+i;
    }
    return (no-yes) ;
   
}
