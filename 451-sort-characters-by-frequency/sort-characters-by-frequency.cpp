class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>mp;
        for(int i=0; i<s.size(); i++){
                mp[s[i]]++;
        }
         priority_queue<pair<int,char>> pq;
        for(auto i:mp){
          pq.push({i.second,i.first});
        }
        while(!pq.empty()){
            for(int j=0; j<pq.top().first; j++){
                ans+=pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};