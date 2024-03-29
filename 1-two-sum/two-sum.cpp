class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int n=nums.size();
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            int less=target-nums[i];
            if(mp.find(less)!=mp.end()){
                ans.push_back(mp[less]);
                ans.push_back(i);
                return ans;
            }
            mp[nums[i]]=i;
        }
        return ans;
    }
};