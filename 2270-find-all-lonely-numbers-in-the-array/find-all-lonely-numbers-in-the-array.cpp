class Solution {
public:
    vector<int> findLonely(vector<int>& nums){
        vector<int>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==1&&mp.find(it.first+1)==mp.end()&&mp.find(it.first-1)==mp.end()){
                ans.push_back(it.first);
            }
        }
        return ans;
        
    }
};