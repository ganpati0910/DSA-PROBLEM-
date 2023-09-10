class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //    if(nums[i]>nums[i+1]){
        //        return i;
        //    }
            
        // }
        // return n-1;
        return max_element(nums.begin(), nums.end()) - nums.begin();
    }
};