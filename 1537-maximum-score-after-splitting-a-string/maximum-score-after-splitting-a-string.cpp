class Solution {
public: 
    
    int maxScore(string s) {
        int n=s.size();
         int sumzero=0;
         int  sumone=0;
         int ans=INT_MIN;
        for(int i=0; i<s.size()-1; i++){
             int sumzero=0;
            int  sumone=0;
            for(int j=0; j<=i; j++){
                if(s[j]=='0'){
                    sumzero++;
                }
            }
            for(int j=i+1; j<s.size(); j++){
                if(s[j]=='1'){
                    sumone++;
                }
            }
            if(sumone+sumzero>ans){
                ans=sumzero+sumone;
            }
           
        }
       return ans;
        
    }
};