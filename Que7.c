//reverse an integer
int reverse(int x){
int rem,rev=0;
while(x!=0) {
    rem=x%10;
      if (rev>214748364 || (rev==214748364 && rem>7))
            return 0;
        if (rev<-214748364  || (rev==-214748364 && rem<-8))
            return 0;
             rev=rev*10+rem;
    x=x/10;
}
return rev;

}
