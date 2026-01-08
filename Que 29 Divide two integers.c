int divide(int dividend, int divisor) {
    int quo;
    if(divisor==0)
    return 0;
    else
    {
         if(dividend>= -2147483648 && divisor<= 2147483647)
        {
           if ( dividend==-2147483648 && divisor==-1)
           return 2147483647;
            else
            {
                 quo=dividend/divisor;
                   return quo;
            }
        }
        else
        return 0;
    }
}
