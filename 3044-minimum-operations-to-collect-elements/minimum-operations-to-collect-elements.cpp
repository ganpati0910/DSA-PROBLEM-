class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int>st;
        int count=0;
        for(int i=nums.size()-1; i>=0; i--){
            count++;
            if(nums[i]<=k){
                st.insert(nums[i]);
            }
            if(st.size()==k){
                return count;
            }
       }
        return 0;
        
    }
};