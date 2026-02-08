/*You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.*/
int maxProfit(int* prices, int pricesSize) {
  if(pricesSize==0) return 0;
    int pro=0, initial=prices[0],current,diff;
    for(int i=0;i<pricesSize;i++) {
        current=prices[i];
        diff=current-initial;
        if(diff>pro) pro=diff;
        if(current<initial) initial=current; 
}
return pro;
}
