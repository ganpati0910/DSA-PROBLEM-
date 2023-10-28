class Solution {
public:
    int solve(vector<int>&nums,int i,int target,vector<vector<int>>&dp){
        if(target==0){
            return 0;
        }
        if(target<0||i>=nums.size()){
            return INT_MIN;
        }
        if(dp[i][target]!=-1){
            return dp[i][target];
        }
        int take=-1e9;
        if(target>=nums[i]){
         take=1+solve(nums,i+1,target-nums[i],dp);
        }
        int nottake=solve(nums,i+1,target,dp);

        return  dp[i][target]=max(take,nottake);
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        vector<vector<int>>dp(nums.size()+1,vector<int>(target+1,-1));
        int ans=solve(nums,0,target,dp);
         if(ans<0){
             return -1;
         }
         return ans;
       
        
    }
};