class Solution {
public:

       int solve(int n, vector<int>&dp){
           if(n==0){
            return 1;
        }

        if(n<0){
            return 0;
        }

        if(dp[n]!=-1){
            return dp[n];
        }


        int left=solve(n-1,dp);
        int right=solve(n-2,dp);

        dp[n]=left+right;

        return dp[n];
        
       }
       
    int climbStairs(int n) {
        vector<int>dp(n+1);
        dp[0] = 1;
        dp[1] = 1;
        for(int i=2; i<=n; i++){
            int left=dp[i-1];
            int right=dp[i-2];
            dp[i]=left+right;
        }
        return dp[n];
        
    }
};