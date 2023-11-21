#pragma GCC optimize("O3")
class Solution {
public:
    const long long mod=1e9+7;
    int rev(int x){
        int y=0;
        #pragma unroll
        while(x>0){
            int r=x%10;
            y=10*y+r;
            x/=10;
        }
        return y;
    }
    int countNicePairs(vector<int>& nums) {
        int n=nums.size();
        #pragma unroll
        for(int& x:nums)
            x-=rev(x);
        
        sort(nums.begin(), nums.end());
        long long ans=0;
        int f=1;
        #pragma unroll
        for(int i=1; i<n; i++){
            #pragma unroll
            while(i<n && nums[i]==nums[i-1]){
                i++;
                f++;
            }
            if (f>1) ans=(ans+(long long)(f-1)*f/2)%mod;
            f=1;
        }
        return ans; 
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();