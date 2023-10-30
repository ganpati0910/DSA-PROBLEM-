class Solution {
public: 
int mod=(int)1e9+7;
    int count(int length,int low,int high,int zero,int one, vector<int>&dp){
        if(length>high){
            return 0;
        }
        int ans=0;
        if(length>=low&&length<=high){
            ans++;
        }
        if(dp[length]!=-1) return dp[length];
        ans+=count(length+one,low,high,zero,one,dp);
        ans+=count(length+zero,low,high,zero,one,dp);
        
        return dp[length]=(ans)%mod;
    }
    int countGoodStrings(int low, int high, int zero, int one) {
        vector<int>dp(high+1,-1);
        int ans1=count(0,low,high,zero,one,dp);
        return  ans1;
    }
};