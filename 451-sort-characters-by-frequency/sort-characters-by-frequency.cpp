class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        priority_queue<pair<int,char>> pq;
        unordered_map<char,int>mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        for(auto it:mp){
            pq.push({it.second,it.first});
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