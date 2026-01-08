int countPrimes(int n) {
     if (n<=2)
    return 0;
    int prime[n], sum=0, i, j;
    for (i=0; i<n; i++){
        prime[i] = 1;
    }
    prime[0]=prime[1]=0;
    for (i=2; i*i<n; i++) {
        if (prime[i]!=0) {
            for (j=i*i; j<n; j=j+i)
                prime[j] = 0;
        }
    }
    for (i=2; i<n; i++) {
        if (prime[i]!=0)
            sum=sum+1;
    }

    return sum;
}
