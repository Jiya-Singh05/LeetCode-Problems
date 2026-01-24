/*Given an integer n, return true if it is a power of three. Otherwise, return false.
An integer n is a power of three, if there exists an integer x such that n == 3x.*/
bool isPowerOfThree(int n) {
    long long prod=1;
    if(n<=0) return 0;
    else {
        while(prod<n) {
            prod=prod*3;
        }
        if(n==prod || n==1) return 1;
        else return 0;
    }
    
}
