class Solution {
public:
    int removeDuplicates(vector<int>& nums){
        int rem=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[rem]!=nums[i]){
                rem++;
                nums[rem]=nums[i];
            }
        }
        return rem+1;
        
    }
};