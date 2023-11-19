class Solution {
public:
    int reductionOperations(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int pre=nums[n-1];
       int ans=0;
        for( int i=n-2; i>=0; i--){
            if(nums[i]==pre){
                continue;
            }
            else{
                pre=nums[i];
                  ans+=(n-i-1);
            }
        }
        return ans;
    }
};