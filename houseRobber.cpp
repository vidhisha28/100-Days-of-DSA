class Solution {
    int helper(vector<int>& nums , int ind , vector<int>& dp){
        
        //base case
        if(ind >= nums.size())
            return 0;
        
        if(dp[ind] != -1)
            return dp[ind];
        
        //Choice 1 : Rob current house
        int money1 = nums[ind] + helper(nums , ind+2 , dp);
        
        //Choice 2: Don't rob current house
        int money2 = helper(nums , ind+1 , dp);
        
        return dp[ind] = max(money1 , money2);
    }
    
public:
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() , -1);
        return helper(nums,0,dp);
    }
};