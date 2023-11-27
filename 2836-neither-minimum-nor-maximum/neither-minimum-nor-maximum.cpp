class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==2||n==1||n==0){
            return -1;
        }
        else{
            return nums[1];
        }
        
    }
};