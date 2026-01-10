//Given an integer num, return the number of digits in num that divide num.
//An integer val divides nums if nums % val == 0.
int countDigits(int num) {
    int total=0,rem, a;
    a=num;
    while  (num!=0)
    {
rem=num%10;
if(a%rem==0)
{
    total=total+1;
}
num=num/10;
    }
    return total;
}
