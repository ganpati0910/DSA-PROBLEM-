class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,pair<int,int>>mp;
        for(int i=0; i<s.size(); i++){
            if(mp.find(s[i])!=mp.end()){
                mp[s[i]].second++;
            }
            else{
                mp[s[i]]={i,1};
            }
        }
        int ans=INT_MAX;
        for(auto i :mp){
            if(i.second.second==1){
                if(i.second.first<ans){
                    ans=i.second.first;
                }
            }
        }
        if(ans==INT_MAX){
           return -1;
        }

        return ans;
    }
};