/* Write an algorithm to determine if a number n is happy.
A happy number is a number defined by the following process:
Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not. */


bool isHappy(int n) {
    if(n==1 || n==10 || n==7)
    return 1;
    else if(n<10)
    return 0;
    else {
        int rem,sum=0; 
        while(n!=0)
    {
        rem=n%10;
        sum=sum+(rem*rem);
        n=n/10;
    }
     return isHappy(sum);
    }  
}
