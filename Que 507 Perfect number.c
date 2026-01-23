/*A perfect number is a positive integer that is equal to the sum of its positive divisors, excluding the number itself. A divisor of an integer x is an integer that can divide x evenly.
Given an integer n, return true if n is a perfect number, otherwise return false.*/
bool checkPerfectNumber(int num) {
    int i,sum=0;
    if(num<=1)
    return 0;
    else {
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    }
    if(sum==num)
    return 1;
    else
    return 0;
}
