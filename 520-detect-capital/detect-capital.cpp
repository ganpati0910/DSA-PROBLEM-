class Solution {
public:
    bool de(char c){
        if(c>=65&&c<=90){
            return true;
        }
        return false;
    }
    bool detectCapitalUse(string word){
        int n=word.size();
        
        int capi=0;
        int start=0;
        for(int i=0; i<n; i++){
           if(i==0){
               if(de(word[i])){
                   capi++;
                   start++;
               }
           }
            else if(de(word[i])){
                capi++;
                
            }
        }
        if(capi==n||capi==0||(capi==1&&start==1)){
            return true;
        }
        return false;
        
        
    }
};