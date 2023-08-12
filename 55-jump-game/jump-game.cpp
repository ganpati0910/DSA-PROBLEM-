class Solution {
public: 
    //  bool jump(int i,vector<int>&nums){
    //       int n=nums.size();
    //      if(nums[0]==0){
    //          return false;
    //      }
    //  }
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxreach=0;
        for(int i=0; i<n; i++){
            if(i>maxreach){
                return false;
            }
            else{
                maxreach=max(maxreach,i+nums[i]);
            }
        }
        return true;
        

         

    }
};