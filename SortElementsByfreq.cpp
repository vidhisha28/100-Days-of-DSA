/* question : Given an array A[] of integers, sort the array according to frequency of elements.
That is elements that have higher frequency come first. If frequencies of two elements are same, then smaller number comes first.*/
#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int,int>&a,const pair<int,int>&b){
    if(a.second==b.second){
        return a.first<b.first;
    }
    return a.second>b.second;
}
void func(int* arr,int n){
    unordered_map<int,int> m;
    for(int i = 0 ;i < n ; i++){
        m[arr[i]]++;
    }
    vector<pair<int,int>> v;
    copy(m.begin(),m.end(),back_inserter(v));
    sort(v.begin(),v.end(),comp);
    
    for(int i = 0 ; i < v.size();i++){
        while(v[i].second--){
            cout<<v[i].first<<" ";
        }
        
    }
    cout<<endl;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        func(arr,n);
    }
	//code
	return 0;
}
