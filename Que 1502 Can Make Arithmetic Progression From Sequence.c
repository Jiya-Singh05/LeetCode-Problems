/*A sequence of numbers is called an arithmetic progression if the difference between any two consecutive elements is the same.
Given an array of numbers arr, return true if the array can be rearranged to form an arithmetic progression. Otherwise, return false.*/
bool canMakeArithmeticProgression(int* arr, int arrSize) {
       int n=arrSize;
       for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
 }
 int diff=arr[1]-arr[0];
 for(int i=1;i<n-1;i++) {
    if(arr[i+1]-arr[i]!=diff)
    return 0;
   
 }
   return 1;
}
