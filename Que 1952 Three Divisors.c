/*Given an integer n, return true if n has exactly three positive divisors. Otherwise, return false.
An integer m is a divisor of n if there exists an integer k such that n = k * m.*/

bool isThree(int n) {
    int total=0;
    for(int i=1;i<=n;i++) { if(n%i==0) total++; }
    if(total==3) return 1; else return 0;  }
