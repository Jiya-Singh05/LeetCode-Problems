/*You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank.
Return the wealth that the richest customer has.
A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.*/
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int arr[accountsSize],sum=0;
    for(int i=0;i<accountsSize;i++) {
        sum=0;
        for(int j=0;j<accountsColSize[i];j++){
            sum=sum+accounts[i][j];
        }
        arr[i]=sum;
    }
    int max=0;
    for(int i=0;i<accountsSize;i++) {
        if(max<arr[i]) max=arr[i];
    }
    return max;
}
