//Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n.
int smallestEvenMultiple(int n) {
    int a,i;
   if(n%2==0)
   return n;

   else
   a=2*n;
   return a;
}
