void solve(vector<string> &ans,string output,int opening,int closing){
    if(opening==0 && closing==0){
        ans.push_back(output);
        return;
    }
    
    if(opening!=0){
        solve(ans,output+'(',opening - 1,closing);
    }
    
    if(closing>opening){
        solve(ans,output+')',opening ,closing-1);
        
    }
    return;
}
vector<string> balancedParantheses(int n)
{
    // Write Your Code here.
    vector<string> ans;
     string output="";
    
    solve(ans,output,n,n);
    return ans;
}

