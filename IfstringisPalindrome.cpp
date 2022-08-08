//ignore all spaces and special characters and change
// uppercase characters to lowercase
#include<bits/stdc++.h>
void tolower(string &s){
    
    for(int i = 0 ; i < s.length() ; i++){
        char ch = s[i];
        if(ch>='A' && ch<='Z'){
            ch=ch-('A'-'a');
            s[i]=ch;
        }
    }
}
string reverse(string s){
    for(int i = 0 ,j = s.length()-1 ;i < j; i++ , j--){
        char temp = s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    return s;
}
bool checkPalindrome(string s)
{
    // Write your code here.
    tolower(s);
    string reversed = reverse(s);
    int i=0,j = 0;
    int n = s.length();
    while(i < n && j < n){
        if(isalnum(s[i])==0){
            i++;
        }
        else if(isalnum(reversed[j])==0){
            j++;
        }
       else if(reversed[j]==s[i]){
           i++;
           j++;
       }
        else{
            return false;
        }
    }
    return true;
}
