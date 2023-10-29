class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                c++;
                ans=max(c,ans);
            }
            else{
                c=0;
            }
        }
        return ans;
    }
};