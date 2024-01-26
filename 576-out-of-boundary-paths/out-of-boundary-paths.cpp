class Solution {
public:
    int solve(int m,int n,int maxmove,int startrow,int startcolumn,vector<vector<vector<int>>>&dp){
        int mod=(int)(1e9+7);
        if(startrow<0||startrow>=m||startcolumn<0||startcolumn>=n){
            return 1;
        }
        int up=0;
        int down=0;
        int left=0;
        int right=0;
        if(dp[startrow][startcolumn][maxmove]!=-1){
            return dp[startrow][startcolumn][maxmove];
        }
        if(maxmove>0){
            up=solve(m,n,maxmove-1,startrow-1,startcolumn,dp);
        }
        if(maxmove>0){
            down=solve(m,n,maxmove-1,startrow+1,startcolumn,dp);
        }
        if(maxmove>0){
            left=solve(m,n,maxmove-1,startrow,startcolumn-1,dp);
        }
        if(maxmove>0){
            right=solve(m,n,maxmove-1,startrow,startcolumn+1,dp);
        }
        return  dp[startrow][startcolumn][maxmove]=(((up+down)%mod+(left+right)%mod)%mod);       
    }
    int findPaths(int m, int n, int maxmove, int startrow, int startcolumn) {
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(maxmove+1,-1)));
        return solve(m,n,maxmove,startrow,startcolumn,dp);     
    }
};