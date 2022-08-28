//storing ans in a vector and then printing
#include <bits/stdc++.h>
using namespace std;
//vector<string> ans;
void print(int num , string output , string *options,vector<string> &ans){
    if(num==0){
       // cout<<output<<endl;
       ans.push_back(output);
       return ;
    }
   // print(num/10,output,)
    int smallint = num%10;
    string s = options[smallint];
    for(int i = 0 ;i < s.length() ; i++){
        print(num/10,s[i]+output,options,ans);
    }
    
}
int main() {
    // Write C++ code here
    int num;
    cin>>num;
     string output = "";
    string options[]  ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
    vector<string> ans;
    print(num,output,options,ans);
    for(int i = 0 ; i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
    

    return 0;
}
