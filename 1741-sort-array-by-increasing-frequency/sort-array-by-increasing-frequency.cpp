class Solution {
public:
    vector<int> frequencySort(vector<int>& nums){
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>> pq;
        int n=nums.size();
        vector<int>ans;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            pq.push({-it.second,it.first});
        }
        while(!pq.empty()){
            for(int i=0; i<-(pq.top().first); i++){
                ans.push_back(pq.top().second);
            }
            pq.pop();
        }
        // reverse(ans.begin(),ans.end());
        return ans;
        
    }
};