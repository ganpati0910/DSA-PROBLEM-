class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int ans;
        int k=n/2;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>k){
                ans=i.first;
            }
        }
        return ans;
    }
};