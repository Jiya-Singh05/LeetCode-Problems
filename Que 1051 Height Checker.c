/*A school is trying to take an annual photo of all the students. The students are asked to stand in a single file line in non-decreasing order by height.
Let this ordering be represented by the integer array expected where expected[i] is the expected height of the ith student in line.
You are given an integer array height representing the current order that the students are standing in. Each heights[i] is the height of the ith student in line (0-indexed).
Return the number of indices where heights[i] != expected[i].*/
int heightChecker(int* heights, int heightsSize) {
    int a=heightsSize,total=0,arr[a],temp;
    for(int i=0;i<a;i++) {
        arr[i]=heights[i];
    }

      for(int i=0;i<a-1;i++) {
        for(int j=0;j<a-1-i;j++) {
            if(arr[j]>arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for(int i=0;i<a;i++) {
        if (arr[i]!=heights[i]) total++;
    }
    return total;
}
