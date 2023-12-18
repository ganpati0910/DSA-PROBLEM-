class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int n=nums.size();
        int a=nums[n-1]*nums[n-2];
        int b=nums[0]*nums[1];

        ans=a-b;
        return ans;
        
    }
};