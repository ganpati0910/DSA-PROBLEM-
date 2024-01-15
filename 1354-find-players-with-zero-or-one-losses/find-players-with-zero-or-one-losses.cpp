class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches){
        vector<vector<int>>ans;
        unordered_map<int,int>mp;
        vector<int>ans1;
        vector<int>ans2;
        int n=matches.size();
        for(int i=0; i<n; i++){
            mp[matches[i][1]]++;
        }
        for(int i=0; i<n; i++){
            if(mp.find(matches[i][0])==mp.end()){
                mp[matches[i][0]]=0;
            }
        }
        for(auto it:mp){
            if(it.second==1){
                ans2.push_back(it.first);
            }
            if(it.second==0){
                ans1.push_back(it.first);
            }
        }
        sort(ans1.begin(),ans1.end());
        sort(ans2.begin(),ans2.end());
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
        
        
    }
};