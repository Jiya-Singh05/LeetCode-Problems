bool isPalindrome(int x) {
    int a=x,rem,rev=0;
   
    if(x<0)
    return 0;
    else if(x==0)
    return 1;
    else
    {
        while(x!=0)
        {
            rem=x%10;
             if (rev>214748364 || (rev==214748364 && rem>7))
            return 0;
        if (rev<-214748364  || (rev==-214748364 && rem<-8))
            return 0;
            rev=rev*10+rem;
            x=x/10;
        }
        if(a==rev)
        return 1;
        else
        return 0;
    }
}
