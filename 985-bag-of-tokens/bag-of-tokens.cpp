class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        
        sort(tokens.begin(),tokens.end());
        int ans=0;
        int maxi=0;
        int i=0;
        int j=tokens.size()-1;
        while(i<=j){
            if(power>=tokens[i]){
                ans++;
                power-=tokens[i];
                maxi=max(maxi,ans);
                i++;
            }
            else if(ans>0){
                ans--;
                power+=tokens[j];
                j--;
            }
            else{
                break;
            }


        }  
      return maxi;  
    }
};