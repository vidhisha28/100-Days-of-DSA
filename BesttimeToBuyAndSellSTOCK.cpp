#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int maxprofit = 0;
    int profit = 0 ;
    int n =prices.size() ;
   int l=0,r=1;
   while(r<n){
       
        if(prices[l]<prices[r]){
            profit=prices[r]-prices[l];
             maxprofit = max(maxprofit,profit);
           // r++;
        }
        else{
            l=r;
        }
       r++;
    }
    