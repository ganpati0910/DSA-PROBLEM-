class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int prod=1;
        int i=0;
        int j=0;
        if(k<=1){
            return 0;
        }
        while(j<n){
          prod=prod*nums[j];
            while(prod>=k){
                prod/=nums[i];
                  i++;
            }
          if(prod<k){
              count+=j-i+1;
           }
          j++;
        }
       return count;
        
    }
};