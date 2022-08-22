int index(int ele ,vector<int>nums){
  int j;
    for(j=0;j<nums.size();j++){
        if(nums[j]==ele){
            return j;
        }
    }
}
//returns count and stores indexes of subarrays in output vector
int countS(vector<int>nums,int k)
{
    int n = nums.size();
    unordered_map<int,int> freq;
    int sum=0,count=0;
    freq[0]=1;
    vector<int> output ;
    for(int i= 0 ; i < n ; i++){
        sum+=nums[i];
        if(freq[sum-k]>0){
            count+=freq[sum-k];
            output.push_back(index(sum-k,nums)+1);
            ouput.push_back(index(sum,nums));
            
        }
        freq[sum]++;
        
    }
    return count;
}
