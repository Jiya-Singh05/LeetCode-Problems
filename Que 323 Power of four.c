/*Given an integer n, return true if it is a power of four. Otherwise, return false.
An integer n is a power of four, if there exists an integer x such that n == 4x.*/
bool isPowerOfFour(int n) {
    long long prod=1;
    if(n<=0) return 0;
    else if(n==1) return 1;
    else {
        while(prod<n) {
            prod=prod*4;
        }
        if(n==prod) return 1;
        else return 0;
    }
}
