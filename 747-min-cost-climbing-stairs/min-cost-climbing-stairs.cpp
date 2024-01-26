class Solution {
public:
    int solve(vector<int>&cost,int i,vector<int>&dp){
        if(i==0||i==1){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int step1=cost[i-1]+solve(cost,i-1,dp);
        int step2=cost[i-2]+solve(cost,i-2,dp);
        return dp[i]= min(step1,step2);
    }
    int minCostClimbingStairs(vector<int>&cost){
        int n=cost.size();
        vector<int>dp(n+1,-1);
     return solve(cost,n,dp);
        
    }
};