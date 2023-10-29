class Solution {
public:   
    
    int characterReplacement(string s, int k) {
        int n=s.size();
        int vec[26]={0};
        int i=0;
       int j=0;
       int ans=INT_MIN;
        while(j<n){
            vec[s[j]-'A']++;
           if((j-i+1)-*max_element(vec,vec+26)>k){
               while((j-i+1)-*max_element(vec,vec+26)>k){
                  vec[s[i]-'A']--;
                  i++; 
               }
           }
           ans=max(ans,j-i+1);
          j++;
        }

        return ans;
    }
};