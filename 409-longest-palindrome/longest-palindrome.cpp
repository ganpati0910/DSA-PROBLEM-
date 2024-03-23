class Solution {
public:
    int longestPalindrome(string s) {
       
        unordered_map<char,int>mp1;
        for(int i=0; i<s.size(); i++){
            mp1[s[i]]++;
        }
        int ans=0;
        int c=0;
        for(auto it:mp1){
            if(it.second%2==0){
                ans+=it.second;
            }
            else if(it.second>2&&it.second%2==1){
                ans+=it.second-1;  
            } 
        }
        for(auto it  :mp1){
            if(it.second%2==1){
                ans++;
                break;
            }
        }
        return ans;
        
    }
};