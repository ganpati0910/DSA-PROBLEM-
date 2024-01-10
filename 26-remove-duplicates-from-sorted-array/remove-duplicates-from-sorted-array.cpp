class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int red=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[red]!=nums[i]){
                red++;
                nums[red]=nums[i];
            }
        }
        return red+1;
    }
};