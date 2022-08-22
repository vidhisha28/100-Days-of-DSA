#include <bits/stdc++.h>
using namespace std;
int ans=0;
int helper(int left,int right){
    if(left==0&&right==0){
        ans++;
    }
    if(left>right){
        return 0;
    }
    if(left>0){
        helper(left-1,right);
    }
    if(right>0){
         helper(left,right-1);
    }
    return ans;
}
int validP(int n){
    return helper(n/2,n/2);
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
  //  vector<string> s;
   // s=validP(n);
   cout<<validP(n);
   //n is only even
    return 0;
}
