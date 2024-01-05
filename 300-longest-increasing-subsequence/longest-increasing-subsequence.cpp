class Solution {
public: 
      int f(int indx,int prev,vector<int>&nums,int n,vector<vector<int>>&dp){
          // base case we run out of the elements.      
          if(indx==n){
              return 0;
          }
          if(dp[indx][prev+1]!=-1){
              return dp[indx][prev+1];
          }
          int len=0 + f(indx+1,prev,nums,n,dp);
          if(prev==-1 || nums[indx]>nums[prev]){
              len=max(len,1+f(indx+1,indx,nums,n,dp));
          }
          return  dp[indx][prev+1]=len;

      }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return  f(0,-1,nums,nums.size(),dp);
        
    }
};