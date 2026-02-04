/*You are given an integer n.

Define its mirror distance as: abs(n - reverse(n))​​​​​​​ where reverse(n) is the integer formed by reversing the digits of n.

Return an integer denoting the mirror distance of n​​​​​​​.

abs(x) denotes the absolute value of x.*/
int mirrorDistance(int n) {
    int rev=0,rem,a=n;
    while(n!=0) {
        rem=n%10;
        rev=rem+rev*10;
        n=n/10;
    }
    int ans=rev-a;
    if(ans>=0)
    return ans;
    else {
        ans=-ans;
        return ans;
    }
}
