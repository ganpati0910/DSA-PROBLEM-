class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int count=1;
        int maxi=1;
        int n=nums.size();
        if(nums.size()==0){
            return 0;
        }
        for(int i=1; i<n; i++){
            if(nums[i-1]==nums[i]){
                continue;
            }
            if(nums[i]-nums[i-1]==1){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=1;
            }

        }
        return max(maxi,count);
    }
};