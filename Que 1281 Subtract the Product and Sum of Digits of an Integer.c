/*Given an integer number n, return the difference
between the product of its digits and the sum of its digits.*/
int subtractProductAndSum(int n) {
    int sum=0,product=1,rem,a=n,result;
    while(n!=0) {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
        while(a!=0) {
        rem=a%10;
        product=product*rem;
        a=a/10;
    }
    return product-sum;
}
