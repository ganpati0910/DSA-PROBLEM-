class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int start=0;
        int end=nums.size()-1;
        int maxisum=0;
        while(start<end){
            if(nums[start]+nums[end]>maxisum){
                maxisum=nums[start]+nums[end];
            }
            start++;
            end--;
        }
       return maxisum;  
    } 
};