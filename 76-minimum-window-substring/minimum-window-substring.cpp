class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;
        for(int i=0; i<t.size(); i++){
            mp[t[i]]++;
        }
        int mini=INT_MAX;
        int count=0;
        int i=0;
        int j=0;
        int start=-1;
        while(j<s.size()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
                if(mp[s[j]]==0){
                    count++;
                }
            } 
            if(count==mp.size()){
                 while(i<=j&&count==mp.size()){
                    if(mini>j-i+1){
                        mini=j-i+1;
                        start=i;
                    }
                    if(mp.find(s[i])!=mp.end()){
                        mp[s[i]]++;
                        if(mp[s[i]]==1){
                            count--;
                        }  
                    }
                    i++;
                 }
             }
             j++;
        }
        if(start==-1)return "";
        return s.substr(start,mini);
    }
};