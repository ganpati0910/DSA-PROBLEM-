class Solution {
public:
    string frequencySort(string s) {
     priority_queue<pair<int,char>> pq;
     unordered_map<char,int>mp;
     string ans="";
     for(int i=0; i<s.size(); i++){
         mp[s[i]]++;
     }
     for(auto i:mp){
         pq.push({i.second,i.first});
     }
    while(!pq.empty()){
        for(int i=0; i<pq.top().first; i++){
            ans+=pq.top().second;
        }
        pq.pop();
    }
    return ans;
    }
};