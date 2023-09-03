class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        unordered_map<char,int>mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        string ans="";
        while(!pq.empty()){
           for(int j=0; j<pq.top().first; j++){
               ans+=pq.top().second;
           }
            pq.pop();
        }
      return ans;
        
    }
};