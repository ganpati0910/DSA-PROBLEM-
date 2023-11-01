class Solution {
public:
    int maxScore(vector<int>& cardpoints, int k) {
        int totsum=0;
        int maxi=0;
        int i=0;
        int j=0;
        int sum=0;
        int n=cardpoints.size();
        for(int i=0; i<n; i++){
            totsum+=cardpoints[i];
        }
        if(n==k){
            return totsum;
        }
        while(j<n){
           sum+=cardpoints[j];
           if(j-i+1==n-k){
             maxi=max(maxi,totsum-sum); 
             sum-=cardpoints[i];
             i++;
           }
              j++;
        }
     return maxi;
       
    }  

};