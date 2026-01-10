//Given an integer num, reverse num to get reversed1, then reverse reversed1 to get reversed2. Return true if reversed2 equals num. Otherwise return false.
bool isSameAfterReversals(int num) {
    if(num==0)
    return 1;
    else if(num%10==0)
    return 0;
    else 
    return 1;
}
