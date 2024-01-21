class Solution {
public:
    long long subArrayRanges(vector<int>& arr){
        long long ans=0;
        int n=arr.size();
        long long sum1=0;
        long long sum2=0;
        for(int i=0; i<n; i++){
           int miniele=arr[i];
           int maxiele=arr[i];
           for(int j=i+1; j<n; j++){
               miniele=min(miniele,arr[j]);
               maxiele=max(maxiele,arr[j]);
               sum1=sum1+(maxiele-miniele);
              
           }
        }

       
       
        return sum1;
        
    }
};