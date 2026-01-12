/*Given an integer array arr, return true if there are three consecutive odd numbers in the array. Otherwise, return false.*/
bool threeConsecutiveOdds(int* arr, int arrSize) {
    int a=arrSize, yes=0 ,i;
    if(a>3) {
    for(i=0;i<a-2;i++)
    {
        if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0)
        yes=1;
    } }
    else if(a==3) {
         if(arr[0]%2!=0 && arr[1]%2!=0 && arr[2]%2!=0)
        yes=1;
    }
    else {
        yes=0;
    }
    
    return yes;
}
