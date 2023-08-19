class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n=nums.size();
        int k=n/3;
        vector<int>ans;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto i:mp){
            if(i.second>k){
                ans.push_back(i.first);
            }
        }
          return ans;
        
    }
};