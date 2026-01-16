/*Given a positive integer num, return the number of positive integers less than or equal to num whose digit sums are even.
The digit sum of a positive integer is the sum of all its digits.*/
int countEven(int num) {
    int a,i,sum=0,total=0,rem;
    for(i=1;i<=num;i++)
    {
       int j=i;
       sum=0;
        while(j!=0) {
        rem=j%10;
        sum=sum+rem;
        j=j/10;
        }
        if(sum%2==0)
        total++;
    }
    return total;
}
