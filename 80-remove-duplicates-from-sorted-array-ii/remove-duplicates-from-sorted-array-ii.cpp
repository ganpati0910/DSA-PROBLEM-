class Solution {
public:
    int removeDuplicates(vector<int>& nums){
       if(nums.size()<=2){
           return nums.size();
       }
       int rem=0;
       for(int i=2; i<nums.size(); i++){
           if(nums[rem]!=nums[i]){
               nums[rem+2]=nums[i];
               rem++;
           }
       }
       return rem+2;

    }
};