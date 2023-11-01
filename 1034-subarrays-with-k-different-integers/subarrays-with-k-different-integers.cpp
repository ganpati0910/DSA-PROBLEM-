class Solution {
public:
    int count(vector<int>&nums,int k){
        unordered_map<int,int>mp;
        int i=0;
        int j=0;
        int ans=0;
        while(j<nums.size()){
            mp[nums[j]]++;
            
              while(mp.size()>k){
                  mp[nums[i]]--;
                  if(mp[nums[i]]==0){
                      mp.erase(nums[i]);
                   }
                  i++;
              }
                    ans+=j-i+1;  
            j++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return count(nums,k)-count(nums,k-1);
        

    }
};