class Solution {
public:
    int maximumCount(vector<int>& nums){
        int ans1=0;
        int ans2=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                ans1++;
            }
            else if(nums[i]==0){
                continue;
            }
            else{
                ans2++;
            }
        }
        return max(ans1,ans2);
        
    }
};