class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int>mp;
        int maxi=INT_MIN;
        for(auto it :s){
            mp[it]++;
            maxi=max(maxi,mp[it]);
        }
        set<char>st;
        for(auto it :mp){
            if(it.second==maxi){
               st.insert(it.first);
            }
        }
        string ans="";
        for(int i=s.size()-1; i>=0; i--){
            if(st.find(s[i])!=st.end()){
                ans+=s[i];
                st.erase(s[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};