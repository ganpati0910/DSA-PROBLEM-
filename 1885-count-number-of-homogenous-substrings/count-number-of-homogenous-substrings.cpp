class Solution {
public:
    int countHomogenous(string s) {
        int mod=(int)(1e9+7);
        int ans=0;
       int count=0;
       int prev=0;
       for(int i=0; i<s.size(); i++){
           if(s[i]==prev){
               count++;
           }
           else{
               count=1;
           }
               prev=s[i];
               ans=(ans+count)%mod;
       }
       return ans;
        
    }
};