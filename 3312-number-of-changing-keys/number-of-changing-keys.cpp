class Solution {
public:
    int countKeyChanges(string s){
        int n=s.size();
        int ans=0;
        //change all uppercase to lowercase 
        for(int i=0; i<n; i++){
           s[i]=tolower(s[i]);
        }
        
        for(int i=1; i<n; i++){
           if(s[i]!=s[i-1]){
               ans++;
           }
        }
        
        return ans;
    }
};