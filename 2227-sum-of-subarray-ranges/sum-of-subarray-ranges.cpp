class Solution {
public:
    long long subArrayRanges(vector<int>& arr){
        long long ans=0;
        int n=arr.size();
        long long sum1=0;
        long long sum2=0;
        for(int i=0; i<n; i++){
           int miniele=arr[i];
           for(int j=i+1; j<n; j++){
               miniele=min(miniele,arr[j]);
               sum1=sum1+miniele;
           }
        }

        for(int i=0; i<n; i++){
            int maxele=arr[i];
            for(int j=i+1; j<n; j++){
                maxele=max(maxele,arr[j]);
                sum2=sum2+maxele;
            }
        }
        ans=sum2-sum1;
        return ans;
        
    }
};