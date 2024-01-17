class Solution {
public:
    long long subArrayRanges(vector<int>& arr){
       long long ans=0;
        int n=arr.size();
        long long summin=0;
        for(int i=0;i<n; i++){
            int minele=arr[i];
           for(int j=i; j<n; j++){
               minele=min(minele,arr[j]);
               summin=summin+minele;
           }
        }
        long long summax=0;
        for(int i=0;i<n; i++){
            int maxele=arr[i];
            for(int j=i; j<n; j++){
                maxele=max(maxele,arr[j]);
              
                summax=summax+maxele;
            }
        }
        ans=summax-summin;
        return ans;
        
    }
};